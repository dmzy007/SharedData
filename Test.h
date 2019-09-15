//
// Created by dmzy on 2019/9/15.
//

#ifndef SHAREDDATA_TEST_H
#define SHAREDDATA_TEST_H

#include <string>
#include <iostream>
#include "Singleton.h"

class Test
{
public:
    Test();

    void SetName(std::string name);
    void GetName(void);
};


#endif //SHAREDDATA_TEST_H
