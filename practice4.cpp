#include <iostream>
using namespace std;
int main()
{
    float h, w, h_2;
    while (1)
    {
        cin >> h;
        if (h == 0)
        {
            break;
        }
        else
        {
            cin >> w;
            h_2 = h / 100.0;
            cout << "BMI:" << " " << (w / (h_2 * h_2));
        }
    }
}

// 讓使用者重複輸入
// 身高(公分)
// 體重(公斤)
// 並計算BMI