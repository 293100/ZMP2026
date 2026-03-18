#include <iostream>
#include <cmath>

using namespace std;

int f(int n) {
    int k;
    int c = 0;
    if (n == 1)
    {
        return 1;
    }
    else {
    for (int i = 1; i < n; i++)
    {
        int j = i;
        k = n-j;
        while (k!=1 and j!=1 and k!=0 and j!=0)
        {
            if (k>=j)
            {
                k = k-j;
            }
            else
            {
                j = j -k;
            }
        }
        if (k==1 or j==1)
        {
           c = c+1;
        }       
    }
    return c;}
}

int main() {
    cout << "Podaj liczbę naturalną k";
    int t;
    int l = 0;
    cin >> t;
    for (int o = 1; o < t+1; o++)
    {
        if (t%o==0)
        {
            l = l + f(o);
        }
        
    }
    cout << l;
}