//circular queue
#include<bits/stdc++.h>
#define n 5
using namespace std;

int front = -1;
int rear = -1;
int queue[n];

void enque(int x)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if((rear + 1) % n == front)
    {
        cout<<"queue is overflow"<<endl;
    }
    else
    {
        rear = (rear+1) % n;
        queue[rear] = x;
    }
}

void deque()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is underflow"<<"\n";
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        cout<<deque[front]<<"\n";
        front = (front + 1) % n;
    }
}

void show()
{
    int i = front;
    if(front == -1 && rear == -1)
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        while(i != rear)
        {
            cout<<queue[i]<<" ";
            i = (i + 1) % N;
        }
        cout<<queue[i];
    }
}


int main()
{
    int n;
    cin>>n;

    enque(n);
    deque();
}
