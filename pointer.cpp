#include<iostream>
using namespace std;
int main()
{
    int num=5;
    int *p=& num;
    cout<<"value is:"<<*p<<endl;
    cout<<"value is:"<<p<<endl;
}