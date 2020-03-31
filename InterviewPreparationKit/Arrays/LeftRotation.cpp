#include <bits/stdc++.h>

using namespace std;
// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d){
    for(int i=0; i<d; i++){
        a.push_back(a.front());
        a.erase(a.begin());
    }
    return a;
}
int main(){
  //somecode...
  return 0;
}
