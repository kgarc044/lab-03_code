#ifndef TESTC_H_
#define TESTC_H_
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
