#include <iostream>
using namespace std;

int main () {
    int n,i;
    int arr[100];

    cout << "Enter Number of Elements : ";
    cin >> n;

    cout << "Enter Elements : ";

    for (i=0;i<n;i++) {
        cin >> arr[i] ;
    }
    cout << "Array Elements Are : ";

    for (i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}