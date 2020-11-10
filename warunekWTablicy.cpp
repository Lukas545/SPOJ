#include <iostream>
int main()
{
    using namespace std;
    int n, k;
    char a;
    cin >> n;
    int tab[n];
    for (int i = 0; i < n; ++i)
        cin >> tab[i];
    cin >> a >> k;
    switch (a)
    {
    case '>':
        for (int i = 0; i < n; ++i)
        {
            if (tab[i] > k)
                cout << tab[i] << "\n";
        }
        break;
    case '<':
        for (int i = 0; i < n; ++i)
        {
            if (tab[i] < k)
                cout << tab[i] << "\n";
        }
        break;
    }
}