#include <iostream>
int main()
{
    using namespace std;
    int t, n, k;
    int ile;
    cin >> t;
    while (t > 0)
    {
        cin >> n >> k;

        if (n < k)
        {
            ile = n;
            while (ile % k != 0)
            {
                ile += n;
            }
        }
        else
        {
            ile = k;
            while (ile % n != 0)
            {
                ile += k;
            }
        }
        cout << ile << "\n";
        --t;
    }
}