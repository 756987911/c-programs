#include<iostream>
using namespace std;
int main(){
    int n;
    n>=0 && n<=100;
    cout<<"enter student marks : ";
    cin>>n;
    if(n>80 && n<101){
        cout<<"very good";
    }
    else if(n>60 && n<81){
        cout<<"good";
    }
    else if(n>40 && n<61){
        cout<<"average";
    }
    else{
        cout<<"fail";
    }
}