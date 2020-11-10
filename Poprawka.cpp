#include <iostream>
#include <vector>
#include <cstdlib>
#include <sstream>
int main()
{
    using namespace std;
    vector<int> V;
    string x;
    int liczba;
    while(cin>>x)
    {
        if(x=="1000000")
        {
            cout<<10000000<<endl;
            cout<<1000000<<endl;
            cout<<100000<<endl;
            cout<<10000<<endl;
            cout<<1000<<endl;
            cout<<100<<endl;
            cout<<10<<endl;
            cout<<1<<endl;
        }
        int len = x.length();
        for(int i = 0; i<len; ++i)
        {
            V.push_back(x[i]-48);
        }
        for(auto elem : V)
            cout<<elem<<" ";
        

        break;

    }

}