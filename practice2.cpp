#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    switch (age)
    {
    case 0 ... 5:
        cout << "免費";
        break;
    case 6 ... 11:
        cout << "590元";
        break;
    case 12 ... 17:
        cout << "790元";
        break;
    case 18 ... 59:
        cout << "890元";
        break;
    default:
        cout << "399元";
        break;
    }
}