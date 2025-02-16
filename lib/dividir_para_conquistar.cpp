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

template <typename T>
int count_and_merge(vector<T>& arr, int left, int middle, int right) {
    int n1 = middle - left + 1, n2 = right - middle;
    vector<T> a(n1), b(n2);
    for (int i = 0; i < n1; i++) 
        a[i] = arr[i+left];
    for (int i = 0; i < n2; i++) 
        b[i] = arr[middle + i + 1];
    
    int inversions = 0, i = 0, j = 0, current_index = left;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j])
            arr[current_index++] = a[i++];
        else {
            arr[current_index++] = b[j++];
            inversions += (n1-i);
        }
    }
    while (i < n1) {
        arr[current_index++] = a[i++];
    }

    while (j < n2) {
        arr[current_index++] = b[j++];
    }
    return inversions;
}

template <typename T>
int count_inversions(vector<T>& arr, int left, int right) {
    int inversions = 0;
    if (left < right) {
        int half = (left + right) / 2;
        inversions += count_inversions(arr, left, half);
        inversions += count_inversions(arr, half+1, right);
        inversions += count_and_merge(arr, left, half, right);
    }
    return inversions;
}

template <typename T>
int inversion_index(vector<T>& arr) {
    n = arr.size();
    return count_inversions(arr, 0, n - 1);
}

template <typename T>
int binary_search_aux(vector<T>& input, T key, int start, int end) {
    if (start > end) {
        return -1;
    }
    int middle = start + (end - start) / 2;

    if (input[middle] == key) {
        return middle;
    }else if (key > input[middle]) {
        return binary_search_aux(input, key, middle+1, end);
    }else {
        return binary_search_aux(input, key, start, middle-1);
    }
}

template <typename T>
int binary_search(vector<T>& input, T key) {
    return binary_search_aux(input, key, 0, input.size() - 1);
}