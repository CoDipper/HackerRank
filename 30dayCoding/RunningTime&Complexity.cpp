//Day Twenty-five

#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void inPut(vector<int>& numbers,int& n);
void outPut(vector<int> numbers);
bool DeCounter(int num);

int main() {
    vector<int> numbers;
    int n;
    inPut(numbers,n);
    outPut(numbers);
}
void inPut(vector<int>& numbers, int& n){
    do{
        scanf("%d", &n);
    }while(n<=1&&n>=30);
    while(n>0){
        int temp;
        do{
            scanf("%d", &temp);
        }while(temp<=1&&temp>=(2*10^9));
        numbers.push_back(temp);
        n--;
    }
}
void outPut(vector<int> numbers){
    for(int i=0; i<numbers.size(); i++){
        if(DeCounter(numbers[i])&&numbers[i]!=1){
            printf("Prime\n");
        }else{
            printf("Not prime\n");
        }
    }
}
bool DeCounter(int num){
    bool flag=true;
    int n = sqrt(num);
    for(int i=2; i<n+1; i++){
        if(num%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}
