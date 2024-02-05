#include<iostream>
using namespace std;
#define max 3
class queue
{
public:
    int front,rear,arr{max};
    queue()
    {
        front=rear=-1;
    }
    void enqueue(int item);
    void dequeue();
    void peek();
    void display();
};
void queue::enqueue(int item)
{
    if(rear==max-1)
        cout<<"\nqueue is full(queue is overflow):";
    else if(front=rear=-1)
    front=rear=0;
    arr[front]=item;
    else
        rear=rear+1;
    cout<<"\ninserted element is:"<<item;

}
void queue::dequeue()
{
    if(front=-1&rear=-1)
        cout<<"\nqueue is empty(queue is underflow):";
    else if (front==rear)
    front=rear=-1;
    else
        item=arr[front];
    cout<<"\ndeleted item is:";
    front=front+1;
}
void queue::peek()
{
    if(front=-1&rear=-1)
        cout<<"queue is empty(queue is underflow):";
    else
        item=arr[front];
    cout<<"item at the front position:"<<item;
    front=front+1;
}
void queue::display()
{
    if(front=-1&rear=-1)
        cout<<"queue is empty";
    else
        cout<<"queue element is:"<<item;
    for(int i=front;i<=rear;i++)
        cout<<"   "<<arr[i];

}
}
int main()
{
    queue q;
    q.dequeue(10);
    q.dequeue(20);
    q.dequeue(30);
    q.dequeue(40);
    q.peek();
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;
}
