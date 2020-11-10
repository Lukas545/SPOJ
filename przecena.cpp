#include <iostream>
#include <iomanip>
int main()
{
    int n,p1,p2;
    int i = 0;
    double suma;
    std::cin>>n;
    while(i<n)
    {
        std::cin>>p1>>p2;
        suma = p1+p1*(p2*0.01);
        std::cout<<std::fixed<<std::setprecision(2)<<suma;
        ++i;
    }

}