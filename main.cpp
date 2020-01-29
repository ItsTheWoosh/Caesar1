#include <iostream>
#include <fstream>

using namespace std;

    bool isLetter(char s) {
        if ((s >= 65 && s <= 90) || (s >= 97 && s <= 122)) {
            return true;
        } else return false;
    }

    bool isXYZ (char s) {
        if ((s >= 120 && s <= 122) || (s >= 88 && s <= 90)) {
            return true;
        } else return false;
    }

int main(){
    ofstream outFile("Caesar1.txt");
    ifstream inFile("Caesar1.in");

    char plain;
    char cypher;
    bool letter;

    if (inFile.fail()) {
        cout << "Sorry, could not open file" << endl;
    }

    while (inFile.get(plain)) {
        letter = isLetter(plain);
        if (letter == true) {
            if (isXYZ(plain) == true) cypher = plain - 23;
            else                      cypher = plain + 3;
        } else cypher = plain;
        outFile << cypher;
    }
    return 0;
}
