#include<iostream>
using namespace std;
int main(){
     double d=4.1;
    double *p=&d;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"size of double is:"<<sizeof(d)<<endl;
    cout<<"size of pointer is:"<<sizeof(*p)<<endl;

}