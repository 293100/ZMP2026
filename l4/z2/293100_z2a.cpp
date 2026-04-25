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
void wszystkiePodzbiory(const vector<int>& T, int i, vector<int>& aktualny) {
    if (i == T.size()) {
        wypisz(aktualny);
        return;
    }

    wszystkiePodzbiory(T, i + 1, aktualny);

    aktualny.push_back(T[i]);
    wszystkiePodzbiory(T, i + 1, aktualny);
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

    cout << "=== Wszystkie podzbiory ===" << endl;
    wszystkiePodzbiory(T, 0, aktualny);

    return 0;
}