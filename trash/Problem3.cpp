#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // your code goes here
    int n;
    cin >> n;
    string name[n];
    int marks[n];
    for (int i= 0;i<n;i++){
        cin >> name[i];
        cin >> marks[i];
    }
    for(int i = 0; i<n; i++){
        for(int j=0;j<n-1-i;j++){
            if (marks[j] < marks[j+1]){
                int temp = marks[j];
                marks[j] = marks[j+1];
                marks[j+1] = temp;
                string temp1 = name[j];
                name[j] = name[j+1];
                name[j+1] = temp1;
            }
        }
    }
    int i=0;
    while (i<n){
        if(marks[i] != marks[i+1]){
            cout << name[i] << " " << marks[i]<<endl;
            i++;
        }else{
            int val = marks[i];
            vector<string> same;
            same.push_back(name[i]);
            while(marks[i] == marks[i+1]){
                same.push_back(name[i+1]);
                i++;
            }
            sort(same.begin(),same.end());
            for(auto name:same){
                cout << name<< " " << val<<endl; 
            }
            i++;
        }
    }
    return 0;
}
