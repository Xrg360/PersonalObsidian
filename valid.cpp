#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    char stack[20];  
    int n;
    cin>>n;
    char x;
    int top=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if (x=='(')
        {
            stack[++top]=x;
        }
        else if (isalpha(x))
        {
            if (stack[top] == '+'||stack[top] == '*'||stack[top] == '-'||stack[top] == '/')
            {
                if (isalpha(stack[top-1]))
                {
                    top=top-2;
                }
            }
            else{
                stack[++top] = x;
            }
            
        }
        else if (x==')')
        {
            if (stack[top]=='(')
            {
                top--;
            }
            
        }
        else{
                stack[++top] = x;
            }       
        
        
    }
        if (top==0)
        {
            cout<<"valid";
        }
        else{
            cout<<"invalid";
        }
    
}