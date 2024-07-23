#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        for(int i=0;i<t.length();i++){
            if(s.find(t[i])>s.length()){
                return false;
            }
            else{
                int index = s.find(t[i]);
             s[index]='0';
            }
        }
        return true;
    }
};
 
int main() {
    Solution S;
string s = "anagram";
string t="nagaram";
cout<<S.isAnagram(s,t);

return 0;
}