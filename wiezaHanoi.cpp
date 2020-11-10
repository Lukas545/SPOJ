#include <iostream>
#include <cmath>
int  main(){
    int k;
    int l;
    std::cout<<"Podaj liczbe krazkow: ";
    std::cin>>k;
    l = pow(2,k)-1;
    std::cout<<"Liczba krazkow ktore trzeba przlozyc to: "<<l;
}