#ifndef EMPLOYEE_BASE
#define EMPLOYEE_BASE

#include <string>
#include <iostream>
using namespace std;


class employee
{
public:
    string firstName;
    string lastName;
    string jobTitle;
    int baseSalary;
    employee() : firstName(""), lastName(""), jobTitle(""), baseSalary(0) {}
    employee(const string &fName, const string &lName, const string &jTitle, const int &salary) : firstName(fName), lastName(lName), jobTitle(jTitle), baseSalary(salary) {}
    virtual int calcSalary()
    {
        return baseSalary;
    }
    void displayName() const
    {
        cout << "Name:  " << lastName << ", " << firstName << endl;
    }
    void displayBaseSalary() const
    {
        cout << "Yearly Salary:  $" << baseSalary << endl;
    }
    void displayJobTitle() const
    {
        cout << "Job Title:  " << jobTitle << endl;
    }
    virtual void display() const
    {
        displayName();
        displayJobTitle();
        displayBaseSalary();
    }
};
class boss : public employee
{
public:
    int bonus;
    boss() : employee(), bonus(0) {}
    boss(const string &fName, const string &lName, const string &jTitle, const int &salary, const int &bns) : employee(fName, lName, jTitle, salary), bonus(bns) {}
    virtual int calcSalary()
    {
        return employee::calcSalary() + bonus;
    }
    void displayBonus() const
    {
        cout << "Bonus Pay:  $" << bonus << endl;
    }
    virtual void display() const
    {
        employee::display();
        displayBonus();
    }
};
class executive : public boss
{
public:
    int stock;  
    executive() : boss("", "", "", 0, 0), stock(0) {}
    executive(const string &fName, const string &lName, const string &jTitle, const int &salary, const int &bns, const int &stonks) : boss(fName, lName, jTitle, salary, bns), stock(stonks) {}
    int calcSalary()
    {
        return boss::calcSalary() + stock;
    }
    void displayStocks() const
    {
        cout << "Stock Options:  $" << stock << endl;
    }
    void display() const
    {
        boss::display();
        displayStocks();
    }
};
class Staff : public employee
{
public:
    int profitSharing;
    Staff() : employee("", "", "", 0), profitSharing(0) {}
    Staff(const string &fName, const string &lName, const string &jTitle, const int &salary, const int &pShare) : employee(fName, lName, jTitle, salary), profitSharing(pShare) {}
    virtual int calcSalary()
    {
        return employee::calcSalary() + profitSharing;
    }
    void displayPShare() const
    {
        cout << "Profit Sharing:  $" << profitSharing << endl;
    }
    virtual void display() const
    {
        employee::display();
        displayPShare();
    }
};
class softwareEngineer : public Staff
{
public:
    int overtimePay;
    softwareEngineer() : Staff("", "", "", 0, 0), overtimePay(0) {}
    softwareEngineer(const string &fName, const string &lName, const string &jTitle, const int &salary, const int &pShare, const int &ovrTime) : Staff(fName, lName, jTitle, salary, pShare), overtimePay(ovrTime) {}
    int calcSalary()
    {
        return Staff::calcSalary() + profitSharing;
    }
    void displayOTPay() const
    {
        cout << "Overtime Pay:  $" << overtimePay << endl;
    }
    void display() const
    {
        Staff::display();
        displayOTPay();
    }
};
class testEngineer : public Staff
{
public:
    testEngineer() : Staff("", "", "", 0, 0) {}
    testEngineer(const string &fName, const string &lName, const string &jTitle, const int &salary, const int &pShare) : Staff(fName, lName, jTitle, salary, pShare) {}
    int calcSalary()
    {
        return Staff::calcSalary();
    }
    void display() const
    {
        Staff::display();
    }
};

#endif
