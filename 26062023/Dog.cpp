#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(const string& petName, int petAge) : Animals(petName), age(petAge) {}

void Dog::GetCharacteristics() const
{
    cout << "Це собака з ім'ям " << name << ". Вона має " << age << " років." <<endl;
}
