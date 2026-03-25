#include <iostream>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int ciąg_liczb[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ciąg_liczb[i];
    }
    int początek = 0;
    int koniec = n-1;
    int a = (początek - koniec)/2;
    if (ciąg_liczb[a]==x)
    {
        cout << "tak " << a;
    }
    else
    {
        while (ciąg_liczb[a]!=x and koniec-początek>1)
        {
            if (ciąg_liczb[a]<x)
            {
                początek = a;
                a = (początek + koniec)/2;
            }
            else if (ciąg_liczb[a]>x)
            {
                koniec = a;
                a = (początek + koniec)/2;
            }
        }
        if (ciąg_liczb[a]==x)
        {
            cout << "tak " << a;
        }
        else 
        {
            cout << "nie";
        }
    }
}