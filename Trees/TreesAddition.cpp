#include<iostream>
#include<list>
using namespace std;
struct Node{
    public:
    int key;
    Node *right;
    Node *left;
    
    Node(int k){
        key = k;
        
        left = right = NULL;
    }
    
};
void display(Node *root){
        if(root!=NULL){
            display(root->left);
            cout<<(root->key)<<" ";
            display(root->right);

        }
    }

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(30);
    root->left->right = new Node(50);
    root->right = new Node(40);
    display(root);
}