#ifndef STORE_TPP
#define STORE_TPP

#include "Store.h"
#include <iostream>


template<typename K, typename V>
Store<K, V> ::Store() { 
	std::cout << "Constructor called" << std::endl;
}
#endif


