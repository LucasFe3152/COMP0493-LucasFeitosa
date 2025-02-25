#ifndef HEADER_H
#define HEADER_H

#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;

//input-output halim
void given_first_line();
void terminated_by_values();
void terminated_by_eof();
void case_numbers_blank();
void variable_number();
void variable_numbers_without_n();

//ordenacoes lineares
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

// algoritmo guloso
float mochila_fracionaria(float capacity, vector<float>& values, vector<float>& weights);
vector<int>& problema_troco(int exchange, vector<int>& coins);


//geometria computacional

class Point2D;
class Point3D;
class Line;

double distance_between_points2D(Point2D p1, Point2D p2);
double distance_between_points3D(Point3D p1, Point3D p2);
double distance_to_point(Point2D p, Line l);

//grafos
void dfs(int u, unordered_map<int, vector<int>>& adj, vector<bool>& visited);
void bfs(int u, unordered_map<int, vector<int>>& adj, vector<bool>& visited);

#endif