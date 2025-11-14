#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};
int main() {
    Student s;

    cout << "Enter student name: ";
    cin >> s.name;

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter GPA: ";
    cin >> s.gpa;

    cout << "\n--- Student Information ---\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;

    cout << fixed << setprecision(2);
    cout << "GPA: " << s.gpa;
}

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Laptop {
    string brand;
    string ram;
    float price;
};
int main() {
    Laptop l;
    cout << "Enter laptop brand: ";
    getline(cin, l.brand);
    cout << "Enter RAM : ";
    getline(cin, l.ram);
    cout << "Enter price: ";
    cin >> l.price;

    cout << "\n--- Laptop Specifications ---\n";
    cout << "Brand: " << l.brand << endl;
    cout << "RAM: " << l.ram << endl;

    cout << fixed << setprecision(2);
    cout << "Price: " << l.price;
}
#include <iostream>
#include <iomanip>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

int main() {
    Rectangle r;

    cout << "Enter length: ";
    cin >> r.length;

    cout << "Enter width: ";
    cin >> r.width;

    float area = r.length * r.width;
    float peri = 2 * (r.length + r.width);

    cout << "\n--- Rectangle Details ---\n";
    cout << fixed << setprecision(2);
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << peri;
}

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s1, s2;

    cout << "Enter details for Student 1\n";

    cout << "Name: ";
    getline(cin, s1.name);

    cout << "Roll: ";
    cin >> s1.roll;

    cout << "GPA: ";
    cin >> s1.gpa;

    cin.ignore();

    cout << "\nEnter details for Student 2\n";

    cout << "Name: ";
    getline(cin, s2.name);

    cout << "Roll: ";
    cin >> s2.roll;

    cout << "GPA: ";
    cin >> s2.gpa;

    cout << "\n--- GPA Comparison ---\n";
    cout << fixed << setprecision(2);

    if (s1.gpa > s2.gpa)
        cout << s1.name << " has the higher GPA (" << s1.gpa << ")";
    else if (s2.gpa > s1.gpa)
        cout << s2.name << " has the higher GPA (" << s2.gpa << ")";
    else
        cout << "Both students have equal GPA (" << s1.gpa << ")";
}



















































































