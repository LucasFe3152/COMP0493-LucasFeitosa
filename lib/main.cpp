#include <iostream>
#include "header.h"
using namespace std;

string common_prefix_aux(string& s1, string& s2) {
    string ans;
    int n1 = s1.size(), n2 = s2.size();
    for (int i = 0; i < n1 && i < n2; i++) {
        if (s1[i] != s2[i])
            break;
        else
            ans.push_back(s1[i]);
    }
    return ans;
}

string common_prefix(vector<string> input, int start, int end) {
    if (start == end)
        return input[start];
    else if (start < end) {
        int mid = start + (end - start) / 2;
        string s1 = common_prefix(input, start, mid);
        string s2 = common_prefix(input, mid + 1, end);
        return common_prefix_aux(s1, s2);
    }else {
        return "";
    }
}

int main() {
    vector<string> arr = {"geeksforgeeks", "geeks", "geek", "geekzer"};
    string n = common_prefix(arr, 0, 3);
    cout << n << endl;
    return 0;
}
