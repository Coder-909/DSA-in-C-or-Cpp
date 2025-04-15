#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// g++ ./Algorithms/Sorting/merge.cpp -o ./Algorithms/Sorting/merge && ./Algorithms/Sorting/merge 

void merge(int arr[],int low, int mid, int high){
    vector<int> temp;
    int i = low;
    int j = mid+1;
    while(i <= mid && j <= high){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        if(arr[i]>=arr[j]){
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(int arr[],int low,int high){
    if(low>=high) return ;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int arr[] = {1,3,1,4,2,8,11,0,19};
            //   0 1 1 2 3 4 8 11 19
    int s = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,s-1);
    for(int i =0;i<s;i++){
        cout << arr[i] << endl;
    }
    return 0;
}