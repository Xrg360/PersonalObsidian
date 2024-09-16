#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int val=1;
    int i=0,j=0;
    int x;
    while (i<n)
    {   
        if (i!=0)        
            val=x+n;
        j=0;
        while (j<n)
        {
            if (i%2==0){
                cout<<val<<" ";
                x=val++;
            }
                
            else{
                cout<<val<<" ";
                x=val--;
            }
            j++;
            
        }
        cout<<endl;
        i++;
    }
    
    
}