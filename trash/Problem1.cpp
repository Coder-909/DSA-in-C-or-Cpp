// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

int cross_product(int x1,int y1,int x2,int y2){
    int res = x1*y2 - y1*x2;
    return res;
}

int main(){
    
    // your code goes here
    int n;
    cin>>n;
    int arr[n][6];
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            cin>> arr[i][j];    
        }
    }
    for(int i=0; i< n;i++){
        int x1 = arr[i][0], y1 = arr[i][1];
        int x2 = arr[i][2], y2 = arr[i][3];
        int x3 = arr[i][4], y3 = arr[i][5];
        int c1 = cross_product(x1-x2,y1-y2,x3-x2,y3-y2);
        if(c1 < 0){
            cout<< "LEFT"<<endl;
        }else if( c1 >0){
            cout<< "RIGHT"<<endl;
        }else if( c1 == 0){
            cout<< "TOUCH"<<endl;
        }

    }
    
    return 0;
}
