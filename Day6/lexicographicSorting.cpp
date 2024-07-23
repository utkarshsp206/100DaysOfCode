#include<bits/stdc++.h>
using namespace std;
 
int main() {
vector<string> str = {"Apple", "Cow", "Ball", "Zebra", "Fast"};
sort(str.begin(),str.end());
for(auto it: str){
    cout<<it<<" ";
}

return 0;
}