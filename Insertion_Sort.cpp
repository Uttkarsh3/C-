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

void InsertionSort(int *a ,int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
    a[j+1]=key;    
    }
}

int  main(){
    int a[]={5, 69, 32, 52, 4, 2 ,84, 35};
    int n=8;
    PrintArray(a, n);
    InsertionSort(a, n);
    PrintArray(a, n);
    return 0;
}