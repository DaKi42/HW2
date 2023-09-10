#include <iostream>
using namespace std;

struct Employee {
    char lastName[10];
    char firstName[10];
    char phoneNumber[10];
    double salary;
};

void addEmployee(Employee* employees, int& numEmployees) {
    if (numEmployees < 10) {
        cout << "Enter last name: ";
        cin >> employees[numEmployees].lastName;

        cout << "Enter first name: ";
        cin >> employees[numEmployees].firstName;

        cout << "Enter phone number: ";
        cin >> employees[numEmployees].phoneNumber;

        cout << "Enter salary: ";
        cin >> employees[numEmployees].salary;

        numEmployees++;
    }
    else {
        cout << "Cannot add more employees." << endl;
    }
}

void displayEmployees(const Employee* employees, int numEmployees) {
    cout << "Employee Information:" << endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << "Last Name: " << employees[i].lastName << endl;
        cout << "First Name: " << employees[i].firstName << endl;
        cout << "Phone Number: " << employees[i].phoneNumber << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << "****" << endl;
    }
}

int main() {
    Employee employees[10];
    int numEmployees = 0;

    int choice;
    do {
        cout << "Choose an action:" << endl;
        cout << "1. Add an employee" << endl;
        cout << "2. View employee list" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            addEmployee(employees, numEmployees);
            break;
        case 2:
            displayEmployees(employees, numEmployees);
            break;
        case 3:
            cout << "Exiting" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 3);

    return 0;
}