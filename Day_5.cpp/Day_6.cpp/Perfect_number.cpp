#include <iostream>
using namespace std;
int main () {
    int i,n,sum =0 ;

    cout << "Enter Number";
    cin >> n;

     for(i = 1;i < n;i++) {
        if(n  % i == 0) {
            sum = sum + i;
        }
     }

     if (sum ==  n) {
        cout << "Perfect Number Coz Sum = " << sum;
     }

     else {
     cout << "Not A Perfect Number  Coz Sum = " << sum;
     }
     
}