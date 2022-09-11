#include <iostream>
#include <map>

int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div_1(int x, int y) {
	return x / y;
}
int main() {
char z;
int a, b;
std::cin >> a >> z >> b;
std::map<char, int(*)(int x, int y)> calculator;
calculator['+'] = &add;
calculator['-'] = &sub;
calculator['*'] = &mul;
calculator['/'] = &div_1;
std::cout << calculator[z](a, b);
	return 0;
}