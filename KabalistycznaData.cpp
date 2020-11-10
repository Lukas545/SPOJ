#include <iostream>
using namespace std;


int main()
{
    int suma;
    string data;
    while(cin>>data)
    {
        for(int i=0; i<data.length(); i++)
        {
        if(data[i]=='a') suma+=1;
        if(data[i]=='b') suma+=2;
        if(data[i]=='c') suma+=3;
        if(data[i]=='d') suma+=4;
        if(data[i]=='e') suma+=5;
        if(data[i]=='f') suma+=6;
        if(data[i]=='g') suma+=7;
        if(data[i]=='h') suma+=8;
        if(data[i]=='i') suma+=9;
        if(data[i]=='k') suma+=10;
        if(data[i]=='l') suma+=20;
        if(data[i]=='m') suma+=30;
        if(data[i]=='n') suma+=40;
        if(data[i]=='o') suma+=50;
        if(data[i]=='p') suma+=60;
        if(data[i]=='q') suma+=70;
        if(data[i]=='r') suma+=80;
        if(data[i]=='s') suma+=90;
        if(data[i]=='t') suma+=100;
        if(data[i]=='v') suma+=200;
        if(data[i]=='x') suma+=300;
        if(data[i]=='y') suma+=400;
        if(data[i]=='z') suma+=500;
        }
    cout<<suma<<endl;
    }
    return 0;
}
