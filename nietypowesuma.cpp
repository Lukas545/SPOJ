#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    int b,c;
    string a;
    int suma,d;
    cin>>a>>b>>c;
    d = a[1]-48;
    suma=b/10+d +sqrt(c);
    cout<<suma;
}