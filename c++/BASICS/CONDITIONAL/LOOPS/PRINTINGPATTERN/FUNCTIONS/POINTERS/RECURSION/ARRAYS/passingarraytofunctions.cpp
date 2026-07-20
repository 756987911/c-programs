#include<iostream>
using namespace std;
void change(int arr[]){  // array go by reference
    arr[0] = 9;
}
int main(){
    int arr[3] = {5,8,12};
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for(int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    } 
}