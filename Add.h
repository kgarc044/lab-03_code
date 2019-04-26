#ifndef ADD_H_
#define ADD_H_
#include <string>
#include "base.h"
using namespace std;

class Add : public Base{

private:
        double left;
        double right;
public:
        Add(double  test1,double test2) {
        left = test1;
        right = test2;
        }
        virtual double evaluate() {
        return (left + right);
        }
        virtual string stringify() {
        return (to_string(left + "+" + right));
        }
};

#endif
