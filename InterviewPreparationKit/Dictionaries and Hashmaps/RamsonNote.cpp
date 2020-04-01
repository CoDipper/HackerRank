#include <bits/stdc++.h>
#include <map> 

using namespace std;

// Complete the checkMagazine function below.
bool checkMagazine(vector<string> magazine, vector<string> note) {
    unordered_map<string, int> mag;
    for (string x: magazine) {
        if (mag.count(x)) {
            mag[x] ++;
        } else {
           mag[x] = 1;
        }
    }
    for (string x: note) {
        if (mag.count(x)) {
            mag[x] --;
            if (mag[x] < 0) {
                return false;
            }
        } else {
            return false;
        }
    }
    return true;
}

int main()
{
    //some inPut...
    if(checkMagazine(magazine, note)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
