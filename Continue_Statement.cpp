#include<iostream>
int main(){
    using namespace std;
    for(int i=1;i<=5;i++){
        if(i==3){
            continue;
        }
            cout<<i<<endl;
    }
    return 0;
}