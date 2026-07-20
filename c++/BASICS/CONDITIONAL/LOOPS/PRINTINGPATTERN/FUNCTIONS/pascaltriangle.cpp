/* #include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int j=0;j<=n;j++){
        for(int k=0;k<=j;k++){
              int a = fact(j);
               int b = fact(k);
               int c = fact(j-k);
                cout<<a/(b*c);
        }
        cout<<endl;
            
    }
} */

#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int ncr(int n,int r){
     int a = fact(n);
     int b = fact(r);
     int c = fact(n-r);
     return a/(b*c);
}
int main(){
    int n;
    cout<<" enter n: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}
