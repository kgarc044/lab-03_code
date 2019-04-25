#ifndef OP_H_
#define OP_H_
#include "base.cpp"
#include <string>

using namespace std;

class Op : public Base{
private:
        double value = 0;
public:
        Op(){
        value = 21;
}
        Op(double newNum){
                value = newNum;
}
virtual double evaluate(){
return->value;
}
virtual string stringify(){
return to_string(value);
}
};    
#endif
