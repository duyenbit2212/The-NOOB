#include <iostream>
using namespace std;

void Merge(int a[], int left, int mid, int right);

void MergeSort(int a[], int left, int right)
{
	if (right>left)
	{
		int mid; 
		mid = (left + right) / 2;
		MergeSort(a, left, mid); // Goi de quy mang con ben trai
		MergeSort(a, mid + 1, right); // Goi de quy mang con bên phai
		Merge(a, left, mid, right); // Goi hàm so sánh 2 mang con
	}
}

void Merge(int a[], int left, int mid, int right)
{
	int *temp; // mang tam
	int i = left; 
	int j = mid + 1; 

	temp = new int[right - left + 1]; 

	for (int k = 0; k <= right - left; k++)
	{
		// Kiem phan tu cua mang con ben trai va ben phai
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			i++; // Vi tri tiep theo cua mang ben trai
		}
		else // Nguoc lai copy phan tu cua mang con ben phai vao mang tam
		{
			temp[k] = a[j];
			j++; // Vi tri phan tu tiep theo cua mang ben phai
		}

		// Kiem tra mang con ben trai con phan tu nao khong
		if (i == mid + 1)
		{
			while (j <= right)
			{
				k++;
				temp[k] = a[j];
				j++;
			}
			break;
		}

		// Kiem tra mang con ben phai con phan tu nao khong
		if (j == right + 1)
		{
			while (i <= mid)
			{
				k++;
				temp[k] = a[i];
				i++;
			}
			break;
		}
	}

	for (int k = 0; k <= right - left; k++) // Chep mang tam vao mang chinh
		a[left + k] = temp[k];
	delete temp;
}

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so " << i + 1 << ": ";
		cin >> a[i];
	}
	MergeSort(a, 0, n-1);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	system("pause");
	return 0;
}