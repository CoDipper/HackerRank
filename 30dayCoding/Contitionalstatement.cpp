//Day three

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s=   "Weird";
    string s1=  "Not Weird";

    if(n%2!=0){
        cout<<s<<endl;
    } else{
        if(n>2&&n<=5){
            cout<<s1<<endl;
        }
        if(n>=6&&n<=20){
            cout<<s<<endl;
        }
        if(n>20){
            cout<<s1<<endl;
        }
    }
    

    return 0;
}
