//Day Eight

#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    map<string, string> PhoneBook;
    string name, number;
    int n;
    do{
        cin>>n;
    }while(n<0&&n>(10^5));

    for(int i=0; i<n; i++){
        cin>>name;
        cin>>number;
        PhoneBook.insert(pair<string, string>(name, number));
    }

    while(cin >> name) {
        if (PhoneBook.find(name) != PhoneBook.end()) {
            cout << name << "=" << PhoneBook.find(name)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
