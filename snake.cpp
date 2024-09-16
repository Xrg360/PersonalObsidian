#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int val=1;
    int i=0,j=0;
    int m[10][10];
    while (i<n)
    {   
        if (j<0)
            j++;
        else if (j==n)
            j--;
        while (j<n && j>=0)
        {
            m[i][j] = val++;
            if (i%2==0)
                j++;
            else
                j--;            
        }
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}