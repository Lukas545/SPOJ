#include <iostream>
bool czy_pierwsza(int n);
int main()
{
    using namespace std;
    int n, l;
    do
    {
        cout << "Podaj liczbe testow: ";
        cin >> n;
    } while (n < 1);
    for (int i = 1; i <= n; ++i)
    {
        cout << "Podaj liczbe: ";
        cin >> l;
        if (czy_pierwsza(l))
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
}
bool czy_pierwsza(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false; 
    return true;
}
/*Sprawdź, które spośród danych liczb są liczbami pierwszymi
Wejscie:
n - liczba testów n<100000, w kolejnych liniach n liczb z przedziału [1..10000]
Wyjscie:
Dla każdej liczby słowo TAK, jeśli liczba ta jest pierwsza, słowo: NIE, w przeciwnym wypadku.
Input:
3
11
1
4
Output:
TAK
NIE
NIE
*/