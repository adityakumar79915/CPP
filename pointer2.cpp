#include<iostream>
using namespace std;
int main()
{
    /*int num=5;
    int *p=& num;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"size of integer is:"<<sizeof(num)<<endl;
    cout<<"size of pointer is:"<<sizeof(p)<<endl;*/
    double d=4.1;
    double *p=&d;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"size of double is:"<<sizeof(d)<<endl;
    cout<<"size of pointer is:"<<sizeof(*p)<<endl;

}