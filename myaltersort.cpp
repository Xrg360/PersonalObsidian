#include <iostream>
using namespace std;
int main()
{
    int n;
    int list[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    int t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                t = list[j];
                list[j] = list[j + 1];
                list[j + 1] = t;
            }
        }
    }
    int j = n - 1;
    for (int i = 0; i < j; i++, j--)
    {
        cout << list[j] << " " << list[i] << " ";
    }
    if (n % 2 != 0)
        cout << list[j];

    return 0;
}