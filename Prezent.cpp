#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    using namespace std;
    vector<int> V;
    int x;
    do
    {
        cout << "Podaj wartosc prezentu: ";
        cin >> x;
        V.push_back(x);
    } while (x != 0);
    sort(V.begin(), V.end());
    int k = V.size();
    int max = V[k-2];
    cout<<max;
}
/*Święty Mikołaj z workiem prezentów odwiedził Jasia. Ponieważ Jasiu nie był do końca grzeczy, 
może sobie wybrać prezent, ale nie najdroższy. Wyjątkiem jest sytuacja, gdy w worku wszystkie prezenty są 
jednakowej wartości, wtedy Jasiu ma szczęście i może wybrać dowolny prezent. Mikołaj wyjmuje
 więc wszystkie prezenty, a Jasiu dokonuje najlepszego dla siebie wyboru - 
 prezentu jak najbardziej wartościowego. Twoim zadaniem jest określić wartość prezentu jaki wybrał Jasiu.
 */
//Wejscie//
/*Ciąg liczb naturalnych określających wartości prezentów zakończony liczbą 0 (liczba 0 nie jest wartością prezentu). \
Wartosć prezentu nie przekracza 9*108 oraz ilość prezentów jest mniejsza niż 3*106. */
/*Wyjście
Wartość prezentu Jasia.*/
/*Przykład
Wejście:
1 2 3 0

Wyjście:
2
*/