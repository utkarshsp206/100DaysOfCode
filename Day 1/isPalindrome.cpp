#include<bits/stdc++.h>
using namespace std;
 
int main() {
string s;
cout<<"Enter a String: ";
cin>>s;

int i=0;
int j=s.length()-1;
int flag=0;
while(i<j){
    if(s[i]!=s[j]){
        cout<<"Not a Palindrome"<<endl;
        flag=1;
    }
    i++;
    j--;
}
if(flag==0)
cout<<"A Palidrome"<<endl;


return 0;
}