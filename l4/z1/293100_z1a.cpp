#include <iostream>

using namespace std;

int main() {
    int n, b = 0, c = 1;
    cin >> n;
    for (int i = 2; i < n+1; i++)
    {
        if (i%2 == 0)
        {
             b = b + c;
        }
        else
        {
            c = c + b;
        }
    }
    if (n%2 == 0)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}