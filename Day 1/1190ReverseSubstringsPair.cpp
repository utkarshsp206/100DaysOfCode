#include<bits/stdc++.h>
using namespace std;

string ReverseSubstring(string s){
    stack<int> openBracketLength;
    string result;

    for(char ch: s){
        if(ch=='('){
            openBracketLength.push(result.length());
        }
        else if(ch==')'){
            int start = openBracketLength.top();
            openBracketLength.pop();

            reverse(result.begin()+start,result.end());
        }
        else{
            result+=ch;
        }
    }
    return result;
}
 
int main() {
string s;
cout<<"Enter the String: ";
cin>>s;
cout<<ReverseSubstring(s);

return 0;
}