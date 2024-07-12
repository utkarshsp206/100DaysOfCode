#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int  right  = mid+1;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

  for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];
  }

}

void mergeSort(vector<int> &arr, int low, int high){
        if(low==high) return;
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
}
 
int main() {
vector<int> arr = {1,4,2,3,5,8};
int n=arr.size();
int low=0;
int high = n-1;
mergeSort(arr,low,high);

for(auto it: arr){
    cout<<it<<" ";
}


return 0;
}