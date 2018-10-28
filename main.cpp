#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    char message = ' ';
    std::string encrypted_message;
    vector<char> msg_vector;
    int pace = 0;


    std::cout << "Enter a message you want to crypt: ";

    while(cin.get(message) && message != '~')
    {
        msg_vector.push_back(message);
    }



    std::cout << "Enter a pace (range 0 to 26): ";
    std::cin >> pace;

    for (int i = 0; i < msg_vector.size(); i++)
    {
        if (msg_vector.at(i) > 97 && msg_vector.at(i) < 122 && msg_vector[i] + pace < 122)
            msg_vector.at(i) = msg_vector[i] + pace;

        else if (msg_vector.at(i) > 97 && msg_vector.at(i) < 122 && msg_vector[i] + pace > 122)
            msg_vector.at(i) = (msg_vector[i] + pace)%122 + 96; //Revoir ce qu'il se passe avec modulo et index vecteur

        else
            msg_vector.at(i) = msg_vector[i];
    }


    for (char x: msg_vector)
        std::cout << x;


    return 0;
}

// vector<char> min_alphabet['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'];
