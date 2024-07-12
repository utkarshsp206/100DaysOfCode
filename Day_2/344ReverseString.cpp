#include<bits/stdc++.h>
using namespace std;

string reverseString(string &s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}
 
int main() {
string s;
cout<<"Enter a string: ";
cin>>s;
string reversedS = reverseString(s);
cout<<"Reversed String is: "<<reversedS;

return 0;
}