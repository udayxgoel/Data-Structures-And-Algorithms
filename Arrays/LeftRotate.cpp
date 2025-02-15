#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int k)
{
    k = k % n;
    int temp[k];

    for (int i = 0; i < k; i++) // store first k elements in temp array
    {
        temp[i] = arr[i];
    }

    for (int i = k; i < n; i++) // shifting the remaining elements to left
    {
        arr[i - k] = arr[i];
    }

    for (int i = n - k; i < n; i++) // Copy temp elements to the end
    {
        arr[i] = temp[i - (n - k)];
    }
};

int main()
{
    int n, k;
    cout << "Enter the size of array:" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the rotate value:" << endl;
    cin >> k;

    leftRotate(arr, n, k); // rotates the array by k

    cout << "Rotated Array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}