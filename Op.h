#ifndef OP_H_
#define OP_H_
#include "base.h"
#include <string>

using namespace std;

class Op : public Base{
public:
	double value;
        Op(){
        value = 21;
}
virtual double evaluate(){
return value;
}
virtual string stringify(){
return to_string(value);
}
};    
#endif
