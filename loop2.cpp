#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"not prime"<< 1 <<endl;
        }
        else
        {
            cout<<"prime number"<< 1 <<endl;
        }
        i=i+1;
    }
    
}