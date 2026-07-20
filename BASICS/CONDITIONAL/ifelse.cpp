/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    if(n>=0){
        cout<<n;
    }
     else
     {
        cout<<-n;
     }
    }  */ 
/* #include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter the value of cp :";
    cin>>cp;
    int sp;
        cout<<"enter the value of sp :";
    cin>>sp;
    
    if(sp>cp){
        cout<<"profit";
        cout<<"profit is : ";
        cout<<sp-cp;
  }
  else{
    cout<<"loss" ;
    cout<<"loss is : ";
    cout<<cp-sp;
  }
} */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    if (n>99 && n<1000){
        cout<<"3 digit number";
    }
    else{
        cout<<"not a 3 digit number";
    }

} */

/* #include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the value of x : ";
    cin>>x;
    int y;
     cout<<"enter the value of y : ";
    cin>>y;
    int z;
     cout<<"enter the value of z : ";
    cin>>z;
    if(x+y>z && y+z>x && x+z>y){
        cout<<"it is a triangle";
    }
    else{
        cout<<"it is not a triangle";
    }
} */

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"value of a :";
    cin>>a;
    int b;
    cout<<"value of b :";
    cin>>b;
    int c;
    cout<<"value of c :";
    cin>>c;
    if(a>b && a>c){
        cout<<a;
    }
    else if(b>a && b>c){
        cout<<b;
    }
    else{
        cout<<c;
    }

}