#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
       for(int j=i+1;j<arr.size();j++){
        if(arr[j]<arr[i]){
            swap(arr[i],arr[j]);
        }
       }
    }
}
 
int main() {
vector<int> arr = {14,2,5,2,5,2,13,55};
bubbleSort(arr);
for(auto it: arr){
    cout<<it<<" ";
}

return 0;
}