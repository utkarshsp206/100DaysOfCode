#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot = low;
    int i=low;
    int j=high;

    while(i<j){
        while(i<=high && arr[i]<=arr[pivot]){
            i++;
        }
        while(j>=0 && arr[j]>arr[pivot]){
            j--;
        }

        if(i<j){
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[pivot],arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high){
    if(low<high){
    int pi = partition(arr,low,high);
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
    }
}
 
int main(){
vector<int> arr = {14,2,5,2,5,2,13,55};
int low =0;
int high = arr.size()-1;
quickSort(arr,low,high);
for(auto it: arr){
    cout<<it<<" ";
}

return 0;
}