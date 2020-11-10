#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
    int x, y;
};
int main()
{
    int pole1, pole2, polew;
    Point *A1, *B1, *A2, *B2, *W1, *W2;
    A1 = new Point;
    B1 = new Point;
    A2 = new Point;
    B2 = new Point;
    W1 = new Point;
    W2 = new Point;
    while (true)
    {

        cin >> A1->x >> A1->y >> B1->x >> B1->y;
        cin >> A2->x >> A2->y >> B2->x >> B2->y;
        W1->x = max(A1->x, A2->x);
        W1->y = max(A1->y, A2->y);
        W2->y = min(B1->y, B2->y);
        W2->x = min(B1->x, B2->x);
        pole1 = abs(A1->x - B1->x) * abs(A1->y - B1->y);
        pole2 = abs(A2->x - B2->x) * abs(A2->y - B2->y);
        polew = abs(W1->x - W2->x) * abs(W1->y - W2->y);
        cout << pole1 + pole2 - polew<<"\n";
    }
    delete A1, B1, A2, B2, W1, W2;
}