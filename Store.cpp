#ifndef STORE_TPP
#define STORE_TPP

#include "Store.h"
#include <unordered_map>
#include <iostream>
#include <vector>

template<typename K, typename V>
Store<K, V> ::Store() {
	std::cout << "Constructor 1 called" << std::endl;
};

template<typename K, typename V>
Store<K, V> ::Store(Data<K, V> arr[], size_t size) {
	std::cout << "Constructor called" << std::endl;
	for (size_t i = 0; i < size; i++) {
		this->add(arr[i].key, arr[i].value);
	}
};


template<typename K, typename V>
void Store<K, V>::add(K key, V value) {
	this->data[key] = value;
};

template<typename K, typename V>
void Store<K, V>::remove(K key) {
	this->data.erase(key);
};
template<typename K, typename V>
void Store<K, V>::clear() {
	return this->data.clear();
};
template<typename K, typename V>
V Store<K, V>::get(K key) {
	const V val = this->data[key];
	return val;
};

template<typename K, typename V>
V Store<K, V>::find(bool cb(V valueToTest)) {

	for (auto it = this->data.begin(); it != this->data.end(); it++) {
		V val = this->data[it->first];
		if (cb(val)) {
			return val;
		}
	}
	return 0;
};

template<typename K, typename V>
void Store<K, V>::each(void cb(V valueToTest)) {
	for (auto it = this->data.begin(); it != this->data.end(); it++) {
		V val = this->data[it->first];
		cb(val);
	}
};


template<typename K, typename V>
Store<K,V> Store<K, V>::filter(bool cb(V valueToTest)) {
	Store<K, V> newStore = Store();
	for (auto it = this->data.begin(); it != this->data.end(); it++) {
		V val = this->data[it->first];
		if (cb(val)) {
			newStore.add(it->first, val);
		}
	}
	return newStore;
};

#endif


