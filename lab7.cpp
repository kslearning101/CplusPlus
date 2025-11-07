#include <iostream>
using namespace std;

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers x and y: ";
    cin >> x >> y;
    swapNumbers(&x, &y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "You entered: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    delete[] arr;
    return 0;
}


























