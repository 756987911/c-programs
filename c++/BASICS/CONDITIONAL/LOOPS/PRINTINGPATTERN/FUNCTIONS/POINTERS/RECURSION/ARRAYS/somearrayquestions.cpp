/* #include<iostream>
using namespace std;
int main(){
    int arr[5] = {8,6,9,5,12};
    int n = sizeof(arr)/4;
    for(int i=0;i<=n-1;i++){
        if(i % 2 == 0){
            arr[i] = arr[i]+10;
        }
        else{
            arr[i] = arr[i]*2;
        }
        cout<<arr[i]<<endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,0,10,2,5,6};
    int x = 4;
    int n = sizeof(arr)/4;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]> x ){
            count++;
        }
    }
    cout<<count;
} */

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {10,5,6,12,14,25,18};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        mx = max(arr[i],mx);
    }
    int smx = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=mx){
            smx = max(arr[i],smx);
        }
    }
         cout<<smx;
}