#include <iostream>
typedef int elementtype;
#define MAX 20
using namespace std;

// Dinh nghia 1 node
typedef struct node {
	elementtype data;
	node* next;
};

typedef struct Stack
{
	node* top;
};

// Khai bao stack
struct Stack S;

// Khoi tao 1  rong
 void Create(Stack &S)
{
	 S.top = NULL;
}

// Kiem tra tinh rong cua stack
int isEmp(Stack &S)
{
	return (S.top == NULL);
}

// Them 1 phan tu vao stack
void Push(Stack &S ,elementtype &x)
{
	struct node* q = new node;
	q->data = x;
	if (S.top == NULL)
	{
		q->next = NULL;
		S.top = q;
	}
	else
	{
		q->next = S.top;
		S.top = q;
	}
}

// Lay 1 phan tu trong stack
int Pop(Stack &S, elementtype &x)
{
	if (!isEmp(S))
	{
		struct node* p = S.top;
		x = S.top->data;
		S.top = S.top->next;
		delete p;
		return 1;
	}
}

// Tim phan tu p dinh stack
int top(Stack &S)
{
	if (!isEmp(S))
		return S.top->data;
}
//Demo
int main(){
	int n, x;
	cin >> n;
	while (n)
	{
		cin >> x;
		Push(S, x);
		n--;
	}
	while (!isEmp(S))
	{
		Pop(S, x);
		cout << x << " ";
	}
	return 0;
}