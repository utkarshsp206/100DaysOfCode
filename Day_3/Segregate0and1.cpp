#include<bits/stdc++.h>
using namespace std;

void segregate0and1(vector<int> &arr){
    int i=0;
        int j=arr.size()-1;
        while(i<j){
            if(arr[i]==0) i++;
            else if(arr[j]==1) j--;
            else if(arr[i]==1){
                if(arr[j]==0){
                    swap(arr[i],arr[j]);
                }
                else j--;
            }
        }
}
 
int main() {
vector<int> arr = {1,0,1,0,1,0,0};
segregate0and1(arr);

for(auto it: arr){
    cout<<it<<" ";
}

return 0;
}