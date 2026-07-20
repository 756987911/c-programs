/* #include<iostream>
using namespace std;
void print(int x,int y){
    if(x>y) return;
    cout<<x;
    print(x+1,y);
}
int main(){
int n;
cout<<"enter n : ";
cin>>n;
print(1,n);
} this is with extra parameter */

/* without an extra parameter */

#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // base case 
    print(n-1);  // call
     cout<<n<<endl; // work
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    print(n);
}