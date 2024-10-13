/*
Title:Chapter 3 Exercise 18 - Interest Earned
File name:Chapter3Ex18_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:10/12/2024
Requirements:

Assuming there are no deposits other than the original investment,
the balance in a savings account after one year may be calculated as

amount = principal * (1 + rate/T)^t

Principal is the balance in the savings account, rate is the interest rate,
and T is the number of times the interest is compounded during a year
(T is 4 if the interest is compounded quarterly).

Write a program that asks for the principal, the interest rate, 
and the number of times the interest is compounded.
It should display a report similar to:

Interest rate:          4.25%
Times compounded:         12
Principal:         $ 1000.00
Interest:          $   43.34
Amount in savings: $ 1043.34
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    double rate;
    double compoundAmt;
    double principal;
    double interest;
    double savings;

    cout << "What is your principal?";
    cin >> principal;
    cout << "What is your interest rate? (in decimal form)";
    cin >> rate;
    cout << "How many times is the interest compounded?";
    cin >> compoundAmt;

    savings = principal * pow(1 + rate / compoundAmt, compoundAmt);
    interest = savings - principal;

    cout << endl << fixed << setprecision(2) << "Interest rate: " << setw(20) << rate << "%" << endl
        << "Times compounded: " << setw(17) << compoundAmt << endl
        << "Principal:" << setw(14) << "$" << setw(11) << principal << endl
        << "Interest:" << setw(15) << "$" << setw(11) << interest << endl
        << "Amount in savings:" << setw(6) << "$" << setw(11) << savings;
    return 0;
}

