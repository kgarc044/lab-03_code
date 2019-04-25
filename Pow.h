#ifndef POW_H_
#define POW_H_
#include <string>
#include "base.h"
#include <cmath>
using namespace std;

class Pow : public Base{

private:
        Base* left;
        Base* right;
public:
        Pow(Base* test1,Base* test2) {
        left = test1;
        right = test2;
        }
        double evaluate() {
	return (pow(left->evaluate(),right->evaluate()));
	}
        string stringify() {
	return left->stringify() + "^" + right->stringify();
	}
};
#endif

