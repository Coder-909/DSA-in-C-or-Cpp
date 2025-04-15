#include <iostream>
// #include<algorithm>

using namespace std;

// g++ ./Algorithms/Sorting/quick.cpp -o ./Algorithms/Sorting/quick && ./Algorithms/Sorting/quick 

int partition(int arr[], int low, int high){
    int pivot = low;
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=arr[pivot] && i < high){
            i++;
        }
        while(arr[j]>arr[pivot] && j > low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[pivot]);
    return j;
}

void quicksort(int arr[], int low ,int high){
    if(low<high){
        int pIndex = partition(arr,low,high);
        quicksort(arr,low,pIndex-1);
        quicksort(arr,pIndex+1,high);
    }
}

int main(){
    //The Quicksort algorithm takes an array of values, chooses one of the values as the 'pivot' element, and moves the other values so that lower values are on the left of the pivot element, and higher values are on the right of it.
    int arr[] = {0,4,2,10,1,9,5,7,8,13};
    int s = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,s-1);
    for(int i =0;i<s;i++){
        cout << arr[i] << endl;
    }
    return 0;
}