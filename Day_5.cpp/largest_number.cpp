#include <iostream>
using namespace std;

int main () {
    int max =0,n,rem;

    cout << "Enter The number : ";
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;

        if (rem > max) 
        max = rem;
        n = n/10;
    }
    cout << "The Laegest is = " << max;
}