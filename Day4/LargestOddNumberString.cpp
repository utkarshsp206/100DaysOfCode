//! LeetCode Problem: 1903. Largest Odd Number in String

#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string num) {
        string temp;
        int i=0;
        int j=num.length()-1;
        while(j>=i){
            string ch;
            ch+=num[j];
            int n = stoi(ch);
            if(n!=0 && n%2!=0) {
                for(i=0;i<=j;i++){
                    temp+=num[i];
                }
            }
            else{
                j--;
            }

        }
        return temp;
    }
 
int main() {
string s;
cout<<"Enter a string: ";
cin>>s;
 cout<<largestOddNumber(s);


return 0;
}