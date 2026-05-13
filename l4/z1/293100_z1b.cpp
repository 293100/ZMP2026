#include <iostream>

using namespace std;

int F_rec(int n, int k, int m) {
    if (n <= 1) return m;
    
    return F_rec(n-1, m, k+m);
}

int F(int n) {
    return F_rec(n, 1, 1);
}

int main() {
    int n;
    cin >> n;
    cout << F(n);
}