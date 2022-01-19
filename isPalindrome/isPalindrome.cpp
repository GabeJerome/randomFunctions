#include "isPalindrome.h"

int main()
{
    bool isPalindrome;
    char type;
    cout << "Enter P to check if a phrase is a palindrome" << endl;
    cout << "Enter N to check if a number is a palindrome" << endl;
    cin >> type;
        
    if (toupper(type) == 'P')
        isPalindrome = isPalPhrase();
    if (toupper(type) == 'N')
        isPalindrome = isPalNumber();

    return 0;
}

bool isPalNumber()
{
    int givenNum, originalNum;
    int revNum = 0;

    cout << "Enter a number to determine if it is a palindrome" << endl;
    cin >> givenNum;
    cout << endl;

    originalNum = givenNum;

    if (givenNum < 0 || (givenNum % 10 == 0 && givenNum != 0))
    {
        cout << originalNum << " is not a palindrome." << endl;
        return false;
    }

    while (givenNum > revNum)
    {
        revNum = (revNum * 10) + (givenNum % 10);
        givenNum /= 10;
    }

    if (givenNum == revNum || givenNum == revNum / 10)
    {
        cout << originalNum << " is a palindrome!" << endl;
        return true;
    }
    else
    {
        cout << originalNum << " is not a palindrome." << endl;
        return true;
    }
}

bool isPalPhrase()
{
    string givenStr, origianlStr;
    int length, lastIndex, i;

    cout << "Enter a phrase to determine if it is a palindrome" << endl;
    cin.ignore();
    getline(cin, givenStr);
    origianlStr = givenStr;
    cout << endl;

    while (givenStr.find(" ") != string::npos)
        givenStr.erase(givenStr.find(" "), 1);

    for (i = 0; i < givenStr.length(); i++)
        givenStr[i] = tolower(givenStr[i]);

    while (givenStr.length() != 0)
    {
        int lastIndex = givenStr.length() - 1;
        if (givenStr[0] == givenStr[lastIndex])
        {
            givenStr.erase(lastIndex, 1);
            givenStr.erase(0, 1);
        }
        else
        {
            cout << origianlStr << " is not a palindrome." << endl;
            return false;
        }
    }

    cout << origianlStr << " is a palindrome!" << endl;
    return true;
}