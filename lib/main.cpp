#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    vector<int> v = { 170, 45, 75, 90, 802, 24, 2, 66 };
    // int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    radix_sort(v);
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
