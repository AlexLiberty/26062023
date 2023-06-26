#include "parrot.h"
#include <iostream>

using namespace std;

parrot::parrot(const string& petName, int petAge) : Animals(petName), age(petAge) {}

void parrot::GetCharacteristics() const
{
    cout << "�� ������ � ��'�� " << name << ". ���� �� " << age << " ����." << endl;
}