#include <iostream>
#include "header.h"
using namespace std;


int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 8, 10, 15, 50 };
    int n = binary_search(arr, 8);
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    cout << n << endl;
    return 0;
}
