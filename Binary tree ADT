#include <iostream>
using namespace std;
class Treenode{
   public:
    int data;
    Treenode* left;
    Treenode* right;
    Treenode(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
class Binarytree{
    private:
    Treenode* root;
    public:
    Binarytree(){
        root=NULL;
    }
Treenode* insertrecursive(Treenode* node,int value){
    if(node==NULL)
    return new Treenode(value);
    
    char choice;
    cout<<"Insert "<< value <<" to left or right of "<<node->data<< " ? (l/r):";
    cin>>choice;
    if(choice=='l'||choice=='L'){
        node->left=insertrecursive(node->left,value);
    }
    else{
        node->right=insertrecursive(node->right,value);
    }
    return node;
}
void insert(int value){
    if(root==NULL){
        root=new Treenode(value);
        cout<<value<<" inserted as root "<<endl;
    }
    else{
        root=insertrecursive(root,value);
    }
}
void inorder(){
    cout<<"Inorder Traversal: ";
    inorderrecursive(root);
    cout<<endl;
}
void inorderrecursive(Treenode* node){
    if(node==NULL)
    return;
    inorderrecursive(node->left);
    cout<<node->data<<" ";
    inorderrecursive(node->right);
}
void preorder(){
    cout<<"Preorder Traversal: ";
    preorderrecursive(root);
    cout<<endl;
}
void preorderrecursive(Treenode* node){
    if(node==NULL)
    return;
    cout<<node->data<<" ";
    preorderrecursive(node->left);
    preorderrecursive(node->right);
}
void postorder(){
    cout<<"Postorder Traversal: ";
    postorderrecursive(root);
    cout<<endl;
}
void postorderrecursive(Treenode* node){
    if(node==NULL)
    return;
    postorderrecursive(node->left);
    postorderrecursive(node->right);
    cout<<node->data<<" ";
}
};
int main(){
    Binarytree tree;
    int choice,value;
    do{
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
           case 1:
            cout<<"Enter value to insert: ";
            cin>>value;
            tree.insert(value);
            break;
            
           case 2:
            tree.inorder();
            break;
            
           case 3:
            tree.preorder();
            break;
            
           case 4:
            tree.postorder();
            break;
            
           case 5:
            cout<<"Exiting...."<<endl;
            break;
            
           default:
            cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=5);
}

/* OUTPUT
Enter choice: 1
Enter value to insert: 6
6 inserted as root 
Enter choice: 1
Enter value to insert: 5
Insert 5 to left or right of 6 ? (l/r):l
Enter choice: 1
Enter value to insert: 9
Insert 9 to left or right of 6 ? (l/r):l
Insert 9 to left or right of 5 ? (l/r):r
Enter choice: 1
Enter value to insert: 2
Insert 2 to left or right of 6 ? (l/r):r
Enter choice: 2
Inorder Traversal: 5 9 6 2 
Enter choice: 3
Preorder Traversal: 6 5 9 2 
Enter choice: 4
Postorder Traversal: 9 5 2 6 
Enter choice: 5
Exiting....
*/
