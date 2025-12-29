#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string text;

    ifstream input("input.txt");
    getline(input, text);
    input.close();


    size_t pos = text.find(' ');

    if (pos != string::npos) {
    
        text.insert(pos, " my");
    }

    ofstream output("output.txt");
    output << text;
    output.close();

    cout << "Result: " << text << endl;

    return 0;
}
