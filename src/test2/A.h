//
// Created by Arctic on 14.02.2026.
//

#ifndef TEST2INCLUDE_A_H
#define TEST2INCLUDE_A_H

namespace test2
{
    class A
    {
        C c;    //А вот тут не предложит, так как в test2.cpp сначала подключается C.h а потом A.h
    };
}

#endif //TEST2INCLUDE_A_H