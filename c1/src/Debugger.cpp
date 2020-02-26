/*
 * Debugger.cpp
 *
 *  Created on: 2020年2月23日
 *      Author: Administrator
 */

#include <iostream>
#include <map>
using namespace std;

std::map<string, void*> *debugMap = new std::map<string, void*>();

/**
 * gdb> call 'Debugger.cpp'::helloDebugger("src/NumberConterterDebugger.dll", "hello", ld)
 * */

typedef void (*func)(void*, ...);

bool helloDebugger(char *dll, char* methodName, void* arg, ...){
//	HINSTANCE hinstLib = LoadLibrary(dll);
//
//	if(hinstLib != NULL){
//		cout << "模块加载成功" << endl;
//		((func)(GetProcAddress(hinstLib, methodName)))(arg);
//		FreeLibrary(hinstLib);
//	}else{
//		cout << "打开模块失败" << endl;
//	}



//	void *dfile = dlopen(dll, RTLD_NOW|RTLD_GLOBAL);
//	if(dfile != NULL){
//		dlsym(dfile, methodName))(arg);
//		dlclose(dfile);
//	}else{
//		cout << "打开模块失败" << endl;
//	}
	return false;
}

void set(char const *key_chars, void* value){
	std::string key = key_chars;
	debugMap->insert(pair<string, void*>(key, value));
}

void* get(char const *key_chars){
	string key = key_chars;
	std::map<string, void*>::iterator iter = debugMap->find(key);
	return iter != debugMap->end() ? iter->second : NULL;
}
