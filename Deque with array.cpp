#include <iostream>
using namespace std;
#define size 5
class Deque{
    private:
    int dq[size];
    int front,rear;
    public:
    Deque(){
        front=-1;
        rear=-1;
    }
    void insertFront(int x){
        if((front==0 && rear==size-1)||(front==rear+1)){
            cout<<"Queue is full-Queue Overflow";
            return;
        }
        else if(front==-1 && rear==-1)
        front=rear=0;
        else if(front==0)
        front=size-1;
        else
        front=front-1;
        dq[front]=x;
    }
    void insertRear(int x){
        if((front==0 && rear==size-1)||(front=rear+1)){
            cout<<"Queue is Full-Queue Overflow";
            return;
        }
        else if(front==-1 && rear==-1)
        front=rear=0;
        else if(rear==size-1)
        rear=0;
        else
        rear++;
        dq[rear]=x;
    }
    int deleteFront(){
        if(front==-1 && rear==-1){
            cout<<"Queue is Empty-Underflow";
            return -1;
        }
        int item=dq[front];
        if(front==rear)
        front=rear=-1;
        else if(front==size-1)
        front=0;
        else
        front++;
        return item;
    }
    int deleteRear(){
        if(front==-1 && rear==-1){
                cout<<"Deque is empty-Underflow";
                return -1;
            }
            int item=dq[rear];
            if(front==rear)
            front=rear=-1;
            else if(rear==0)
            rear=size-1;
            else
            rear--;
            return item;
    }
    int getFront(){
        if(front==-1){
            cout<<"Deque is empty";
            return -1;
        }
        return dq[front];
    }
    int getRear(){
        if(rear==-1){
            cout<<"Deque is empty";
            return -1;
        }
        return dq[rear];
    }
    void display(){
        if(front==-1){
            cout<<"Deque is empty";
            return;
        }
        cout<<"\n Elements in deque are: ";
        int i=front;
        while(i!=rear){
            cout<<dq[i]<<" ";
            i=(i+1)%size;
            }
            cout<<dq[rear];
}
};
int main(){
    Deque dq;
    int opt,val;
    int x;
    do{
        cout<<"\n Enter option: ";
        cin>>opt;
        switch(opt){
            case 1:
            cout<<"Enter element: ";
            cin>>val;
            dq.insertFront(val);
            break;
            case 2:
            cout<<"Enter element: ";
            cin>>val;
            dq.insertRear(val);
            break;
            case 3:
            x=dq.deleteFront();
            if(x!=-1)
            cout<<x<<": is deleted from Front\n";
            break;
            case 4:
            x=dq.deleteRear();
            if(x!=-1)
            cout<<x<<": is deleted from Rear\n";
            break;
            case 5:
            x=dq.getFront();
            if(x!=-1)
            cout<<x<<": is front element\n";
            break;
            case 6:
            x=dq.getRear();
            if(x!=-1)
            cout<<x<<": is rear element\n";
            break;
            case 7:
            dq.display();
            break;
        }
    }
    while(opt!=8);
    return 0;
}
