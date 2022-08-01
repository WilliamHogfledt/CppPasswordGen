/******************************
        Password Generator
            William  H
            2022-07-31
******************************/

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string L_CASE = "abcdefghijklmnopqrstuvwxyzåäö";
string U_CASE = "ABCDEFGHIJKLMNOPQRSTUVWXYZÅÄÖ";
string NUMBERS = "0123456789";
string CHARACTERS = "!#¤%&/()=?@£$€{[]}<>|;:_,.-*'¨~^";
int CATAGORIES = 4;
int pass_length = 20;
string password = "";


int main()
{
    int current_catagory = 0;

    srand(time(NULL));
    cout << "PASSWORD LENGTH? ";
    cin >> pass_length;

    for (int i = 0; i < pass_length; i++) {
        switch (current_catagory)
        {
        case 0:
            password += L_CASE[ rand() % L_CASE.length()];
            current_catagory++;
            break;
        case 1:
            password += U_CASE[rand() % U_CASE.length()];
            current_catagory++;
            break;
        case 2:
            password += NUMBERS[rand() % NUMBERS.length()];
            current_catagory++;
            break;
        case 3:
            password += CHARACTERS[rand() % CHARACTERS.length()];
            current_catagory = 0;
            break;
        }
    }

    cout << "PASS: " << password << endl;
    system("pause");
}

