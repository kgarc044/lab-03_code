#ifndef SEVEN_OP_MOCK_H
#define SEVEN_OP_MOCK_H
#include "base.h"
#include <string>

class SevenOpMock : public Base {
    public:
        SevenOpMock() {
        };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
};
#endif