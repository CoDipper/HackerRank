//Day Twenty-six

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct Date{
    int day;
    int month;
    int year;
};
void inPut(Date &date){
    do{
        cin>>date.day;
    }while(date.day<1&&date.day>31);
    do{
        cin>>date.month;
    }while(date.month<1&&date.month>12);
    do{
        cin>>date.year;
    }while(date.year<1&&date.year>3000);
}
int HackosCalculatator(Date ac, Date es){
    if(ac.year==es.year){
        if(ac.month<=es.month){
            if(ac.day<=es.day){
                return 0;
            }else{
                return 15*(ac.day-es.day);
            }
        }else{
            return 500*(ac.month-es.month);
        }
    }else if(ac.year<=es.year){
        return 0;
    }else{
        return 10000;
    }
}
int main() {
    Date actual, espected;
    inPut(actual);
    inPut(espected);
    cout<<HackosCalculatator(actual, espected);
    return 0;
}
