#include <iostream>
using namespace std;
int main () {
    int n,i,arr[100];
    int temp;
    cout << "Enter no of elements : ";
    cin >> n;
    cout << "Enter elements : ";

    for (i=0;i<n;i++) {
        cin >> arr[i];
    }
    for(i=0;i<n/2;i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    cout << "Reversed Array = ";

    for(i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}