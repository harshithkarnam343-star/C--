#include <iostream>
using namespace std;

int main ()  {
    int n,min = 10,rem;
    cout << " enter number = ";
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;

        if(rem < min)
        min = rem;

        n = n /10;
    }
    cout << "smallest no is = " << min;

}