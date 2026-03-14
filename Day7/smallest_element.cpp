#include <iostream>
using namespace std;
int main () {
    int n,i,arr[100];
    int min ;

    cout << "Enter no of elements = ";
    cin >> n;
    cout  << "Enter elements = ";

    for(i=0;i<n;i++) {
        cin >> arr[i];
    }
    min = arr[0];

    for ( i=0;i<n;i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Smallest = " << min;
}