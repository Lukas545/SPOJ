#include <iostream>
using namespace std;
 
int main()
{
    int tab[100];
    int *p=tab;
    while(cin>>*p) p++;
    while(p>tab) { p--; cout<<*p<<" "; }
}