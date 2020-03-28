//Day Eleven

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int counter=0, sum=0;
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            counter+=arr[i][j];
            counter+=arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1];
            counter+=arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
            if(i==1&&j==1){
                sum=counter;
            }
            if(counter>sum){
                sum=counter;
            }
            counter=0;
        }
    }
    cout<<sum;
    return 0;
}
