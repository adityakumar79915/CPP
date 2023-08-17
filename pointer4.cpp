#include<iostream>
using namespace std;
int main()
{
    int i=3;
    int *p=&i;
    *p=*p+1;
    cout<<*p<<endl;
    cout<<"before p"<<p<<endl;
    p=p+1;
    cout<<"after p"<<p<<endl;
}