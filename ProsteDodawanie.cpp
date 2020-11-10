#include <iostream>
int main()
{
    using namespace std;
    int t,n,p;
    int suma = 0;
    int i = 0;
    cin>>t;
    while(i<t)
    {
        cin>>n;
        for(int j = 0; j<n; ++j)
        {
            cin>>p;
            suma+=p;
        }
        cout<<suma<<endl;
        suma=0;
        ++i;
    }
}