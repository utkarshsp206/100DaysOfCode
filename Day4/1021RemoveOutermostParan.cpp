#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
        stack<char> st;
        int count=0;
         string temp;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(st.size()==0){
                    st.push('(');
                }
                else{
                    st.push('(');
                    temp+=s[i];
                }
            }
            else {
                st.pop();
                if(st.size()!=0) {
                    temp+=s[i];
                }
            }
        }
        return temp;
    }
 
int main() {
string s;
cout<<"Enter a valid paranthesis string: ";
cin>>s;

s = removeOuterParentheses(s);
cout<<s;

return 0;
}