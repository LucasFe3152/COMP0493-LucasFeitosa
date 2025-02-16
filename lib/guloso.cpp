#include "header.h"

class Item {
    public:
        float weight;
        float value;
        float ratio;
};

bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

float mochila_fracionaria(float capacity, vector<float>& values, vector<float>& weights) {
    int n = values.size();
    vector<Item> items(n);
    for (int i = 0; i < n; i++) {
        items[i].weight = weights[i];
        items[i].value = values[i];
        items[i].ratio = values[i] / weights[i];
    }

    sort(items.begin(), items.end(), compare);

    float current_capacity = capacity;
    float total_value = 0;

    for (int i = 0; i < n; i++) {
        if (items[i].weight <= current_capacity) {
            current_capacity -= items[i].weight;
            total_value += items[i].value;
        }else {
            total_value += items[i].ratio * current_capacity;
            current_capacity = 0;
            break;
        }
    }

    return total_value;
}

vector<int>& problema_troco(int exchange, vector<int>& coins) {
    int n = coins.size();
    vector<int> output(n, 0);

    for (int i = 0; i < n; i++) {
        while (exchange >= coins[i]) {
            output[i]++;
            exchange -= coins[i];
        }
    }

    return output;
}