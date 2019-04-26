#ifndef SUB_MOCK_H
#define SUB_MOCK_H
#include "base.h"
#include <string>

class SubMock : public Base {
    public:
        SubMock() {
        };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "8.500000-1.000000"; }
};
#endif