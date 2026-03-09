#include <iostream>
using namespace std ;
int main () {
    int n,i,sum =0,original,rem;
    cout << "Enter Number : ";
    cin >> n;

    original = n;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n/10;
    }
    if (original == sum)
    {
        cout << "Armstrong No";
    }
    else {
        cout << "Not A Armstrong No";
    }
    
 
}