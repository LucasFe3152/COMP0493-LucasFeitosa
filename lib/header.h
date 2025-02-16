#ifndef HEADER_H
#define HEADER_H

#include <vector>
#include <string>
#include <math.h>
using namespace std;

//input-output halim
void given_first_line();
void terminated_by_values();
void terminated_by_eof();
void case_numbers_blank();
void variable_number();
void variable_numbers_without_n();

//ordenacoes lineares
template <typename T>
void insertion_sort(vector<T>& input);
void counting_sort(vector<int>& input);
void bucket_sort(float input[], int n);
void radix_sort(vector<int>& input);

// dividir para conquistar
int binary_exponentiation(int a, int n);
template <typename T>
vector<int> mergesort(vector<T>& input);
template <typename T>
int inversion_index(vector<T>& arr);
template <typename T>
int binary_search(vector<T>& input, T key);
string longest_common_prefix(vector<string>& input);

#endif