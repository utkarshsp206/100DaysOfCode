#include <bits/stdc++.h>
using namespace std;

//* https://leetcode.com/problems/palindrome-linked-list/solutions/4908031/interview-approach-4-approach-list-stack-recursion-two-pointer-approach

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *ArraytoLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

bool isPalindromeUsingStack(Node *head)
{
    stack<int> st;
    Node *temp = head;
    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        if (temp->data != st.top())
            return 0;
        else
        {
            st.pop();
            temp = temp->next;
        }
    }
    return 1;

    //^TC: O(2n)
    //^SC: O(n)
}

Node *ReverseLL(Node *head)
{
    Node *curr = head;
    Node *forward = NULL;
    Node *last = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = last;
        last = curr;
        curr = forward;
    }
    return last;
}

bool isPalindromeOptimised(Node *head)
{
    // Go to mid
    // Reverse second half
    // Compare
    Node *fast = head;
    Node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Now we got mid, now reverse it

    Node *mid = ReverseLL(slow);

    Node *temp = head;
    Node *midTemp = mid;
    while (midTemp != NULL)
    {
        if (temp->data != midTemp->data)
            return 0;
        else
        {
            temp = temp->next;
            midTemp = midTemp->next;
        }
    }
    return 1;
}

int main()
{
    vector<int> arr = {1, 0,2, 1};
    Node *head = ArraytoLL(arr);
    Display(head);
    cout << endl;

    cout << isPalindromeUsingStack(head);
    cout << endl;

    cout<<isPalindromeOptimised(head);
    return 0;
}