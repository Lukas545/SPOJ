#include <iostream>
using namespace std;
void printfloat(float liczba){
    for (int i = sizeof liczba-1; i>=0; --i){
        printf("%x ",(((const unsigned char*)&liczba)[i]));
    }
}
int main(){
    int n,l;
    do{
        cout<<"Podaj liczbe testow: ";
        cin>>n;
    }while(n<1);
    for(int i = 0; i<=n; ++i){
        cin>>l;
        printfloat(l);
    }

}