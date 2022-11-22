#include<iostream>
using namespace std;
int main(){
    int n,space;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n++){
            if(j<=n-i){
            cout<<" ";
            }
            else
           cout<<"*";
           }
            cout<<endl;
        }
        return 0;
    }