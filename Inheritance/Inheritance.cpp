#include <iostream>
using namespace std;

// Base Class
class employee
{

public:
    int id;
    float salary;
    employee(int inpId)
    {
        id = inpId;
        salary = 10000;
    }
    employee() {}
};

// Derived Class
// Default visibility mode is private.
class programmer : public employee
{
public:
    int language_code = 9;
    programmer(int inpId)
    {
        id = inpId;
    }

    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee uttkarsh(1), nezuko(2);
    cout << uttkarsh.salary << endl;
    cout << nezuko.salary << endl;
    programmer skill(10);
    cout << skill.language_code<<endl;
    cout<<skill.id<<endl;
    skill.getdata();
    return 0;
}