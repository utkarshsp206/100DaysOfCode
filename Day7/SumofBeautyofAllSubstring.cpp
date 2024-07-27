#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getBeauty(string s){
        int c[26];
        int i=0;
        int min=0;
        int max=0;
        for(i=0;i<26;i++){
            c[i]=0;
        }
        for(i=0;i<s.length();i++){
            c[s[i]-'a']++;
        }
        //Maximum and minimum element of the array except 0
          for (int i = 0; i < 26; i++) {
        if (c[i] != 0) {
            if (c[i] > max) {
                max = c[i];
            }
            if (c[i] < min || min == 0) {
                min = c[i];
            }
        }
    }
    return max-min;
    }

    int beautySum(string s) {
        if(s.length()<=1) return 0;
        int sum=0;
        for(int i=0;i<s.length();i++){
            int j=i+1;
            while(j<s.length()){
                string sub= s.substr(i,j-i+1);
            sum+=getBeauty(sub);
                       j++;
            }
 
        }
        return sum;
    }
};

int main() {
Solution S;
cout<<S.beautySum("aabcb");

return 0;
}