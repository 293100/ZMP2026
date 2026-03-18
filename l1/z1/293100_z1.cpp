#include <iostream>
#include <list>

using namespace std;

int main() {
    cout << "Podać liczbę naturalną";
    int r;
    cin >> r;
    list<int> L = {};
    while (r!=1)
    {
        if (r%2==0) {
            L.push_back(r);
            r = r/2;
        }
        else {
            L.push_back(r);
            r = 3*r + 1;
        }
    }
    L.push_back(1);
    for (int n : L) {
        cout << " " << n;
    }
    cout << ", " << L.size();
    return 0;
}