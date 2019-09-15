#include <iostream>
#include "Singleton.h"

int main()
{
    Singleton &OnlySingleton = Singleton::GetInstance();
    OnlySingleton.name = "OnlySingleton";
    std::cout << OnlySingleton.name << std::endl;
    return 0;
}