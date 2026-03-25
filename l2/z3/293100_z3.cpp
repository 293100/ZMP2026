#include <iostream>

using namespace std;

int main() {
    bool nasz_wspólny_sekret[8], wiadomosść[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> nasz_wspólny_sekret[i];
    }
    for (int i = 0; i < 8; i++)
    {
        cin >> wiadomosść[i];
    }
    for (int i = 0; i < 8; i++)
    {
        cout << (nasz_wspólny_sekret[i] ^ wiadomosść[i]) << " ";
    }  
}