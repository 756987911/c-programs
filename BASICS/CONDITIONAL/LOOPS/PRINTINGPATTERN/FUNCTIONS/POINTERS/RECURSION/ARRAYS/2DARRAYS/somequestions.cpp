/* #include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {{10,84},{12,75},{15,86},{18,95}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j] = 10;
        }
    }
        for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        cout<<arr[i][j]<<" ";
}
 cout<<endl;
        }
       
    } */

/* #include<iostream>
using namespace std;
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    for (int  i = 0; i<3; i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
      for (int  i = 0; i<3; i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
      for (int  i = 0; i<3; i++){
        for(int j=0;j<3;j++){
         c[i][j] = a[i][j]+b[i][j];
         cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
} */

/* #include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int sum = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin>>arr[i][j];
        sum = sum+arr[i][j];

    }
}
     cout<<sum<<" ";
}

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3];
    int mx =INT_MIN ;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cin>>arr[i][j];
      mx  = max(mx,arr[i][j]);
        }
    }
    cout<<mx<<" ";
} */

/* #include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int product = 1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin>>arr[i][j];
        product = product*arr[i][j];

    }
}
     cout<<product<<" ";
} */
/* 
#include<iostream>
using namespace std;
int main(){
    int arr[5][4];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=2;j++){
            sum = sum+arr[i][j];
        }
    }
    cout<<sum<<" ";
} */
