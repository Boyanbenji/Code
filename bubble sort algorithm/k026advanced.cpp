#include <iostream>
using namespace std;
#define MAX_SIZE 100
int main()
{
    int nums[MAX_SIZE] = {0};
    int temp = 0;
    float median = 0;
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j]= temp;
            }
        }
    }
    if (n % 2 != 0)
    {
        median = nums[(n + 1) / 2];
    }
    else
    {
        median = (nums[(n / 2)] + nums[(n / 2) - 1]) / 2.0;
    }
    cout << median;
}
