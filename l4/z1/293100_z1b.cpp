#include <iostream>

using namespace std;

int F(int n, int k, int m) {
    if (n == 0)
    {
        return m;
    }
    else if (n == 1)
    {
        if (k >= m)
        {
            return m;
        }
        else
        {
            return k;
        }
    }
    else
    {
        return F(n-1, m, k+m);
    
    }
}

int main() {
    int n;
    cin >> n;
    cout << F(n, 1, 1);
}