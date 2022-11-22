#include <iostream>
using namespace std;
int fact(int x){
    int result=1;
    for(int i=2;i<=x;i++){
        result=result*i;
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<fact(n);
}