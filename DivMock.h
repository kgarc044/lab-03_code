#ifndef DIV_MOCK_H
#define DIV_MOCK_H
#include "base.h"
#include <string>

class DivMock : public Base {
    public:
        DivMock() {
        };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.500000/1.000000"; }
};
#endif