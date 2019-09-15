#include <iostream>
#include "Singleton.h"
#include "Test.h"
#include "Test1.h"

int main()
{
    Test w;
    Test1 v;
    w.SetName("aaa");
    w.GetName();
    v.SetName("bbb");
    v.GetName();
    w.SetName("ccc");
    w.GetName();
    return 0;
}