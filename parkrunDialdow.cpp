#include <iostream>
int main()
{
    using namespace std;
    double d,t;
    double suma;
    int h,m,s;
    cin>>d>>t;
    suma=d*t;
    if(suma>60)
    {
        h=suma/60;
        m = suma-h*60;
        s =(suma-(h*60+m))*100;
        cout<<h<<"h "<<m<<"min "<<s<<"s";
    }
    if(suma<60)
      { 
        h=0;
        m=suma;
        s = (suma-m)*100;
        cout<<h<<"h "<<m<<"min "<< s<<"s";
        }  
    
    
}