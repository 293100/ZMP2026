#include <iostream>

using namespace std;

int NWD(int a, int b) {
    while (a!=1 and b!=1 and a!=0 and b!=0)
    {
        if (a>=b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    if (a == 1 or b == 1)
    {
        return 1;
    }
    else
    {
        return b + a;
    }
}

int main() {
    int n;
    cin >> n;
    int tablica[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tablica[i];
    }     
    if (n == 1)
    {
        cout << tablica[0];
    }
    else
    {
        int t = NWD(tablica[0], tablica[1]);
        for (int i = 2; i < n; i++)
        {
            t = NWD(t, tablica[i]);
        }
        cout << t;
    }
}