#ifndef POW_H_
#define POW_H_
#include <string>
#include "base.h"
#include <cmath>
using namespace std;

class Pow : public Base{

private:
        double left;
        double right;
public:
        Pow(double  test1,double test2) {
        left = test1;
        right = test2;
        }
        virtual double evaluate() {
        return (pow(left, right));
        }
        virtual string stringify() {
        return (to_string(left + "^" + right));
        }
};

#endif

