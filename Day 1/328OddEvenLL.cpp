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

Node *OddEvenLL(Node *head){
    Node *odd = head;
    Node *even = head->next;

    Node *evenHead=even;
    while (even!=NULL && even->next!=NULL)
    {
        /* code */
        odd->next = even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }

    odd->next=evenHead;
    return head;
}

int main() {
vector<int> arr={1,2,3,4,5};
Node  *head = ArraytoVal(arr);
Display(head);
cout<<endl;

Node *newHead = OddEvenLL(head);
Display(newHead);
return 0;
}