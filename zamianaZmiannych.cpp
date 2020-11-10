#include <iostream>

int main()
{
    using namespace std;
    int n;
    double wynik;
    do
    {
        cin>>n;
    }while(n<0 || n>1000);
    n = n+1;
    wynik = n/2;
    cout<<wynik;
}
