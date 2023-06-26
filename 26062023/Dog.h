#pragma once
#include <string>
#include "Animals.h"

using namespace std;
class Dog : public Animals
{
private:
    int age;

public:
    
    Dog(const string& petName, int petAge);
   
    void GetCharacteristics() const override;
};

