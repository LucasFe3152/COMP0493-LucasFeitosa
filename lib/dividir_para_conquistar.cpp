#include "header.h"

int binary_exponentiation(int a, int n) {
    if (n == 0) {
        return 1;
    }else if (n == 1) {
        return n;
    }else {
        if (n % 2 == 0) {
            return binary_exponentiation(a*a, n/2);
        }else {
            return a * binary_exponentiation(a, n-1);
        }
    }
}

template <typename T>
vector<T> merge(vector<T>& a, vector<T>& b) {  //
    if (a.empty()) return b;
    if (b.empty()) return a;
    
    vector<T> output;  
    output.reserve(a.size() + b.size());  
    
    int i = 0, j = 0;
    int n1 = a.size(), n2 = b.size();
    
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            output.push_back(a[i]);  
            i++;
        } else {
            output.push_back(b[j]);
            j++;
        }
    }
    
    
    while (i < n1) {
        output.push_back(a[i]);
        i++;
    }
    
    while (j < n2) {
        output.push_back(b[j]);
        j++;
    }
    
    return output;
}

template <typename T>
vector<T> mergesort(vector<T>& input) {
    if (input.size() <= 1) {  
        return input;
    }
    
    int length = input.size();
    int half = length / 2;
    
    vector<T> sub1;
    vector<T> sub2;
    
    
    sub1.assign(input.begin(), input.begin() + half);
    sub2.assign(input.begin() + half, input.end());
    
    sub1 = mergesort(sub1);
    sub2 = mergesort(sub2);
    
    return merge(sub1, sub2);  
}