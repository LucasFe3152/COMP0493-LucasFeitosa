#include <iostream>
#include "header.h"
using namespace std;

int main() {

    // Input array
    vector<int> inputArray = { 4, 3, 12, 1, 5, 5, 3, 9 };

    // Output array
    vector<int> outputArray = counting_sort(inputArray);

    for (int i = 0; i < inputArray.size(); i++)
        cout << outputArray[i] << " ";

    return 0;
}
