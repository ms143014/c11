#include <iostream>
#include <thread>
using namespace std;

void runnable1(){
	cout << "okrthead" << endl;
}

int main(void){
	std::thread t(runnable1);
	cout << &t << endl;
	t.join();
	return 0;
}
