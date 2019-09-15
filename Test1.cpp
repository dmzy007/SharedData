//
// Created by dmzy on 2019/9/15.
//

#include "Test1.h"

Test1::Test1()
{

}

void Test1::SetName(std::string name)
{
    Singleton &onlySingleton = Singleton::GetInstance();
//    std::cout << onlySingleton.name << std::endl;
    onlySingleton.name = name;
}

void Test1::GetName(void)
{
    Singleton &onlySingleton = Singleton::GetInstance();
    std::cout << onlySingleton.name << std::endl;
}
