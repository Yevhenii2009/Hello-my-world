#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string text;

    ifstream input("input.txt");
    getline(input, text);
    input.close();
    size_t firstSpace = text.find(' ');
    size_t secondSpace = text.find(' ', firstSpace + 1);

    if (secondSpace != string::npos) {
        text.insert(secondSpace, " beautefful");
    }

    ofstream output("output.txt");
    output << text;
    output.close();

    cout << "Result: " << text << endl;

    return 0;
}
