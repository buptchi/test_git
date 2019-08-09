#include <iostream>
using namespace std;

class A {
public:
	A(int b):a(b) {}
	int a;
};

int main() {
	std::cout << "hello chi from windows 10" << std::endl;
	std::cout << "vscode is so good" << std::endl;
	A ca(5);
	std::cout << "class A member a=" << ca.a << std::endl;
	return 0;
}
