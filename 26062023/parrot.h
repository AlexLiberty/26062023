#pragma once
#include <string>
#include "Animals.h"

using namespace std;
class parrot : public Animals
{
private:
    int age;

public:

    parrot(const string& petName, int petAge);

    void GetCharacteristics() const override;
};

