#include "romanToInt.h"

int main()
{
    string s = "MMMCCXLII";
    string romNum = s;
    int total = 0;

    addSpecials(s, total);

    addNormals(s, total);

    cout << romNum << " in integer form is " << total << endl << s << endl;
}


void addSpecials(string &s, int &total)
{
    int specIndex;

    specIndex = s.find(four);
    if (specIndex != string::npos)
    {
        total += 4;
        s.erase(specIndex, 2);
    }

    specIndex = s.find(nine);
    if (specIndex != string::npos)
    {
        total += 9;
        s.erase(specIndex, 2);
    }

    specIndex = s.find(forty);
    if (specIndex != string::npos)
    {
        total += 40;
        s.erase(specIndex, 2);
    }

    specIndex = s.find(ninety);
    if (specIndex != string::npos)
    {
        total += 90;
        s.erase(specIndex, 2);
    }

    specIndex = s.find(fourhundred);
    if (specIndex != string::npos)
    {
        total += 400;
        s.erase(specIndex, 2);
    }

    specIndex = s.find(ninehundred);
    if (specIndex != string::npos)
    {
        total += 900;
        s.erase(specIndex, 2);
    }
}


void addNormals(string &s, int &total)
{
    int charIndex;

    while (s.length() != 0)
    {
        charIndex = s.find('I');
        if (charIndex != string::npos)
        {
            total += 1;
            s.erase(charIndex, 1);
        }

        charIndex = s.find('V');
        if (charIndex != string::npos)
        {
            total += 5;
            s.erase(charIndex, 1);
        }

        charIndex = s.find('X');
        if (charIndex != string::npos)
        {
            total += 10;
            s.erase(charIndex, 1);
        }

        charIndex = s.find('L');
        if (charIndex != string::npos)
        {
            total += 50;
            s.erase(charIndex, 1);
        }

        charIndex = s.find('C');
        if (charIndex != string::npos)
        {
            total += 100;
            s.erase(charIndex, 1);
        }

        charIndex = s.find('D');
        if (charIndex != string::npos)
        {
            total += 500;
            s.erase(charIndex, 1);
        }

        charIndex = s.find('M');
        if (charIndex != string::npos)
        {
            total += 1000;
            s.erase(charIndex, 1);
        }
    }
}