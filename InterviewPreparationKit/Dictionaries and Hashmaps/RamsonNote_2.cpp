#include <bits/stdc++.h>

using namespace std;
// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    unordered_map<char, int> mag;
    for (char x: s1) {
        if (mag.count(x)) {
            mag[x] ++;
        } else {
           mag[x] = 1;
        }
    }
    unordered_map<char, int>::iterator it;
    for (char x: s2) {
        it = mag.find(x);
        if(it == mag.end()){
            continue;
        }else{
            return "YES";
        }
    }
    return "NO";
}


int main()
{
    //some inPut...
    //outPut...
    cout<<func(s1,s2);
    return 0;
}
