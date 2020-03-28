//Day Five
https://github.com/CoDipper/HackerRank/issues/6#issue-589382646
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    do{
       cin >> n; 
       cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }while(n<0&&n>20);
    
    for(int i=1; i<=10; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}
