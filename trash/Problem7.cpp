#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    // your code goes here

    int n,stud;
    cin >> n;
    cin >> stud;
    int arr[n];
    int sum=0;
    int max=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+= arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int tempres=0;
    int i =0;
    while(i<n){
        
    }

    
    // int cal1 = sum/stud;
    // int max;
    // for(int i=0;i<n;i++){
    //     int tempsum= 0;
    //     int j =i;
    //     while(j<n){
    //         tempsum += arr[j];
    //         j++;
    //         if(tempsum== cal1+1){
    //             max = tempsum;
    //         }else if (tempsum > cal1+1){
    //             break;
    //         }
    //     }
    // }
    // sort(arr,arr+n);

    // if(arr[n-1] > max){
    //     cout<<arr[n-1];
    // }else{
    //     cout<< max;
    // }
    return 0;
}

