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
    int a = (koniec - początek)/2;

    while (ciąg_liczb[a]!=x && koniec-początek>0)
    {
        if (ciąg_liczb[a]<x)
        {
            początek = a+1;
            a = (początek + koniec)/2;
        }
        else if (ciąg_liczb[a]>x)
        {
            koniec = a-1;
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