/**
 * Aric Shi
 * February 18, 2020
 * Caesar 1: c = p + 3
 */

#include <iostream>
#include <fstream>

using namespace std;

bool isLetter(char symbol)
{
    if ((symbol >= 65 && symbol <= 90) || (symbol >= 97 && symbol <= 122))
    {
        return true;
    } else return false;
}


bool isXYZ (char symbol)
{
    if ((symbol >= 120 && symbol <= 122) || (symbol >= 88 && symbol <= 90))
    {
        return true;
    } else return false;
}

int main()
{
    ofstream outFile("Caesar1.txt");
    ifstream inFile("Caesar1.in");

    char plain;
    char cypher;
    bool letter;

    if (inFile.fail())
    {
        cout << "Sorry, could not open file" << endl;
    }

    while (inFile.get(plain))
    {
        letter = isLetter(plain);
        if (letter == true)
        {
            if (isXYZ(plain) == true) cypher = plain - 23;
            else                      cypher = plain + 3;
        } else cypher = plain;
        outFile << cypher;
    }
    return 0;
}
