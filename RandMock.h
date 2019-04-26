
#include "base.h"
#include <string>

using namespace std;

class RandMock : public Base{
private:
        double value = 0;
public:
        RandMock(){
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

