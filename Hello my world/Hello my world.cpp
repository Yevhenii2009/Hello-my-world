#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string text;
    int n; 

    ifstream input("input.txt");
    getline(input, text);
    input.close();

    cout << "Enter word number after which to insert: ";
    cin >> n;

    size_t pos = 0;

    for (int i = 1; i < n; i++) {
        pos = text.find(' ', pos);
        if (pos == string::npos) {
            cout << "Not enough words in text!" << endl;
            return 0;
        }
        pos++; 
    }

    text.insert(pos - 1, " beautefful");

    ofstream output("output.txt");
    output << text;
    output.close();

    cout << "Result: " << text << endl;

    return 0;
}
