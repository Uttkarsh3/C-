#include<iostream>
int main(){
using namespace std;
    char oper;
    float n1,n2;
    cout<<"Select a sign you want to perform(*,+,-,/): ";
    cin>> oper;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    switch (oper)
    {
    case '*':
            cout<<"n1 * n2 ="<<n1*n2<<endl;
         break;
    case '+':
            cout<<"n1 + n2 ="<<n1+n2<<endl;
         break;
    case '-':
            cout<<"n1 - n2 ="<<n1-n2<<endl;
         break;
    case '/':
            cout<<"n1 / n2 ="<<n1*n2<<endl;
         break;
    
    default:
            cout<<"You Have Put The Wrong Operator";
        break;
    }

return 0;


}