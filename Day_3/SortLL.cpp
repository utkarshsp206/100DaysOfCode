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

Node *MidNodeOptimal(Node *head){  
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *slow = head;
    Node *fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

Node *MergeLists(Node *head1, Node *head2){
    Node *t1 = head1;
    Node *t2 = head2;

    Node *dummy = new Node(-1);
    Node *temp = dummy;
    while(t1!=NULL && t2!=NULL){
        if(t1->data<t2->data){
            temp->next=t1;
            temp = temp->next;
            t1=t1->next;
        }
        else{
            temp->next=t2;
            temp = temp->next;
            t2 = t2->next;
        }
    }
    if(t1!=NULL){
        temp->next=t1;
    }
    else{
        temp->next=t2;
    }
return dummy->next;
}

Node* sortLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* midNode = MidNodeOptimal(head);
    Node* leftHead = head;
    Node* rightHead = midNode->next;
    midNode->next=NULL;

    leftHead = sortLL(leftHead);
    rightHead = sortLL(rightHead);

    return MergeLists(leftHead, rightHead);
}

int main() {
vector<int> arr1={1,9,2,5,1,10,11};

Node  *head1 = ArraytoVal(arr1);
Display(head1);
cout<<endl;
head1 = sortLL(head1);
Display(head1);
cout<<endl;


return 0;
}