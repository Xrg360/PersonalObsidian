#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int list[100];
    list[0]=65;
    for (int i = 1; i < n; i++)
        list[i] = list[i-1]+1;

    int start =-1;
    int rows=n,cols=n;
    for (int i = 0; i < rows; i++)
    {         
        start++;
        int index=start;
        for (int j = 0; j < cols; j++)
        {
            cout<<char(list[index])<<" ";
            index = ++index%n;
        }
        cout<<endl;
        
    }
    
    
}