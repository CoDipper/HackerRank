//Day two

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

// Complete the solve function below.
double solve(double meal_cost, int tip_percent, int tax_percent) {
    double total_cost;
    double tip, tax;
    double temp=100;
    tip= meal_cost* tip_percent/temp;
    tax= meal_cost* tax_percent/temp;

    total_cost=meal_cost+tip+tax;

    return round(total_cost);

}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout<<solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
