#include <iostream>
using namespace std;

int count_trailing_zeros(int x){
    int res=0;
    for(int i=5;i<=x;i=i*5){
        res=res+(x/i);
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<count_trailing_zeros(n);
    return 0;
}