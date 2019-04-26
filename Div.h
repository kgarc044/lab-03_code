#include <string>
#include "base.h"
using namespace std;

class Div : public Base{
private:
        double left;
        double right;
public:
        Div(double  test1,double test2) {
        left = test1;
        right = test2;
        }
        virtual double evaluate() {
        return (left / right);
        }
        virtual string stringify() {
        return (to_string(left + "/" + right));
        }
};


