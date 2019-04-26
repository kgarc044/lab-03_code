#include <iostream>
#include "gtest/gtest.h"
#include "Op.h"
#include "Rand.h"
#include "Mult.h"
#include "Div.h"
#include "Add.h"
#include "Sub.h"
#include "Pow.h"
#include "base.h"
#include "SevenOpMock.h"
#include "AddMock.h"
#include "MultMock.h"
#include "DivMock.h"
#include "SubMock.h"
#include "PowMock.h"

TEST(Test, OpClass) {
  Op* op1 = new Op(7.5);
  SevenOpMock* mock1 = new SevenOpMock();
  EXPECT_EQ(op1->evaluate(), mock1->evaluate());
}

TEST(Test, AddClass) {
  Op* op1 = new Op(3.3);
  Op* op2 = new Op(4.2);
  Add* addObj = new Add(op1, op2);
  SevenOpMock* mock1 = new SevenOpMock();
  EXPECT_EQ(addObj->evaluate(), mock1->evaluate());
}

TEST(Test, SubClass) {
  Op* op1 = new Op(8.5);
  Op* op2 = new Op(1.0);
  Sub* subObj = new Sub(op1, op2);
  SevenOpMock* mock1 = new SevenOpMock();
  EXPECT_EQ(subObj->evaluate(), mock1->evaluate());
}

TEST(Test, MultClass) {
  Op* op1 = new Op(1.0);
  Op* op2 = new Op(7.5);
  Mult* multObj = new Mult(op1, op2);
  SevenOpMock* mock1 = new SevenOpMock();
  EXPECT_EQ(multObj->evaluate(), mock1->evaluate());
}

TEST(Test, DivClass) {
  Op* op1 = new Op(7.5);
  Op* op2 = new Op(1.0);
  Div* divObj = new Div(op1, op2);
  SevenOpMock* mock1 = new SevenOpMock();
  EXPECT_EQ(divObj->evaluate(), mock1->evaluate());
}

TEST(Test, PowClass) {
  Op* op1 = new Op(7.5);
  Op* op2 = new Op(1.0);
  Pow* powObj = new Pow(op1, op2);
  SevenOpMock* mock1 = new SevenOpMock();
  EXPECT_EQ(powObj->evaluate(), mock1->evaluate());
}
// Stringify UNIT TEST
TEST(Test, StringAddClass) {
  Op* op1 = new Op(3.3);
  Op* op2 = new Op(4.2);
  Add* addObj = new Add(op1, op2);
  AddMock* mock1 = new AddMock();
  EXPECT_EQ(addObj->stringify(), mock1->stringify());
}

TEST(Test, StringMultClass) {
  Op* op1 = new Op(1.0);
  Op* op2 = new Op(7.5);
  Mult* multObj = new Mult(op1, op2);
  MultMock* mock1 = new MultMock();
  EXPECT_EQ(multObj->stringify(), mock1->stringify());
}

TEST(Test, StringDivClass) {
  Op* op1 = new Op(7.5);
  Op* op2 = new Op(1.0);
  Div* divObj = new Div(op1, op2);
  DivMock* mock1 = new DivMock();
  EXPECT_EQ(divObj->stringify(), mock1->stringify());
}

TEST(Test, StringSubClass) {
  Op* op1 = new Op(8.5);
  Op* op2 = new Op(1.0);
  Sub* subObj = new Sub(op1, op2);
  SubMock* mock1 = new SubMock();
  EXPECT_EQ(subObj->stringify(), mock1->stringify());
}

TEST(Test, StringPowClass) {
  Op* op1 = new Op(7.5);
  Op* op2 = new Op(1.0);
  Pow* powObj = new Pow(op1, op2);
  PowMock* mock1 = new PowMock();
  EXPECT_EQ(powObj->stringify(), mock1->stringify());
}

//TEST(Test, RandClass) {
 // Rand* rand = new Rand();
 // EXPECT_LE(0, rand->evaluate());
 // EXPECT_GE("100", rand->evaluate());
//}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
} 