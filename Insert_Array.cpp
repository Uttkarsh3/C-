#include <iostream>
#define SIZE 10
using namespace std;
int main(){
    int a[SIZE],i = 0;
    cout<<"Enter ten values:\n";
    for(i=0;i<SIZE;i++){
        cin>>a[i];
        cout<<endl;
    }
    cout<<"Print ten values: "<<endl;
    for(i=0;i<SIZE;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}