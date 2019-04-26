#ifndef MULT_MOCK_H
#define MULT_MOCK_H
#include "base.h"
#include <string>

class MultMock : public Base {
    public:
        MultMock() {
        };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "1.000000*7.500000"; }
};
#endif