//Day Ten

#include <bits/stdc++.h>

using namespace std;

void binaryCounter(int n, int counter, int temp){
    if(n!=0){
        if(n%2!=0){
            temp++;
            if(temp>counter){
                counter=temp;
            }
        }else{
            if(temp>counter){
                counter=temp;
            }
            temp=0;
        }
        //cout<<n%2;
        binaryCounter(n/2, counter, temp);
    }else{
        cout<<counter;
    }
}

int main()
{
    int n;
    int counter=0;
    int temp=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    binaryCounter(n, counter, temp);
    return 0;
}
