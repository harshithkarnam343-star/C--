#include <iostream>
using namespace std;
int main () {
    int n,i;
    int arr[100],max ;

    cout << "Enter no of elements = ";
    cin >> n;
    cout << "Enter the elements = ";

    for(i=0;i<n;i++) {
        cin >> arr[i];
    }
       max = arr[0];

    for(i=0;i<n;i++) { 
        if (arr[i] > max )
        {
            max = arr[i];
        }
    }
    cout << "Largest = " << max;
}