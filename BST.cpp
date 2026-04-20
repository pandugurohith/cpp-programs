#include<iostream>
 using namespace std;
 class Node{
     public:
     int data;
     Node* left,*right;
     Node(int value){
         data=value;
         left=right=NULL;
     }
 };
 class BST{
     private:
     Node* root;
     public:
     BST(){
         root=NULL;
     }
void insert(int value){
    root=insert(root,value);
}
//Insert Node
Node* insert(Node* root,int value)
{
    if(root==NULL)
    return new Node(value);
    if(value<root->data)
    root->left=insert(root->left,value);
    else if(value>root->data)
    root->right=insert(root->right,value);
    return root;
}
Node* findMin(Node* root){
    while(root->left!=NULL)
    root=root->left;
    return root;
}
void deleteValue(int value){
    root=deleteNode(root,value);
}
Node* deleteNode(Node* root,int value){
    if(root==NULL)
    return NULL;
    if(value<root->data)
    root->left=deleteNode(root->left,value);
    else if(value>root->data)
    root->right=deleteNode(root->right,value);
    else{
        //case 1: No child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //case 2: One child
        else if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //case 3:Two children
        else{
            Node* temp=findMin(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }
    }
    return root;
}
void searchValue(int key){
    if(search(root,key))
    cout<<"Element found\n";
    else
    cout<<"Element not found\n";
}
bool search(Node* root,int key){
    if(root==NULL)
    return false;
    if(root->data==key)
    return true;
    else if(key<root->data)
    return search(root->left,key);
    else
    return search(root->right,key);
}
void inorder(Node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<< " ";
        inorder(root->right);
    }
}
void preorder(Node* root){
    if(root!=NULL){
        cout<<root->data<< " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
void display(){
    cout<<"\nInorder: ";
    inorder(root);
    cout<<"\nPreorder: ";
    preorder(root);
    cout<<"\nPostorder: ";
    postorder(root);
    cout<<endl;
}
};
int main(){
    BST tree;
    int choice,value;
    cout<<"\n...Binary search Tree menu...\n";
    cout<<"1.Insert\n2.Delete\n3.Search\n4.Display Traverasls\n5.Exit\n";
    do{
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter value to insert: ";
            cin>>value;
            tree.insert(value);
            break;
            case 2:
            cout<<"Enter value to delete: ";
            cin>>value;
            tree.deleteValue(value);
            break;
            case 3:
            cout<<"Enter value to search: ";
            cin>>value;
            tree.searchValue(value);
            break;
            case 4:
            tree.display();
            break;
            case 5:
            cout<<"Exiting....\n";
            break;
            default:
            cout<<"Invalid choice\n";
        }
    }
    while(choice!=5);
}

OUTPUT
...Binary search Tree menu...
1.Insert
2.Delete
3.Search
4.Display Traverasls
5.Exit

Enter your choice: 1
Enter value to insert: 50

Enter your choice: 1
Enter value to insert: 30

Enter your choice: 1
Enter value to insert: 70

Enter your choice: 1
Enter value to insert: 20

Enter your choice: 1
Enter value to insert: 40

Enter your choice: 1
Enter value to insert: 60

Enter your choice: 1
Enter value to insert: 80

Enter your choice: 4

Inorder: 20 30 40 50 60 70 80 
Preorder: 50 30 20 40 70 60 80 
Postorder: 20 40 30 60 80 70 50 

Enter your choice: 3
Enter value to search: 40
Element found

Enter your choice: 3
Enter value to search: 100
Element not found

Enter your choice: 2
Enter value to delete: 30

Enter your choice: 4

Inorder: 20 40 50 60 70 80 
Preorder: 50 40 20 70 60 80 
Postorder: 20 40 60 80 70 50 

Enter your choice: 5
Exiting....
 
 
 
