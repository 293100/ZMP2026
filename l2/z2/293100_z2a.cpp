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
    bool b = true;
    int i =0;
    while (b == true and i < n)
    {
        if (ciąg_liczb[i] == x)
        {
            cout << "tak " << i;
            b = false;
        }
        else
        {
            i = i + 1;
        }
    }
    if (i == n)
    {
        cout << "nie";
    }   
}