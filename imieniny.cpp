#include <iostream>
int main()
{
    using namespace std;
    int d,l,c;
    int i = 0;
    cin>>d;
    while(i<d)
    {   
        cin>>l;
        cin>>c;

        if(c<l-1)
            cout<<"TAK\n";
        else if(l-1>c)
            cout<<"TAK\n";
        else if((l-1)%c!=0)
            cout<<"TAK\n";
        else if(l-1==0)
            cout<<"TAK\n";
        else
            cout<<"NIE\n";
        ++i;
    }
}