#include <bits/stdc++.h>

using namespace std;
int minimumSwaps(vector<int> arr);
int main(){
  //some code...
  return 0;
}
// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) {
    int count=0;
    pair<int, int> arrP[arr.size()];
    for(int i=0; i<arr.size(); i++){
        arrP[i].first=arr[i];
        arrP[i].second=i;
    }

    sort(arrP, arrP + arr.size());
    vector<bool> vis(arr.size(), false);

    for(int i=0; i<arr.size(); i++){
        if (vis[i] || arrP[i].second == i){
            continue;
        }
        int cycle_size = 0; 
        int j = i; 
        while(!vis[j]){
            vis[j] = 1; 
            j = arrP[j].second; 
            cycle_size++; 
        }
        if (cycle_size > 0) 
        { 
            count += (cycle_size - 1); 
        } 
    }
    return count;
}
