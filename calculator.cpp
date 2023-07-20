#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operand you want"<<endl;
    cin>>op;
    switch(op)
    {
        case '+':cout<<(a+b)<<endl;
        case '-':cout<<(a-b)<<endl;
        case '*':cout<<(a*b)<<endl;
        case '/':cout<<(a/b)<<endl;
        case '%':cout<<(a%b)<<endl;
        default : cout<<"please enter valid op"<<endl;
    }
}