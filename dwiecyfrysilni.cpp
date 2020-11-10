#include <iostream>
long long int silnia(int n);
int main()
{
    using namespace std;
    long long int t;
    int d, l, k, jednosci, dziesiatki;
    cin >> d;
    while (d > 0)
    {
        cin >> t;
        l = silnia(t);
        if (l < 10)
        {
            cout << l / 10 << " " << l << "\n";
        }
        else
        {
            while (l / 10 > 0)
            {
                k = l;
                l /= 10;
            }
            dziesiatki = k / 10;
            jednosci = k % 10;
            cout << dziesiatki << " " << jednosci << "\n";
        }

        --d;
    }
}
long long int silnia(int n)
{
    if (n == 0)
        return 1;
    return n * silnia(n - 1);
}