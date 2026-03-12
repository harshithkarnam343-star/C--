#include <iostream>
using namespace std;

int main () {
    int i,n,rem,fact,sum =0,original ;

    cout << "Enter Number ";
    cin >> n;

    original = n;

    while (n != 0) {
        fact = 1;
        rem = n % 10;

        for ( i = 1; i <= rem; i++) {
             fact = fact * i;
        }
             sum = sum + fact;

            n = n / 10 ;
    }

    if (sum == original) {
        cout << "Strong Number Coz Sum = " << sum ;
    }
    else 
    cout << "Not A Strong Number Coz Sum = " << sum ;
}