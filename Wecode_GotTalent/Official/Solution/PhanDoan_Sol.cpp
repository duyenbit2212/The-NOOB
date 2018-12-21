#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> point;
point size(int n){
	/*if (n == 1) return {2, 3};
	else{
		auto a = size(n - 1);
		return {a.first *2 + 1, a.second *2 + 1};
	}*/
	int x = 2, y = 3;
	while (n > 1){
		x = x * 2 ;
		y = y * 2 + 1;
		n--;
	}

	return {x, y};
}

pair<point, point> open(int n, int rotate){
	auto s = size(n);
	// a is the array co-ordinate of top left, top right, bottom right, bottom left corner
	vector<point> a = {{0,0}, {0, s.second-1}, {s.first-1, s.second-1}, {s.first-1, 0}};

	int i, j;
	if (n % 2 == 0){
		i = 0;
		j = 1;
	} else {
		i = 0;
		j = 3;
	}
	for(int k = 0; k < rotate; k +=90){
		i = (i + 1)%4;
		j = (j + 1)%4;
	}
	return {a[i], a[j]};

}

void print(vector<vector<char>> a){
	for(auto x : a){
		for(auto i : x) cout << i;
		cout << endl;
	}
	cout << "----------------------------------" << endl;
}
vector<int> rotations(int n, int rotate){
	//The position and rotation of sub group
	vector<int> kq;
	if (n % 2 == 0){
		/*
		 * the rotation for each position is
		 * 0	180
		 * 90	90
		 */
		kq = {0, 180, 90, 90};
	} else {
		/*
		 * the rotation for each position is
		 * 0	270
		 * 180	270
		 */
		kq = {0, 270, 270, 180};
	}
	for(int i = 0; i < rotate; i += 90){
		auto t = kq[3];
		for(int i = 3; i > 0; i--)
			kq[i] = (kq[i-1]+90)%360;
		kq[0] = (t + 90)%360;
	}
	return kq;
}

void incre(point &x, int r, int c){
	x.first += r;
	x.second += c;
}
void printp(point a){
	cout << "("<< a.first << "," << a.second << ")";
}
pair<point,point> pair_open_point(vector<point>a){
	vector<point> kq {{0,0},{0,0}};
	for(int i = 0; i < 2; i++){
		for(int j = 2; j < 4; j++){
			if(a[i].first == a[j].first && abs(a[j].second - a[i].second) < 3){
				kq= {a[i], a[j]};
				break;
			}
			if(a[i].second == a[j].second && abs(a[j].first - a[i].first) < 2){
				kq = {a[i], a[j]};
				break;
			}
		}
	}
	sort(kq.begin(), kq.end());
	return {kq[0], kq[1]};
}
vector<vector<char>> block(int n, int rotate){
	vector<vector<char>> n1 = {{' ', '_', ' '},
							   {' ', '_', '|'}};

	vector<vector<char>> n1_90 = {{' ', ' ', ' '},
			   	   	   	   	   	   {'|', '_', '|'}};

	auto t = size(n);
	auto pt = size(n-1);
	vector<vector<char>> kq(t.first, vector<char>(t.second, ' '));
	if (n == 1){
		if (rotate == 90) return n1_90;
		if (rotate == 0) return n1;
		if (rotate == 270) {
			return {{' ', '_', ' '},
   	   	   	   	     {'|', ' ', '|'}};
		}
		if (rotate == 180){
			return {{' ', '_', ' '},
				     {'|', '_', ' '}};
		}
	} else {
		vector<point> pos = {{0,0}, {0, pt.second+1}, {pt.first, pt.second+1}, {pt.first, 0}};
		vector< pair<char, point> > connections;

		vector<int> rots = rotations(n, rotate);

		for(int i = 0; i < 4; i++){
			auto prev_block = block(n-1, (rots[i])%360);
			for(int r = 0; r < pt.first; r++){
				for(int c = 0; c < pt.second; c++){
					kq[r+pos[i].first][c+pos[i].second] = prev_block[r][c];
				}
			}
			//print(kq);
		}
		//print(kq);

		//Draw connector
		for(int i = 0; i < 4; i++){
			int from = i, to = (i+1)%4;
			auto fends = open(n-1, rots[from]), tends = open(n-1, rots[to]);
			incre(fends.first, pos[from].first, pos[from].second);
			incre(fends.second, pos[from].first, pos[from].second);
			incre(tends.first, pos[to].first, pos[to].second);
			incre(tends.second, pos[to].first, pos[to].second);

			auto pp = pair_open_point({fends.first, fends.second, tends.first, tends.second});

			if (pp.first != point({0,0})){
				if (pp.first.first == pp.second.first){
					//equal rows, use _
					for(int i = pp.first.second; i <= pp.second.second; i++){
						int r1 = 0, r = pp.first.first;
						if (pp.first.first < t.first-1) r1 = pp.first.first + 1;
						else r1 = pp.first.first;
						if (kq[r1][i] == ' ' && kq[r][i] == ' ') kq[pp.first.first][i] = '_';
					}
				}
				else {
					//equal columns, use |
					for(int i = pp.first.first + 1; i <= pp.second.first; i++)
						if (kq[i][pp.first.second] == ' ') kq[i][pp.first.second] = '|';
				}
			}
			//cout << "connect from "; printp(pp.first); cout << " to " ; printp(pp.second); cout  << endl;
			//print(kq);
		}

	}
	return kq;
}

vector<vector<char>>fractal( int n ){
	auto s = size(n);
	vector<vector<char>> kq(s.first, vector<char>(s.second, ' '));

	return block(n, 0);
}

int main(){
	long n;
	cin >> n;
	auto a = fractal(n);
	for (auto i : a){
		for (auto j : i){
			cout << j;
		}	
		cout << endl;
	}
	return 0;
}
