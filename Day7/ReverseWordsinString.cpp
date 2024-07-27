#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string result="";
        for(int i=0;i<n;i++){
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            int j=i+1;
            while(j<n && s[j]!=' ') j++;
            string sub = s.substr(i,j-i);
            if(result.length()==0) result=sub;
            else{
                result = sub+" "+result;
            }
            i=j;
        }
        return result;
    }
};

int main() {
Solution S;
cout<<S.reverseWords("the sky is blue  ");

return 0;
}