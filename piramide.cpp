#include <iostream>
using namespace std;

int main() 
{
    std::cout << "Inserisci quantità livelli piramide: " << std::endl;
    int n;
    cin >> n;
        for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << "\n";
    }
}