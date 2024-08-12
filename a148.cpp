#include <iostream>
using namespace std;
int main()
{
    int n, score;
    float total;
    while (cin >> n)
    {
        total = 0.0;
        for (int i = 0; i < n; i++)
        {
            cin >> score;
            total += score;
        }
        if (total / n > 59)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}