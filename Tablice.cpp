#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    int *t;
    int n;
    t = new int[100];
    for(int i = 0; i<3; ++i)
    {
        cin>>t[i];
    }
    for(int i = 3; i>0; --i)
    {
        cout<<t[i-1]<<" ";
    }
        
}