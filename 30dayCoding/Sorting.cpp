//Day Twenty

#include <bits/stdc++.h>
#include <vector>

using namespace std;

void BubbleSort(vector<int> a, int n);

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    BubbleSort(a, n);
    return 0;
}

void BubbleSort(vector<int> a, int n){
    int numberOfSwaps = 0;
    for(int j=0; j<n-1; j++){
        for(int i=0; i < n-1; i++){
         if(a[i]>a[i+1]){
                numberOfSwaps++;
                swap(a[i],a[i+1]);
            }
        }
        if(numberOfSwaps==0){
            break;
        }
    }
    cout<<"Array is sorted in "<<numberOfSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
}
