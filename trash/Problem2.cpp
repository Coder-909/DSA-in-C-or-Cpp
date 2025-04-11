#include <iostream>
using namespace std;

int main(){
    
    // your code goes here
    int arr[5][5];
    int a,b;
    for(int i=0;i<5;i++){
        for(int j =0;j<5;j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                a =i;
                b=j;
            }
        }
    }
    int shift=0;
    while (a!= 2 || b != 2){
        if(a>2){
            a--;
            shift++;
        }else if(a<2){
            a++;
            shift++;
        }
        if(b>2){
            b--;
            shift++;
        }else if(b<2){
            b++;
            shift++;
        }
    }
    cout << shift;

    return 0;
}

