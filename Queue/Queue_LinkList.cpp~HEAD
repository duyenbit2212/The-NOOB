#include <iostream>
typedef int elementtype;
#define MAX 20
using namespace std;

// Dinh nghia 1 node
typedef struct node {
	elementtype data;
	node* next;
};

// Dinh nghia hang doi
typedef struct queue{
	struct node *front, *rear;
};

// Khai bao hang doi
struct queue q;

// Khoi tao 1 queue rong
void Create(struct queue* q)
{
	q->front = q->rear = NULL;
}

// Kiem tra tinh rong cua queue
int isEmpty(struct queue* q)
{
	if (q->front == NULL) return 1;
	return 0;
}

//Kiem tra tinh day cua queue
int isFull(struct queue* q)
{
	return (q->rear - q->front + 1 == MAX);
}

// Them 1 phan tu vao cuoi queue
void Push(struct queue* q, elementtype &x)
{
	struct node* p = new node;
	p->data = x;
	p->next = NULL;
	if (isEmpty(q)) q->front = q->rear = p;
	else
	{
		q->rear->next = p;
		q->rear = p;
	}
}

// Lay 1 phan tu o dau hang doi ra
int Pop(struct queue* q, elementtype &x)
{
	if (isEmpty(q)) return 0;
	else
	{
		struct node* p = q->front;
		x = p->data;
		q->front = q->front->next;
		delete p;
		return 1;
	}
}

//Demo
int main()
{
	int n, x;
	cin >> n;
	while (n)
	{
		cin >> x;
		Push(&q, x);
		n--;
	}
	while (!isEmpty(&q))
	{
		Pop(&q, x);
		cout << x << " ";
	}
	system("pause");
	return 0;
}