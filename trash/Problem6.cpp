#include <iostream>
using namespace std;

int max(int arr[],int start,int end,bool turn){
    int sum1=0;
    int sum2=0;
    if(start == end){
        return arr[start];
    }
    if(turn){
        sum1= arr[start] + max(arr,start+1,end,!turn);
        sum2= arr[end] + max(arr,start,end-1,!turn);
    }else{ 
        sum1= 0 + max(arr,start+1,end,!turn);
        sum2= 0 + max(arr,start,end-1,!turn); 
    }
    if(sum1>sum2){
        return sum1;
    }
    return sum2;
}

int best_move(int arr[],int *start, int *end){
    if(*start >= *end){
        return 0;
    }
    if(arr[*start] > arr[*end]){
        return 0;
    }
    return 0;
}

int main(){

    int arr[4] = {4,5,1,3};
    int s = sizeof(arr)/sizeof(arr[0]);
    int res = max(arr,0,s,true);
    cout<< res;
    cout << endl;
    return 0;
}
