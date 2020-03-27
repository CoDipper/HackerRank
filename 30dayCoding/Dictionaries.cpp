//Day Eight

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

struct PhoneBook{
    string name;
    int number;
};

int main() {
    int n;
    string names[10^5];
    PhoneBook book[10^5];
    do{
        cin>>n;
    }while(n<0&&n>(10^5));
    for(int i=0; i<n; i++){
        cin>>book[i].name;
        cin>>book[i].number;
    }
    for(int i=0; i<n; i++){
        cin>>names[i];
    }
    for(int i=0; i<n; i++){
        bool flag=false;
        for(int j=0; j<n; j++){
            if(names[i]==book[j].name){
                flag=true;
                cout<<book[j].name<<"="<<book[j].number<<endl;
            }
        }
        if(!flag){
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
