#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    string cleanStr = "";
    for (char c : str) if (isalpha(c)) cleanStr += tolower(c);
    string rev(cleanStr.rbegin(), cleanStr.rend());
    if (cleanStr == rev) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    int vowels = 0, consonants = 0;
    for (char c : str) {
        if (isalpha(c)) {
            char ch = tolower(c);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    return 0;
}
