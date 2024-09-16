#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[10];
    int temp = n;
    int length = 0, j, k;
    while (temp > 0)
    {
        ar[length++] = temp % 10;
        temp /= 10;
    }
    int t, flag = 1;
    for (j = 0; j < length; j++)
    {
        for (k = j; k < length; k++)
        {
            if (ar[j] > ar[k])
            {
                t = ar[j];
                ar[j] = ar[k];
                ar[k] = t;
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    
    
    int start=j;
    int end=k;

    for (int i = 0; i < end; i++)
    {
        for (int j = 0; j < end-i-1; j++)
        {
            if (ar[j]<ar[j+1])
            {
                t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
            
        }
        
    }
    
    
    for (int i = length - 1; i >= 0; i--)
    {
        cout << ar[i];
    }
}
