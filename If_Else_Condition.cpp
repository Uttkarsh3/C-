#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    if(n>0){
        cout<<"The Number Entered is a Positive Number"<< endl;
    }
    else if(n<0){
         cout<<"The Number Entered is a Negative Number"<< endl;
    }
    else{
        cout<<"The Number Entered is Zero";
    }
    return 0;
}