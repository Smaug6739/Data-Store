#ifndef STORE_TPP
#define STORE_TPP

#include "Store.h"


template<typename K, typename V>
Store<K, V> ::Store() {};

//template<typename K, typename V>
//Store<K, V>::Store(Data<K,V> *data[]) {
//	std::array::iterator it{ std::begin(data)};
//	for (it != std::end(data); it++;) {
//		std::cout << it << std::endl;
//	}
//
//};

template<typename K, typename V>
void Store<K, V>::add(K key, V value) {
	this->data.insert(key, value)
};

template<typename K, typename V>
void Store<K, V>::remove(K key) {
	this->data->
};

#endif


