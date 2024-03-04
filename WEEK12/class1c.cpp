//Circular Queue
#include<iostream>
using namespace std;

class CirQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    CirQueue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void push(int data)
    {
        //Queue full

        //Single elemet case ->first element

        //circular flow

        //normal flow 

        //TODO:add one more condition in the QUEUE FULL if block(rear==(front-1)%size-1)
        if(front==0 && rear==size-1)
        {
            cout<<"Q is full, cannot insert"<<endl;
        }
        else if(front==-1)
        {
            front=rear=0;
            arr[rear]=data;
        }
        else if(rear==size-1 && front!=0)
        {
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }

    }

    void pop()
    {
        //empty check
        //single element case
        //circular flow
        //normal flow

        if(front==-1)
        {
            cout<<"Q is empty, cant pop"<<endl;
        }
        else if(front==rear)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if (front==size-1)
        {
            front=0;
            //is case me rear zero pe ho skta hai but hame us se koi matlab nhi
            //kyonki delete kr rhe hain to ye possiblity hai ki dono same position pe aa jaye
        }
        else{
            front++;
        }

    }

};
int main()
{

return 0;
}