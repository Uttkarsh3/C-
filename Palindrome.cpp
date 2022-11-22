#include <iostream>
using namespace std;

bool isPalindrome(int x){
    int rev=0;
    int t=x;
    while(t!=0){
        int lt=t%10;
        rev=rev*10+lt;
        t=t/10;
    }
    return rev==x;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<(bool)isPalindrome(n);
}