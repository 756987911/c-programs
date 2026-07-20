#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,8,5,9,6};
    int n = sizeof(arr)/4;
    int product = 1;
    for(int i=0;i<=n-1;i++){
        product = product*arr[i];
    }
    cout<<product;
}