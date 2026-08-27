#include<iostream>
using namespace std;
struct node{
    public:
    int data;
    node *next;
    node(int d){
        data = d;
        next = NULL;
    }
};
int main(){
    node* head;
    head = new node(20);
    node* temp = new node(10);
    node* temp1 = new node(30);
    head->next = temp;
    head->next->next =temp1;
    node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}