#include <iostream>
#include "header.h"
using namespace std;

int main() {
    vector<int> arr = { 12, 11, 13, 5, 6, 7 };
    arr = mergesort(arr);
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
