#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
                if(count>depth){
                    depth = count;
                }
            }
            else if(s[i]==')'){
                count--;
            }
        }
        return depth;
    }
};

int main() {
Solution S;
string s = "((()(()()()())))";
cout<<S.maxDepth(s);

return 0;
}