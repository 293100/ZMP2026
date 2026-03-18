#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Podać liczbe";
    int n;
    int k;
    int c = 0;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
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
    cout << c;}
}