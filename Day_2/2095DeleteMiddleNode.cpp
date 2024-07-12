#include<bits/stdc++.h>
using namespace std;

class Node{
      public:
    int data;
    Node *next;
  
    Node(int val){
        data=val;
        next=NULL;
    }
};

void Display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node *ArraytoVal(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i=1;i<arr.size();i++){
        Node *temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
} 

//^Deleting Middle Node
Node *DeleteMiddleNode(Node *head){
    if(head->next==NULL){
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    fast=fast->next->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow = slow->next;
    }
Node *temp = slow->next;
slow->next = temp->next;
delete temp;

return head;


}

int main() {
vector<int> arr={1,2};
Node  *head = ArraytoVal(arr);
Display(head);
cout<<endl;

head = DeleteMiddleNode(head);
Display(head);
return 0;
}