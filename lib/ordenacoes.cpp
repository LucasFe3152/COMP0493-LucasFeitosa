#include "header.h"

int get_max(vector<int>& input) {
    int max = 0;
    for (int i : input) {
        if (i > max)
            max = i;
    }
    return max;
}

vector<int> counting_sort(vector<int>& input) {
    /*
    1. descobrir o maior termo
    2. inicializar um countarray de comprimento max+1
    3. contar cada aparecimento
    4. armazenar a soma acumulada: countarray[i] = countarray[i-1] + countarray[i]
    5. iterar pelo final do input array: saida[countingarray[input[i]] - 1] = input[i]
    e subtrair o countarray: countarray[input[i]]--
    */
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