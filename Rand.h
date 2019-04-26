#ifndef RAND_H_
#define RAND_H_
#include "base.h"
#include <string>

using namespace std;

class Rand : public Base{
private:
        double value = 0;
public:
        Rand(){
	srand(69);
        value = rand()%100;
}


virtual double evaluate(){
return value;
}
virtual string stringify(){
return to_string(value);
}
};
#endif
