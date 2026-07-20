/* nth fibonacci number */

#include<iostream>
using namespace std;
int fibo(int n){
  if(n==1 || n==2) return 1; // base case
  return  fibo(n-1) + fibo(n-2); //work and call
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    cout<<fibo(n);
}