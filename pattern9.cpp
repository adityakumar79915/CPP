#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        int values=row;
        while(col<=row)
        {
            cout<<values<<" ";
            values=values+1;
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    }
}