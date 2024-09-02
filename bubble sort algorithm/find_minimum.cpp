#include <iostream>
using namespace std;
int main()
{
    int value[10] = {0};
    int minimum = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> value[i];
    }
    minimum = value[0];
    for (int n = 0; n < 10; n++)
    {
        if (value[n] < minimum)
        {
            minimum = value[n];
        }
    }
    cout << minimum << endl;
    return 0;
}

// 讓使用者輸入10個數字。
// 輸出最小值