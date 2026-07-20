/* #include<iostream>
using namespace std;
int main(){
    string s = "anil";
    cout<<s<<endl;
    int n = s.length();
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
     cout<<s<<endl;

} */

/* #include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "anil";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
} */

/* #include<iostream>
using namespace std;
int main(){
    string s ="anil";
    cout<<s<<endl;
    int n = s.length();
    int i = 0;
    int  j = n/2 - 1;
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    cout<<s<<endl;
} */


#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s ="anil";
    cout<<s<<endl;
    int n = s.length();
    reverse(s.begin(),s.begin()+n/2);
    cout<<s;
}