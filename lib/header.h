#ifndef HEADER_H
#define HEADER_H

#include <vector>
using namespace std;

template <typename T>
vector<T> counting_sort(vector<T>& input);
template <typename T>
void insertion_sort(vector<T>& input);
void bucket_sort(float input[], int n);
#endif