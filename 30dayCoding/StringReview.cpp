//Day Six

#include <cmath>
#include <cstddef>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void StringReview(string& data);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    
    do{
        cin>>n;
    }while(n<0&&n>=10);
    
    while(n!=0){
        string review;
        cin>>review;
        StringReview(review);
        n--;
    }
    return 0;
}
void StringReview(string& data){
    string odd, even;
    for(int i=0; i<data.length(); i++){
        if(i%2==0){
            even.push_back(data.at(i));
        }else{
            odd.push_back(data.at(i));
        }
    }
    cout<<even<<" "<<odd<<endl;
    data.erase();
}
