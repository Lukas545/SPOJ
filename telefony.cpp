#include <iostream>
using namespace std;
int main()
{
    int n;
    string a;
    string wynik;
    cin >> n;
    while (n > 0)
    {
        cin >> a;
        cout << a.size();
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] == 'A' || a[i] == 'B' || a[i] == 'C')
                wynik += '2';
            else if (a[i] == 'D' || a[i] == 'E' || a[i] == 'F')
                wynik += '3';
            else if (a[i] == 'G' || a[i] == 'H' || a[i] == 'I')
                wynik += '4';
            else if (a[i] == 'J' || a[i] == 'K' || a[i] == 'L')
                wynik += '5';
            else if (a[i] == 'M' || a[i] == 'N' || a[i] == 'O')
                wynik += '6';
            else if (a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S')
                wynik += '7';
            else if (a[i] == 'T' || a[i] == 'U' || a[i] == 'V')
                wynik += '8';
            else if (a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z')
                wynik += '9';
        }
        cout << wynik << "\n";
        n--;
    }
}