#include<iostream>
int main(){
    using namespace std;
    int n=0,sum=0;
    // cout<<"Enter a Number :";
    // cin>>n;
    do{
        sum +=n;
        cout<<"\nEnter a Number: ";
        cin>>n;
    }while(n>=0);

    cout<<"\nSum is: "<<sum;
    return 0;
}
