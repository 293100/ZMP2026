#include <iostream>
#include <vector>
using namespace std;

void wypisz(const vector<int>& podzbior) {
    cout << "{ ";
    for (int x : podzbior) {
        cout << x << " ";
    }
    cout << "}" << endl;
}

void podzbioryDokladnieK(const vector<int>& T, int i, int k, vector<int>& aktualny) {
    if (aktualny.size() > k) return;

    if (i == T.size()) {
        if (aktualny.size() == k)
            wypisz(aktualny);
        return;
    }

    podzbioryDokladnieK(T, i + 1, k, aktualny);

    aktualny.push_back(T[i]);
    podzbioryDokladnieK(T, i + 1, k, aktualny);
    aktualny.pop_back();
}

int main() {
    int n;
    cin >> n;

    vector<int> T(n);
    for (int i = 0; i < n; i++) {
        cin >> T[i];
    }

    vector<int> aktualny;

    int k;
    cin >> k;

    cout << "\n=== Podzbiory o rozmiarze dokladnie " << k << " ===" << endl;
    podzbioryDokladnieK(T, 0, k, aktualny);

    return 0;
}
