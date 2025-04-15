#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(int arr[],int low, int mid, int high){
    
}

void mergeSort(int arr[],int low,int high){
    if(low>=high) return ;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int arr[] = {3,1,4,2,8,11,19};
    int s = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,s-1);
    for(int i =0;i<s;i++){
        cout << arr[i] << endl;
    }
    return 0;
}