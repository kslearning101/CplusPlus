//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//    ofstream file("data.txt");
//
//    if (!file) {
//        cout << "Error creating file!";
//        return 1;
//    }
//
//    string name;
//    int age;
//    float gpa;
//
//    cout << "Enter name: ";
//    cin >> name;
//
//    cout << "Enter age: ";
//    cin >> age;
//
//    cout << "Enter GPA: ";
//    cin >> gpa;
//
//    file << name << " " << age << " " << gpa;
//
//    file.close();
//
//    cout << "Data written to data.txt successfully.\n";
//    return 0;
//}



#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");

    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    string name;
    int age;
    float gpa;

    file >> name >> age >> gpa;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    file.close();

    return 0;
}
































































