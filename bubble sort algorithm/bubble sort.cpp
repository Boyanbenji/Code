#include <iostream>
using namespace std;
#define MAX_SIZE 5
int main()
{
    int nums[MAX_SIZE];
    int temp;

    for (int i = 0; i < MAX_SIZE; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < MAX_SIZE - 1; i++)
    {
        for (int j = 0; j < MAX_SIZE - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
            }
        }
    }
    for (int i = 0; i < MAX_SIZE; i++)
    {
        cout << nums[i] << " ";
    }
}
// int a, b, c, number;
// cin >> a;
// cin >> b;
// cin >> c;
// if (a < b)
//     {
//         number = a;
//         a = b;
//         b = number;
//     }
//     if (b < c)
//     {
//         number = c;
//         c = b;
//         b = number;
//     }
//     if (a < b)
//     {
//         number = a;
//         a = b;
//         b = number;
//     }
//     cout << a << b << c;
// }

// if (a > b)
// {
//     if (b > c)
//     {
//         cout << a << b << c;
//     }
//     else
//     {
//         if (a > c)
//         {
//             cout << a << c << b;
//         }
//         else
//         {
//             cout << c << a << b;
//         }
//     }
// }
// // b>a
// else
// {
//     if (a > c)
//     {
//         cout << b << a << c;
//     }
//     else
//     {
//         if (b > c)
//         {
//             cout << b << c << a;
//         }
//         else
//         {
//             cout << c << b << a;
//         }
//     }
// }

// int nums[3] = {0};
// int temp = 0;
// for(int i = 0;i<3;i++){
//     cin>>nums[i];
// }
// if(nums[0]<nums[1]){
//     temp = nums[0];
//     nums[0] = nums[1];
//     nums[1] = temp;
// }
// if(nums[1]<nums[2]){
//     temp = nums[1];
//     nums[1] = nums[2];
//     nums[2] = temp;
// }
// if(nums[0]<nums[1]){
//     temp = nums[0];
//     nums[0] = nums[1];
//     nums[1] = temp;
// }