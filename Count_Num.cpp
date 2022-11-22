#include <iostream>
#include <limits.h>
using namespace std;

int count_num(int x){
    int res=0;
    while(x>0){
        x=x/10;
        res++;
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<count_num(n);
}