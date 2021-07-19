#include <iostream>
#include <stdlib.h>

using namespace std;


const int len = 100;
class player
{
    char name[len];
    long identity;
public:
    void showdata()
    {
        cout << "Enter last name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> identity;
    }
    void enterdata()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << identity << endl;
    }
};

class coach: public player
{
    char position[len];
    double salary;
public:
    void showdata()
    {
        player::showdata();
        cout << "Enter Position: ";
        cin >> position;
        cout << "Enter salary: $";
        cin >> salary;
    }

    void enterdata()
    {
        player::enterdata();
        cout << "Position: "<< position << endl;
        cout << "Salary: $" << salary << endl;
    }
};



int main()
{
    coach cresswell;
    cresswell.showdata();
    cresswell.enterdata();
}