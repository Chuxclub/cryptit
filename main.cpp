#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Caesar encrypting algorithm attempt  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

    char message = ' ';
    vector<char> msg_vector;
    constexpr int VECTOR_INDEX_GAP = 1;
    int pace = 0;



    /* Message is taken character by character and placed in a vector.
     * cin.get() allows to include whitespaces in the inline stream */

    std::cout << "Enter a message you want to crypt: ";

    while(cin.get(message) && message != '~')
    {
        msg_vector.push_back(message);
    }



    /* Pace is the gap between the first letter in the alphabet and the letter 'a'
     * in the caesar alphabet sequence */

    std::cout << "Enter a pace (range 0 to 26): ";
    std::cin >> pace;



    /* Translate every char in the message vector according to the pace chosen by the user */

    for (unsigned short int i = 0; i < msg_vector.size(); i++)
    {
        if (msg_vector.at(i) >= 'a' && msg_vector.at(i) <= 'z' && msg_vector[i] + pace < 'z')
            msg_vector.at(i) = narrow_cast<char>(msg_vector[i] + pace);

        else if (msg_vector.at(i) >= 'a' && msg_vector.at(i) <= 'z' && msg_vector[i] + pace > 'z')
            msg_vector.at(i) = narrow_cast<char>((msg_vector[i] + pace)%'z' + 'a' - VECTOR_INDEX_GAP);

        else if (msg_vector.at(i) >= 'A' && msg_vector.at(i) <= 'Z' && msg_vector[i] + pace < 'Z')
            msg_vector.at(i) = narrow_cast<char>(msg_vector[i] + pace);

        else if (msg_vector.at(i) >= 'A' && msg_vector.at(i) <= 'Z' && msg_vector[i] + pace > 'Z')
            msg_vector.at(i) = narrow_cast<char>((msg_vector[i] + pace)%'Z' + 'A' - VECTOR_INDEX_GAP);

        else
            msg_vector.at(i) = msg_vector[i];
    }


    /* Prints encrypted message */

    for (char x: msg_vector)
        std::cout << x;


    return 0;

    /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
}