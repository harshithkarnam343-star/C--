#include <iostream>
using namespace std;

int main () {
    int a,b,c;
    cout << "enter 1st no : ";
    cin >> a;

    cout << "enter 2nd no : ";
    cin >> b;

    cout << "enter 3rd no : ";
    cin >> c;

    if(a >= b && a >= c)
    cout << "1st no is greatest";

    else if(b >= a && b >= c)
    cout << "2nd no is greatest";

    else 
    cout << "3rd no is greatest";
    return 0;
}