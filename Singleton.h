//
// Created by dmzy on 2019/9/15.
//

#ifndef SHAREDDATA_SINGLETON_H
#define SHAREDDATA_SINGLETON_H

#include <string>

class Singleton
{
private:
    Singleton() {};                                     // private default constructor
    Singleton(const Singleton&);                        // private copy constructor
    const Singleton& operator=(const Singleton&);       // assignment operator
public:
    static Singleton& GetInstance()
    {
        // static objects are constructed only once
        static Singleton onlyInstance;
        return onlyInstance;
    }

    std::string name;
};


#endif //SHAREDDATA_SINGLETON_H
