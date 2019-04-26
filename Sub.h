#ifndef SUB_H_
#define SUB_H_
#include <string>
#include "base.h"
using namespace std;

class Sub : public Base{

private:
        double left;
        double right;
public:
        Sub(double  test1,double test2) {
        left = test1;
        right = test2;
        }
        virtual double evaluate() {
        return (left - right);
        }
        virtual string stringify() {
        return (to_string(left + "-" + right));
        }
};

#endif

