#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int i,j;
    long int X, Y;
    long int first, last, value;
    long int max=0,x=0;
    cin>>X>>Y;
    long int *a=new long int[X+1]();

    for(i=0;i<Y;i++){
        cin>>first>>last>>value;
        a[first]+=value;
        if((last+1)<=X) a[last+1]-=value;
    }

    for(i=1;i<=X;i++){
       x=x+a[i];
       if(max<x) max=x;
    }

    cout<<max;
    return 0;
}
