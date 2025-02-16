#include "header.h"
#include <iostream>

void given_first_line() {
    int a, b, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a + b << endl;
    }
}

void terminated_by_values() {
    int a, b;
    while ((cin >> a >> b) && (a || b)) {
        cout << a + b << endl;
    }
}

void terminated_by_eof() {
    int a, b;
    while (cin >> a >> b) {
        cout << a + b << endl;
    }
}

void case_numbers_blank() {
    int a, b, counter = 1;
    while (cin >> a >> b) {
        if (counter > 1)
            cout << endl;
        cout << "Case " << counter++ << ": " << a + b << endl;
    }
}

void variable_number() {
    int a, soma, n;
    while (cin >> n) {
        soma = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            soma += a;
        }
        cout << soma << endl;
    }
}

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
