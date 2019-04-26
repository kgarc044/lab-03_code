#ifndef POW_MOCK_H
#define POW_MOCK_H
#include "base.h"
#include <string>

class PowMock : public Base {
    public:
        PowMock() {
        };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.500000^1.000000"; }
};
#endif