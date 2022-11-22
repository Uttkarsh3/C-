#include <iostream>
#define max 10
using namespace std;
int main(){
    int marks[max];
    int i;
    cout<<"Enter the marks for ten students: ";
    for(i= 0;i<max ;i++){
        cin>>marks[i];
    }
    for(i=0 ;i<max ;i++){
        cout<<"\nMarks of student of roll no "<<i+1<<" " <<"are "<<marks[i];
    }
    return 0;
}