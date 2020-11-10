#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string a = "kot";
    a[0] = a[0]+1;
    a[1] = a[1]+1;
    a[2] = a[2]+1;
    cout<<a;

}