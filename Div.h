class Div : public Base{
private:
Base* left;
Base* right;
public:
Div(Base* testInput1, Base* testInput2){
left = testInput1;
right = testInput2;
}
double evaluate() {
        return (left->evaluate() / right->evaluate());
        }
 string stringify() {
        return left->stringify() + "/" + right->stringify();
        }
};

