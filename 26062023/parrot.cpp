#include "parrot.h"
#include <iostream>

using namespace std;

parrot::parrot(const string& petName, int petAge) : Animals(petName), age(petAge) {}

void parrot::GetCharacteristics() const
{
    cout << "Це папуга з ім'ям " << name << ". Вона має " << age << " років." << endl;
}