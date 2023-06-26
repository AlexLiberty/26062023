#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat(const string& petName, int petAge) : Animals(petName), age(petAge) {}

void Cat::GetCharacteristics() const
{
    cout << "Це кішка з ім'ям " << name << ". Вона має " << age << " років." << endl;
}