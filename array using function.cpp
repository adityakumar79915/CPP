#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
    cout<<"printing the array"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}
int main()
{

    int third[15]={2,7};
    int a=15;
    cout<<"printing the array"<<endl;
    printarray(third,15);
    int fourth[10]={0};
    a=10;
    cout<<"printing the array"<<endl;
    printarray(fourth,10);
}