#include <iostream>
int nwd(int a, int b);
int main()
{
    using namespace std;
    int t, a, b;
    cin>>t;
    while (t > 0)
    {
        cin >> a >> b;
        cout << nwd(a, b) << "\n";
        t--;
    }
}
int nwd(int a, int b)
{
    if(a==b) return a;
    if(a>b) return nwd(a-b,b);
    return nwd(a,b-a);
}