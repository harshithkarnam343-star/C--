#include <iostream>
using namespace std;

int main () {
    int n,i,sum = 0;
    int arr[100];
    cout << "Enter No Of Elements : ";
    cin >> n;

    cout << "Enter The Elements : ";

    for ( i = 0; i < n; i++)
    {
      cin >> arr[i];  
    }
    for ( i=0;i<n;i++) {
        sum = sum + arr[i];
    }
    cout << "Sum is = " << sum;
}