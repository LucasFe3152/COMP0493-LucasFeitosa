#include "header.h"

template <typename T>
int get_max(vector<T>& input) {
    int max = 0;
    for (int i : input) {
        if (i > max)
            max = i;
    }
    return max;
}

template <typename T>
void insertion_sort(vector<T>& input) {
    for (int i = 1; i < input.size(); ++i) {
        float key = input[i];
        int j = i - 1;
        while (j >= 0 && input[j] > key) {
            input[j + 1] = input[j];
            j--;
        }
        input[j + 1] = key;
    }
}

template <typename T>
vector<int> counting_sort(vector<T>& input) {
    int max = get_max(input);
    int size_countarray = max+1;
    int size_input = input.size();
    vector<int> countarray(size_countarray, 0);
    vector<int> ordenado(size_input);

    for (int i : input) {
        countarray[i]++;
    }

    for (int i = 1; i < size_countarray; i++) {
        countarray[i] += countarray[i-1];
    }

    for (int i = size_input - 1; i >= 0; i--) {
        ordenado[countarray[input[i]] - 1] = input[i];
        countarray[input[i]]--;
    }

    return ordenado;
}

void bucket_sort(float input[], int n) {
    vector<float> buckets[n];

    int current_index = 0;
    int temp;

    for (int i = 0; i < n; i++) {
        temp = input[i] * n;
        buckets[temp].push_back(input[i]);
    }

    for (int i = 0; i < n; i++) {
        insertion_sort(buckets[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            input[current_index] = buckets[i][j];
            current_index++;
        }
    }
}