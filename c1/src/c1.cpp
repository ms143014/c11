#include <iostream>
#include <thread>
#include <string>
#include <map>
using namespace std;

void runnable1(){
	cout << "okrthead" << endl;
}
void runnable2(int n){
	cout << "okrthead n : " << n << endl;
}
void test(int& n){
	n++;
}
void printThread0(std::thread& t){
	cout << &t << endl;
}

template <typename R>
R * my_cast(){
	cout << "my cast" << endl;
	return NULL;
}
void cache(){
	my_cast<int>();
	my_cast<float>();
	my_cast<double>();
	my_cast<long>();
	my_cast<bool>();
	my_cast<unsigned int>();
	my_cast<std::string>();
	my_cast<std::map<char const*, void*>>();
}

int main(void){
	string s = "hello";
	std::thread t(runnable1);
	int n = 10;
	cout << &n << endl;
	s.c_str();
	cout << "t address: " << &t << endl;
	std::thread t1(runnable2, n + 13);
	t.join();
	t1.join();
	return 0;
}
