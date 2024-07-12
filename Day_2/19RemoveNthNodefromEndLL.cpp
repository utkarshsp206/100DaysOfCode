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

//^Removing Nth Node from End

Node *RemoveNthNodeFromEnd(Node *head, int n){
    if(head->next==NULL) return NULL;
    
    Node* ptr1 = head;
    Node* ptr2 = head;

    while(n--){
        ptr2=ptr2->next;
    }

    if(ptr2=NULL){
        return head->next;
    }

    while(ptr2!=NULL && ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    Node *temp = ptr1->next;
    ptr1->next=temp->next;
    delete temp;

    return head;
}

int main() {
vector<int> arr={1,2,3,4,5};
Node  *head = ArraytoVal(arr);
Display(head);
cout<<endl;

head = RemoveNthNodeFromEnd(head,1);
Display(head);
return 0;
}