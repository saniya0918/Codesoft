#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    ifstream file(filename.c_str());
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string word;
    int wordCount = 0;
    while (file >> word) {
        ++wordCount;
    }

    cout << "Total words in the file: " << wordCount << endl;

    file.close();
    return 0;
}

