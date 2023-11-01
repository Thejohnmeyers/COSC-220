
#include "employee.h"

int main() {

employee e[3];
executive e0("Meyers", "John", "Boss: \"the big Boss\"", 15000, 30000, 150000);
softwareEngineer e1("Jacob", "Sotorious", "Engineer", 300000, 750000, 50000);
testEngineer e2("Cooke", "Kletus", "Tester", 60000, 25000);

e[0] = e0;
e[1] = e1;
e[2] = e2;
e[0].display();
cout << endl;
e[1].display();
cout << endl;
e[2].display();
cout << endl;
e0.display();
cout << endl;
e1.display();
cout << endl;
e2.display();
cout << endl;

employee *ptr;
ptr = new employee("Junyi", "Tu", "Professor", 80000);
ptr->display();
cout << endl;
delete ptr;
ptr = new executive("Bill", "Gates", "CEO", 10000000, 700000, 50000000);
ptr->display();
cout << endl;
delete ptr;
ptr = new softwareEngineer("Tevon", "Smith", "Coder", 120000, 40000, 60000);
ptr->display();
cout << endl;
delete ptr;

return 0;
}
