#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && arr[largest]<arr[left])
        largest = left;

    if(right<n && arr[largest]<arr[right])
        largest = right;

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapSort(vector<int> &arr){
    int n = arr.size();

    //* Make heap from array 
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }

    //*Sort
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0); //Heapify the root & Size will be i
    }

}
 
int main() {
vector<int> arr = {14,2,5,2,5,2,13,55};
heapSort(arr);
for(auto it: arr){
    cout<<it<<" ";
}

return 0;
}