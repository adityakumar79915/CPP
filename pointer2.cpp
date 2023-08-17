#include<iostream>
using namespace std;
int main()
{
    int num=5;
    int *p=& num;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"size of integer is:"<<sizeof(num)<<endl;
    cout<<"size of pointer is:"<<sizeof(p)<<endl;
}