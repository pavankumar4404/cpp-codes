#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum << endl;
}