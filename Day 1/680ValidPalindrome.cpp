//! Leetcode problem No. 680 [Valid Palindrome 2]

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s, int i, int j){
    while(i<j){
        if(s[i]!=s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}

bool validPalindrome(string s){
    int i=0;
    int j = s.length()-1;

    while(i<j){
        if(s[i]!=s[j]){
            return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
        }
        i++;
        j--;

    }
    return 1;
}


 
int main() {
string s;
cin>>s;
cout<<validPalindrome(s);

return 0;
}