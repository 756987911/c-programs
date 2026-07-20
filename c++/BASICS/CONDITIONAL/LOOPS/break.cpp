/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter n : ";
    cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
    
        cout<<i<<" ";
        break;
        }
    }
    
} */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"composite";
            break;
        }
        else{
            cout<<"prime";
        }
    }
}