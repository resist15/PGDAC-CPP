#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string source, dest;

    cout << "Enter source song file name: ";
    cin >> source;

    cout << "Enter destination song file name: ";
    cin >> dest;

    ifstream fin(source, ios::binary);
    if (!fin) {
        cout << "Cannot open source file." << endl;
        return 1;
    }

    ofstream fout(dest, ios::binary);
    if (!fout) {
        cout << "Cannot open destination file." << endl;
        return 1;
    }

    fout << fin.rdbuf();
    cout << "File copied successfully" << endl;

    fin.close();
    fout.close();

    return 0;
}

