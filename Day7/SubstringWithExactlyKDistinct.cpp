#include<bits/stdc++.h>
using namespace std;


class Solution
{
  public:
    long long int substrAtleastP(string s,int n, int p){
        int i,j,c[26],f=0;
        long long count=0;
        for(int i=0;i<26;i++){
            c[i]=0;
        }
        i=j=0;
        for(i=0;i<n;i++){
            while(j<n && f<p){
                c[s[j]-'a']++;
                if(c[s[j]-'a']==1) f++;
                j++;
            }
            if(f>=p){
                count=count+n-j+1;
            }
            c[s[i]-'a']--;
            if(c[s[i]-'a']==0){
                f--;
            }
        }
        return count;
    }
    
    long long int substrCount (string s, int k) {
    	//code here.
        int n = s.length();
        long long ans=0;
        ans=substrAtleastP(s,n,k)-substrAtleastP(s,n,k+1);
        return ans;
    }
};
 
int main() {
Solution S;
string s = "aba";
cout<<S.substrCount(s,2);

return 0;
}