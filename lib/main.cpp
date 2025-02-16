#include <iostream>
#include "header.h"
using namespace std;

void variable_numbers_without_n() {
    int a, soma;
    char dummy;
    while (1) {
        soma = 0;
        while ((scanf("%d%c", &a, &dummy)) != EOF) {
            soma += a;
            if (dummy == '\n') {
                break;
            }
        }

        if (feof(stdin)) {
            break;
        }

        cout << soma << endl;

    }
}

int main()
{
    variable_numbers_without_n();
    return 0;
}
