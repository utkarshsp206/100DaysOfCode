#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        for(int j = i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
}
 
int main() {
vector<int> arr = {14,2,5,2,5,2,13,55};
insertionSort(arr);
for(auto it: arr){
    cout<<it<<" ";
}

return 0;
}