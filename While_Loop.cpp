#include<iostream>
int main(){
    int n;
    using namespace std;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0){
        cout<<n<<" ";
        n--;
    }
    cout<<"This Line Is Always Executed";
    return 0;
}
