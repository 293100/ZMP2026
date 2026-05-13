#include <iostream>

using namespace std;

int main() {
    int n, b = 1, c = 1;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        c = c + b;
        b = c - b;
    }
    cout << c;
}