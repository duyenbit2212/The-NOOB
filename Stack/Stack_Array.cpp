#include <iostream>
using namespace std;
#define Max 1
struct Stack
{
	int n;
	int Array[Max];
};

void Init (Stack &s)
{
	s.n = 0;
}

int IsEmpty (Stack s)
{
	if (s.n == 0)
		return 1;
	return 0;
}

int IsFull (Stack s)
{
	if (s.n == Max)
		return 1;
	return 0;
}

void Push (Stack &s , int x)
{
	s.Array[s.n++] = x;
}

int Pop (Stack &s)
{
	int x = s.Array[--s.n];
	return x;
}

int main()
{
	Stack s;
	Init(s);
	cout<<IsEmpty(s)<<endl;
	Push(s,2);
	cout<<IsFull(s)<<endl;
	cout<<Pop(s);
	return 0;
}