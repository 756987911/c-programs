#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,6,8,10,15,3,7};
    int n = sizeof(arr)/4;
    int mx = arr[0];
    for(int i=1;i<=n-1;i++){
     if(arr[i]>mx){
        mx = arr[i];
     }
    }
             cout<<mx;
}