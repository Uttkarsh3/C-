#include <iostream>
using namespace std;
int main(){
    int n;
    char c;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the character: ";
    cin>>c;
    cout<<"\nAddress of "<<n<<" is "<<(void*)&n<<endl;
    cout<<"\nAddress of "<<n<<" is "<<(unsigned long)&n<<endl;
    cout<<"Address of "<<c<<" is "<<(void*)&c<<endl;
    cout<<"Address of "<<c<<" is "<<(unsigned long)&c<<endl;
    cout<<"Value of "<<n<<" is "<<*(&n)<<endl;
    cout<<"Value of "<<c<<" is "<<*(&c)<<endl;

    int *ptr;
    ptr=&n;
    cout<<"Address of ptr "<<(unsigned long)&ptr<<endl;
    cout<<"Address in ptr "<<ptr<<endl;
    cout<<"Value referred by "<<*ptr;
    return 0;
}