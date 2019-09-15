//
// Created by dmzy on 2019/9/15.
//

#ifndef SHAREDDATA_TEST1_H
#define SHAREDDATA_TEST1_H

#include <string>
#include <iostream>
#include "Singleton.h"

class Test1
{
public:
    Test1();

    void SetName(std::string name);
    void GetName(void);
};


#endif //SHAREDDATA_TEST1_H
