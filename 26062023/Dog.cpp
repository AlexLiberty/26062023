#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(const string& petName, int petAge) : Animals(petName), age(petAge) {}

void Dog::GetCharacteristics() const
{
    cout << "�� ������ � ��'�� " << name << ". ���� �� " << age << " ����." <<endl;
}
