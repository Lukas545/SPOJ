#include <iostream>
int main()
{
    using namespace std;
    int t, a, b;
    cin >> t;
    while (t > 0)
    {
        cin >> a >> b;
        while(a-b>0 || b-a>0){
            if(a>b)
                a-=b;
            else if(a<b)
                b-=a;
        }
        cout<<a+b<<"\n";
        t--;
    }
}
