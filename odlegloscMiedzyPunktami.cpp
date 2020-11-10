#include <iostream>
#include <cmath>
int main()
{
    int x1,y1,z1,x2,y2,z2;
    double wynik;
    std::cin>>x1>>y1>>z1>>x2>>y2>>z2;
    wynik = sqrt(pow((x1-x2),2) + pow((y1-y2),2) + pow((z1-z2),2));
    std::cout<<wynik;


}
//sqrt((x1-x2)2+(y1-y2)2+(z1-z2)2) 1 2 3 3 2 4