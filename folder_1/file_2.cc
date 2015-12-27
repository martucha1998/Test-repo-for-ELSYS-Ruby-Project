#include<iostream>
using namespace std;
class ThrowError{};

class Calc {
	int a_;
	int b_;
public:
	Calc(int a, int b)
	: a_(a), b_(b)
	{}
	
	void plus(){
		a_ = a_+b_;
	}
};
int main(){

	return 0;
}
