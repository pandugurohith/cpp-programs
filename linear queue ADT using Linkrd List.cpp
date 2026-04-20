 #include<iostream>
 using namespace std;
 class Node
 {
     public:
     int data;
     Node* next;
     
     Node(int value){
         data=value;
         next=NULL;
     }
 };
 class Queue{
    private:
     Node* front;
     Node* rear;
    public:
     Queue(){
         front=rear=NULL;
    }
void enqueue(int item)
{
    Node* newNode= new Node(item);
    if(front==NULL){
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
}
int dequeue(){
    if(front==NULL){
        cout<<"\n Queue is Empty-underflow";
        return -1;
    }
    Node* temp=front;
    int x=front->data;
    front=front->next;
    delete temp;
    if(front==NULL)
     rear=NULL;
     return x;
}
int peek(){
    if(front==NULL){
        cout<<"\n Queue is Empty\n";
        return -1;
    }
    return front->data;
}
void display(){
    if(front==NULL)
    {
        cout<<"\n Queue is Empty\n";
        return;
    }
    Node* temp=front;
    cout<<"\n Queue Elements: ";
    while(temp!=rear){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<rear->data<<" ";
    cout<<endl;
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
             cout<<"Deleted element= "<<val<<endl;
             break;
             
            case 3:
             val=q.peek();
             if(val!=-1)
             cout<<"Front element= "<<val<<endl;
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

 #include<iostream>
 using namespace std;
 class Node
 {
     public:
     int data;
     Node* next;
     
     Node(int value){
         data=value;
         next=NULL;
     }
 };
 class Queue{
    private:
     Node* front;
     Node* rear;
    public:
     Queue(){
         front=rear=NULL;
    }
void enqueue(int item)
{
    Node* newNode= new Node(item);
    if(front==NULL){
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
}
int dequeue(){
    if(front==NULL){
        cout<<"\n Queue is Empty-underflow";
        return -1;
    }
    Node* temp=front;
    int x=front->data;
    front=front->next;
    delete temp;
    if(front==NULL)
     rear=NULL;
     return x;
}
int peek(){
    if(front==NULL){
        cout<<"\n Queue is Empty\n";
        return -1;
    }
    return front->data;
}
void display(){
    if(front==NULL)
    {
        cout<<"\n Queue is Empty\n";
        return;
    }
    Node* temp=front;
    cout<<"\n Queue Elements: ";
    while(temp!=rear){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<rear->data<<" ";
    cout<<endl;
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
             cout<<"Deleted element= "<<val<<endl;
             break;
             
            case 3:
             val=q.peek();
             if(val!=-1)
             cout<<"Front element= "<<val<<endl;
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
/* OUTPUT
Enter your option: 1
Enter element to insert: 20

Enter your option: 1
Enter element to insert: 60

Enter your option: 1
Enter element to insert: 80

Enter your option: 1
Enter element to insert: 50

Enter your option: 2
Deleted element= 20

Enter your option: 3
Front element= 60

Enter your option: 4

 Queue Elements: 60 80 50 

Enter your option: 5
Exiting.... */
