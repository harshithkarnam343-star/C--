#include <iostream>
using namespace std ;

int main () {
    int n,og,rev=0,rem;
    cout << "Enter Number = ";
    cin >> n;
    
    og = n;

    while (n != 0)
    {
      rem = n % 10;
      rev = rev * 10 + rem;
      n = n/10;
    }
    if (og == rev)
    {
        cout << "Palindrome";
    }
    else {
        cout << "Not A Palindrome";
    }
return 0;
}