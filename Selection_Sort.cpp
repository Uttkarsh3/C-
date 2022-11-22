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

void SelectionSort(int *a ,int n)
{
    int temp, MinArray;
    for(int i=0;i<n-1;i++)
    {
        MinArray = i;
       for(int j=i+1;j<n;j++)
       {
           if(a[j] < a[MinArray])
           {
               MinArray = j;
           }
       }  
    temp=a[i];
    a[i]=a[MinArray];
    a[MinArray]=temp; 
    }
}

int  main(){
    int a[]={5, 60, 32, 91, 4, 2 ,45, 35};
    int n=8;
    PrintArray(a, n);
    SelectionSort(a, n);
    PrintArray(a, n);
    return 0;
}