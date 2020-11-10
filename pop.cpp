#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {

        if (s=="10000000")
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
        else
        {
            map<int,bool> mapa; //oznaczam czy dana liczba już była
            int len = s.length();
            vector<int> v;
            for (int i=0; i<len; i++)
            {
                int tmp = s[i]-'0';
                v.push_back(tmp);
            }
            sort(v.begin(), v.begin() + len);
            reverse(begin(v), end(v));  //sortuje malejąco cyfry z naszej liczby
            string wyraz = "";
            for (int i=0; i<len; i++)
            {
                char c;
                int temp = v.at(i);
                c = temp + '0';
                wyraz += c;
            }
            int roznica = 7-len;
            for (int i=1; i<=roznica; i++) wyraz+='x'; //dodaję 'x' do uzyskania dlugosci 7

            for (int i=0; i<7; i++)
                for (int j=0; j<7; j++)
                    for (int k=0; k<7; k++)
                        for (int l=0; l<7; l++)
                            for (int m=0; m<7; m++)
                                for (int n=0; n<7; n++)
                                    for (int o=0; o<7; o++)
                                    {
                                        if (i!=j && i!=k && i!=l && i!=m && i!=n && i!=o && j!=k && j!=l && j!=m && j!=n && j!=o &&
                                                k!=l && k!=m && k!=n && k!=o && l!=m && l!=n && l!=o && m!=n && m!=o && n!=o)
                                        {
                                            string temp = "";
                                            if (wyraz[i]!='x')  temp= temp + wyraz[i];
                                            if (wyraz[j]!='x')  temp= temp + wyraz[j];
                                            if (wyraz[k]!='x')  temp= temp + wyraz[k];
                                            if (wyraz[l]!='x')  temp= temp + wyraz[l];
                                            if (wyraz[m]!='x')  temp= temp + wyraz[m];
                                            if (wyraz[n]!='x')  temp= temp + wyraz[n];
                                            if (wyraz[o]!='x')  temp= temp + wyraz[o];

                                            int liczba = atoi(temp.c_str());
                                            if (mapa[liczba]==0)
                                            {
                                                cout<<liczba<<endl;
                                                mapa[liczba]=1;
                                            }
                                        }
                                    }
        }

    }
    return 0;
}