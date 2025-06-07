#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("text.txt");
    char ch;
    int count = 0;

    while (file.get(ch)) count++;

    cout << "Символов в файле: " << count << endl;
    return 0;
}
