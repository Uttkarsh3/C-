#include <iostream>
using namespace std;

void  PrintArray(int *a ,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
}

void BubbleSort(int *a ,int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int  main(){
    int a[]={8, 90, 34, 1, 5, 2 ,89, 35};
    int n=8;
    PrintArray(a, n);
    BubbleSort(a, n);
    PrintArray(a, n);
    return 0;
}