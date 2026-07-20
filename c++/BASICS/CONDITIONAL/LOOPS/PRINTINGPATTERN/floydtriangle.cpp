/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : " ;
    cin>>n;
    for(int i=1;i<=n;i++){
       int a=0;
        for(int j=1;j<=i;j++){
            cout<<a+j;
        }
        cout<<endl;
    }
} */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : " ;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                 cout<<1;
            }
                else{
                    cout<<0;
                }
        }
        cout<<endl;
    }
}