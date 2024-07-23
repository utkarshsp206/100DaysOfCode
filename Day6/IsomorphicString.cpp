//! ISOMORPHIC STRINGS

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        set<char> st;
        map<char,char> mpp;
        map<char,char> mpp2;
        for(int i=0;i<s.length();i++){
            if(mpp.find(s[i])!=mpp.end()){ //Already PResent
                if(mpp.at(s[i])!=t[i]) return false;
                else continue;
            }
            else{
                mpp[s[i]]=t[i];
            }
        }
        for(int i=0;i<s.length();i++){
            if(mpp2.find(t[i])!=mpp2.end()){ //Already PResent
                if(mpp2.at(t[i])!=s[i]) return false;
                else continue;
            }
            else{
                mpp2[t[i]]=s[i];
            }
        }
        return true;
    }
};

int main() {
Solution S;
string s = "Paper";
string t = "Title";

cout<<S.isIsomorphic(s,t);

return 0;
}
