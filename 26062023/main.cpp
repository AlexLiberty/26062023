#include "Animals.h"
#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "parrot.h"
#include "windows.h"

using namespace std;

int main()
{   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Dog dog("Рекс", 3);
    Cat cat("Мурка", 4);
    parrot parrot("Кеша", 100);

    dog.GetCharacteristics();
    cat.GetCharacteristics();
    parrot.GetCharacteristics();

    return 0;
}