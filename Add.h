#ifndef ADD_H_
#define ADD_H_
#include <string>
#include "base.h"
using namespace std;

class Add : public Base{

private:
        Base* left;
        Base* right;
public:
        Add(Base* test1,Base* test2) {
        left = test1;
        right = test2;
        }
        double evaluate() {
        return (left->evaluate() + right->evaluate());
        }
        string stringify() {
        return left->stringify() + "+" + right->stringify();
        }
};
#endif
