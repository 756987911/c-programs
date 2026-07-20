/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"hello anil"<<endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"enter n : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0){
             cout<<i<<endl;
        }
       
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<n*i<<endl;
    }
} */
/* 
#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"enter n : ";
    cin>>n;
    for(i=1;i<=2*n-1;i=i+2){
        cout<<i<<endl;
    }
} */
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter n : ";
    cin>>n;
    int a;
    int i;
    a=3;
    for(i=1;i<=n;i++){
        cout<<a<<endl;
        a=a*4;
    }
} */
/* 
#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<" enter n : ";
    cin>>n;
    int f=1;
    for(i=1;i<n;i++){
        if(n%i==0) f = i;

    }
    cout<<f;
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
    }
}
