//Adding a comment here: Program to compute GCD of two numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number1, number2;
    cin>>number1>>number2;
    
    while(number1 != number2) {
        if(number1 > number2)
            number1 -= number2;
        else if(number1 < number2) {
            number2 -= number1;
        }
    }

    cout <<"GCD = "<<number1;
    return 0;
}
