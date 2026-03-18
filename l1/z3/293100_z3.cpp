#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Podać kurwa liczbę naturalną";
    double n;
    cin >> n;
    int k = 1;
    int i = 0;
    while (pow(5,k)<=n)
    {
        i = i + floor(n/pow(5,k));
        k++;
    }
    cout << i;
    
}