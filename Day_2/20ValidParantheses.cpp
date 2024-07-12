#include<bits/stdc++.h>
using namespace std;

 bool isValid(string s) {
        stack<char> st;
        st.push('0');
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.top()=='(') st.pop();
                else return 0;
            }
            else if(s[i]=='}'){
                if(st.top()=='{') st.pop();
                else return 0;
            }
            else if(s[i]==']'){
                if(st.top()=='[') st.pop();
                else return 0;
            }
        }
        if(st.size()==1)
        return 1;
        else return 0;
    }
 
int main() {
string s;
cout<<"Enter the parantheses string: ";
cin>>s;
cout<<isValid(s);

return 0;
}