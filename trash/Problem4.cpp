#include <iostream>
#include <stack>
using namespace std;

int main(){
    
    // your code goes here
    int n;
    cin >> n;
    int arr[n];
    int sum=0;
    for (int i= 0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr,arr+n);

    int hc=0,oc=0;
    int time = 0;
    hc += sum;
    if(sum-arr[n-1] < arr[n-1]){
        hc+= arr[n-1] - (sum-arr[n-1]);
    }
    cout<< hc;
    // while (time<(2*sum)){
        //first person
        // oc+= sum;
        // if(sum){
        //     continue;
        // }
        // if(bookH != 0 && hrun){
        //     bookH--;
        //     hc++;
        // }else if(bookH == 0){
        //     if(inuse1+1 != inuse2){
        //         inuse1++;
        //         bookH = arr[inuse1];
        //     }else if(inuse1+1 == inuse2 && inuse2 ==n-1){
        //         hc+= bookO-1;
        //         hc+= arr[inuse2];
        //         hrun=false;
        //     }else if(inuse1+1==inuse2){
        //         hc += arr[inuse2];
        //         inuse1 += 2;
        //         bookH = arr[bookH];
        //     }
        // }

        //time++;
    //}
    // cout<< hc<< " "<< oc;

    return 0;
}