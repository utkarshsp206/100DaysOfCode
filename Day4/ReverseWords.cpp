//! LeetCode Problem : 151. Reverse Words in a String

#include<bits/stdc++.h>
using namespace std;

 string reverseWords(string s) {
        string result;
        int i=0;
        int n=s.length();
        while(i<n){
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            int j=i+1;
            while(j<n && s[j]!=' ') j++;
            string sub = s.substr(i, j-i);
            if(result.length()==0) result=sub;
            else result=sub+" "+result;
            i=j+1;
        }
        return result;
    }
 
int main() {
string s;
cout<<"Enter the string: ";
 getline(cin, s); //* Use getline to read the entire line
 
string res = reverseWords(s);
for(auto it: res){
    cout<<it;
}


return 0;
}