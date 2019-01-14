#include <iostream>
#include "std_lib_facilities.h"
#include "caesar_encrypting.h"
#include "termcolor.hpp"
#include "TSS.h"

int main()
{
    int choice = 0;

    cout << "\n";
    MainTitleSeparator(25, "Welcome to Cryptit 0.1 !", "cyan");
    cout << "\n\n\n";

    cout << "\t\t\t\t\t\t\t\t  ";
    MinorTitle("Main Menu", "green");
    cout << "\n\n";


    cout << "\n\t" << termcolor::underline << "Select an encryption or decryption method:" << termcolor::reset << " \n";

    cout << "\n\t1. Caesar Encryption\n";
    cout << "\n\t2. Caesar Decryption\n\n";


    cout << "\n\t3. Vigenere Encryption\n";
    cout << "\n\t4. Vigenere Decryption\n\n";

    cout << "\n\tYour choice: ";

    cin >> choice;


    switch(choice)
    {
        case 1 :
        {
            cout << "\n\n";
            string coded_msg = caesar_encrypt();
            cout << termcolor::yellow << coded_msg << termcolor::reset;
            cout << "\n\n";
            break;
        }


        default:
            break;
    }

    MainSeparator(75);
}