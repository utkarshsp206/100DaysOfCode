#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &str){
 sort(str.begin(),str.end());
 string ans= "";
 string first = str[0];
 string last = str[str.size()-1];

 for(int i=0;i<min(first.length(),last.length());i++){
     if(first[i]==last[i]){
                ans+=first[i];
            }
            else break;
 }

 return ans;
}
 
int main() {
vector<string> str= {"flower","flow","flight"};
string ans = longestCommonPrefix(str);
cout<<ans<<endl;

return 0;
}