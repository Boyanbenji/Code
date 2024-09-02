#include <iostream>
using namespace std;
#define N 10000
int main()
{
    int n;
    int value[N] = {0};

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    for (int j = n - 1; j >= 0; j--)
    {
        cout << value[j] << " ";
    }
    return 0;
}

// 第一行有一個正整數N，表示接下來有N個數字。（N<=10^6）

// 第二行有N個數字Pi。（Pi的大小在int變數型別的範圍內，也就是-2147483648~2147483647）

// 輸出說明
// 請將輸入的N個數字順序顛倒後輸出並以空白隔開。

// 範例輸入 #1
// 5
// 1 2 3 4 5
// 範例輸出 #1
// 5 4 3 2 1
// 範例輸入 #2
// 4
// 100 250 -200 450

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << a[i] << " ";
//     }
// }