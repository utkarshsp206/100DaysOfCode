#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        int mini =i;
        for(int j=i;j<arr.size();j++){
            if(arr[j]<arr[mini]) mini = j;
        }
        swap(arr[i],arr[mini]);
    }
}
 
int main() {
vector<int> arr = {14,2,5,2,5,2,13,55};
selectionSort(arr);
for(auto it: arr){
    cout<<it<<" ";
}

return 0;
}