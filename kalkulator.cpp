#include <iostream>
using namespace std;
int main(){
    char a;
    int l1,l2;
    for(int i = 0; i<10;++i){
        cin>>a>>l1>>l2;
        switch(a){
            case '+':
                cout<<l1+l2<<endl;
                break;
            case '-':
                cout<<l1-l2<<endl;
                break;
            case '*':
                cout<<l1*l2<<endl;
                break;
            case '/':
                cout<<l1/l2<<endl;
                break;
            case '%':
                cout<<l1%l2<<endl;
                break;
            default:
                cout<<"Podano zły znak";
        }
    }
}