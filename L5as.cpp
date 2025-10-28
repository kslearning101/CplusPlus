//#include <iostream>
//using namespace std;
//int main() {
//    cout << "Name: Khalid \n";
//    cout << "Registration Number: 23826\n";
//    cout << "Course Name: Software Construction and Development\n";
//    return 0;
//}


//
//#include <iostream>
//using namespace std;
//int main() {
//    string name[3];
//    int roll[3];
//    float gpa[3];
//    for (int i = 0; i < 3; i++) {
//        cout << "Enter name of student " << i + 1 << ": ";
//        cin >> name[i];
//        cout << "Enter roll number: ";
//        cin >> roll[i];
//        cout << "Enter GPA: ";
//        cin >> gpa[i];
//    }
//    cout << "\nStudent Details:\n";
//    for (int i = 0; i < 3; i++) {
//        cout << name[i] << "\t" << roll[i] << "\t" << gpa[i] << endl;
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//    int marks;
//    cout << "Enter marks (0-100): ";
//    cin >> marks;
//    if (marks >= 85)
//        cout << "Grade: A";
//    else if (marks >= 70)
//        cout << "Grade: B";
//    else if (marks >= 60)
//        cout << "Grade: C";
//    else if (marks >= 50)
//        cout << "Grade: D";
//    else
//        cout << "Grade: F";
//    return 0;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//bool isArmstrong(int num) {
//    int original = num, sum = 0, digits = 0, temp = num;
//    while (temp != 0) {
//        digits++;
//        temp /= 10;
//    }
//    temp = num;
//    while (temp != 0) {
//        int digit = temp % 10;
//        sum += pow(digit, digits);
//        temp /= 10;
//    }
//    return sum == original;
//}
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    if (isArmstrong(num))
//        cout << "Armstrong number";
//    else
//        cout << "Not an Armstrong number";
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main() {
//    int arr[10];
//    cout << "Enter 10 integers: ";
//    for (int i = 0; i < 10; i++) cin >> arr[i];
//    int maxVal = arr[0], minVal = arr[0];
//    for (int i = 1; i < 10; i++) {
//        if (arr[i] > maxVal) maxVal = arr[i];
//        if (arr[i] < minVal) minVal = arr[i];
//    }
//    cout << "Maximum Value: " << maxVal << endl;
//    cout << "Minimum Value: " << minVal;
//    return 0;
//}














//
//
//#include <iostream>
//using namespace std;
//int main() {
//    int arr[5], num;
//    cout << "Enter 5 numbers: ";
//    for (int i = 0; i < 5; i++) cin >> arr[i];
//    cout << "Enter number to search: ";
//    cin >> num;
//    bool found = false;
//    for (int i = 0; i < 5; i++) {
//        if (arr[i] == num) {
//            cout << "Number found at index " << i;
//            found = true;
//            break;
//        }
//    }
//    if (!found) cout << "Number not found";
//    return 0;
}

















































































