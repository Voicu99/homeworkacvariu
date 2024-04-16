// homeworkacvariu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int acvariuDavid = 8;
    int acvariuAlex = 11;

    std::cout << "Numarul de pesti din acvariul lui David inainte de schimb: " << acvariuDavid << std::endl;
    std::cout << "Numarul de pesti din acvariul lui Alex inainte de schimb: " << acvariuAlex << std::endl;

    // Efectuăm schimbul de valori utilizând o variabilă auxiliară
    int temp = acvariuDavid;
    acvariuDavid = acvariuAlex;
    acvariuAlex = temp;

    std::cout << "Numarul de pesti din acvariul lui David dupa schimb: " << acvariuDavid << std::endl;
    std::cout << "Numarul de pesti din acvariul lui Alex dupa schimb: " << acvariuAlex << std::endl;

    return 0;
}
