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

Node* MergeKLists(vector<Node*> &lists){
    Node* head = lists[0];
    for(int i=1;i<lists.size();i++){
        head = MergeLists(head,lists[i]);
    }
    return head;
}

int main() {
vector<int> arr1={1,2,7,9,10,11};
vector<int> arr2={3,4,5,10};
vector<int> arr3={3,4,5,10};
vector<int> arr4={3,4,5,10};

Node  *head1 = ArraytoVal(arr1);
Node  *head2 = ArraytoVal(arr2);
Node  *head3 = ArraytoVal(arr3);
Node  *head4 = ArraytoVal(arr4);
Display(head1);
cout<<endl;
Display(head2);
cout<<endl;
Display(head3);
cout<<endl;
Display(head4);
cout<<endl;

vector<Node* > lists = {head1, head2, head3, head4};

Node *mHead = MergeKLists(lists);
Display(mHead);

return 0;
}