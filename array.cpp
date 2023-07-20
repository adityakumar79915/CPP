#include<iostream>
using namespace std;
int main()
{
    /*int arr[10]={1,2,3,4,5,6,7,8,9,0};
    cout<<arr[3]<<endl;
    int number[15];
    cout<<"avlue of 14 index"<<number[14]<<endl;
    cout<<endl<<"everything is fine"<<endl<<endl;*/
    int third[15]={2,7};
    int a=15;
    cout<<"printing the array"<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<third[i]<<" ";
    }
    int fourth[10]={0};
    a=15;
    cout<<"printing the array"<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<fourth[i]<<" ";
    }
    int fifth[10]={1};
    a=15;
    cout<<"printing the array"<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<fifth[i]<<" ";
    }
    return 0;
}