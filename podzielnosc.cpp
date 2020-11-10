#include <iostream>
int main()
{
    using namespace std;
    int t,n,x,y;
    int i = 0;
    cin>>t;
    while(i<t)
    {
        cin>>n>>x>>y;
        for(int i = 2; i<n; ++i)
        {
            if(i%x==0 && i%y!=0)
                cout<<i<<" ";
            
        }
        ++i;
    }

}