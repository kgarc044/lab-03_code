#ifndef MULT_H_
#define MULT_H_
#include <string>
#include "base.h"
using namespace std;

class Mult : public Base{

private:
        Base* left;
        Base* right;
public:
        Mult(Base*  test1,Base* test2) {
        left = test1;
	right = test2;
        }
        double evaluate() {
         return (left->evaluate() * right->evaluate());
         }
  string stringify() {
         return left->stringify() + "*" + right->stringify();
         }
};
#endif
