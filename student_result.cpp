#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    float m1, m2, m3, total, average;

    cout << "=============================\n";
    cout << "    STUDENT RESULT SYSTEM\n";
    cout << "=============================\n";

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Marks of 3 Subjects:\n";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    average = total / 3;

    cout << "\n========== RESULT ==========\n";
    cout << "Name     : " << name << endl;
    cout << "Roll No  : " << roll << endl;
    cout << "Total    : " << total << endl;
    cout << "Average  : " << average << endl;

    if(average >= 35) {
        cout << "Status   : PASS" << endl;
    } else {
        cout << "Status   : FAIL" << endl;
    }

    return 0;
}