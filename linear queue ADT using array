#include<iostream>
using namespace std;
#define MAX 6 
class Queue 
{
    private:
        int qu[MAX];
        int front,rear;
    public:
        Queue(){
            front=-1;
            rear=-1;
        }
void enqueue(int item){
    if(rear==MAX-1){
        cout<<"\n Queue is Full-overflow";
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
    }
    else{
        rear++;
    }
    qu[rear]=item;
}
int dequeue(){
    int item;
    if(front==-1 || front>rear)
    {
        cout<<"\n Queue is Empty-underflow";
        return -1;
    }
    else{
        item=qu[front];
        front++;
        if(front>rear)
        front=rear=-1;
        return item;
    }
}
int peek(){
        if(front == -1 || front > rear){
            cout << "\n The Queue is Empty\n";
            return -1;
        }
        else{
            return qu[front];
        }
    }     
void display(){
        if(front == -1 || front > rear){
            cout << "\n The Queue is Empty\n";
        }
        else{
            cout << "\n The Queue Elements are: ";
            for(int i = front; i <= rear; i++)
                cout << qu[i] << " ";
        }
    }

};
int main(){
    Queue q;
    int opt,val;
    do{
        cout<<"Enter your option: ";
        cin>>opt;
        switch(opt){
            case 1:
             cout<<"Enter element to insert: ";
             cin>>val;
             q.enqueue(val);
             break;
             
            case 2:
             val=q.dequeue();
             if(val!=-1)
             cout<<"Deleted element= "<<val;
             break;
             
            case 3:
             val=q.peek();
             if(val!=-1)
             cout<<"Front element= "<<val;
             break;
             
            case 4:
            q.display();
            break;
            
            case 5:
            cout<<"Exiting...."<<endl;
            break;
            
           default:
            cout<<"Invalid choice!"<<endl;
        }
        cout<<endl;
    }
    while(opt!=5);
}

/*OUTPUT
Enter your option: 1
Enter element to insert: 20

Enter your option: 1
Enter element to insert: 50

Enter your option: 1
Enter element to insert: 0

Enter your option: 1
Enter element to insert: 60

Enter your option: 2
Deleted element= 20
Enter your option: 3
Front element= 50
Enter your option: 4

 The Queue Elements are: 50 0 60 
Enter your option: 5
Exiting....
*/
