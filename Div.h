#include <string>
#include "base.h"
using namespace std;

class Div : public Base{
private:
        Base* left;
        Base* right;
public:
        Div(Base*  test1,Base* test2) {
        left = test1;
        right = test2;
        }
         double evaluate() {
 	return (left->evaluate() / right->evaluate());
 	}
         string stringify() {
 	return left->stringify() + "/" + right->stringify();
 	}
};


