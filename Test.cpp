//
// Created by dmzy on 2019/9/15.
//

#include "Test.h"

Test::Test()
{
}

void Test::SetName(std::string name)
{
    Singleton &onlySingleton = Singleton::GetInstance();
//    std::cout << onlySingleton.name << std::endl;
    onlySingleton.name = name;
}

void Test::GetName(void)
{
    Singleton &onlySingleton = Singleton::GetInstance();
    std::cout << onlySingleton.name << std::endl;
}
