//
// Created by Arctic on 14.02.2026.
//

#ifndef TEST1INCLUDE_A_H
#define TEST1INCLUDE_A_H

#include "B.h"

namespace test1
{
    class A
    {
        C c; //Вот тут предложит добавить прямую зависимость
    };

}


#endif //TEST1INCLUDE_A_H