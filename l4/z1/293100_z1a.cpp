#include <iostream>

using namespace std;

int main() {
    int k, n, b = 0, c = 1;
    cin >> n;
    for (int i = 2; i < n+1; i++)
    {
        k = c;
        c = c + b;
        b = k;
    }
    if (n == 0)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}