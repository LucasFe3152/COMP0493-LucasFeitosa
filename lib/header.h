#ifndef HEADER_H
#define HEADER_H

#include <vector>
using namespace std;

template <typename T>
void insertion_sort(vector<T>& input);

void counting_sort(vector<int>& input);

void bucket_sort(float input[], int n);
void radix_sort(vector<int>& input);

#endif