#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter number"<<endl;
    cin>>a;
    /*if(a>0){
        cout<<"a is the positive number";
    }
    else{
    if(a<0)
    {
        cout<<"a is the negative number";
    }
    else
    {
        cout<<"a is zero";
    }
    }
    */
   if(a>0){
        cout<<"a is the positive number";
    }
   else if(a<0)
   {
    cout<<"a is the negative number";
   }  
   else
   {
    cout<<"a is zero";
   }

}