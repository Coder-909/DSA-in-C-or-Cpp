#include <iostream>

using namespace std;

int s[10];
int top = -1;

void push(int *s,int item){
    if(top ==9){
        cout << "Overflow";
        return ;
    }
    top++;
    s[top] = item;
}

void peek(int s[]){
    if(top==-1){
        cout<< "No element in array";
    }else{
        cout << s[top];
    }
}

int pop(int s[]){
    if(top==-1){
        cout<<"Stack is empty";
        return 0;
    }else{
        int temp = s[top];
        s[top] =0;
        top--;
        return temp;
    }
}

int main(){
    push(s,3);
    push(s,4);
    push(s,5);
    for(int i = 0;i<=top;i++){
        cout <<pop(s) << " ";
    }
    cout<< endl;
    return 0;
}