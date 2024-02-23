#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int size) {

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array : ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array before sort : ";
    print(arr,n);

    int counter = 1;
    while( counter<n ) {
        for(int i=0; i<n-counter; i++) {
            if(arr[i]>arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    cout << "Array after sort : ";
    print(arr,n);

}