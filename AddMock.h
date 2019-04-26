#ifndef ADD_MOCK_H
#define ADD_MOCK_H
#include "base.h"
#include <string>

class AddMock : public Base {
    public:
        AddMock() {
        };

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "3.300000+4.200000"; }
};
#endif