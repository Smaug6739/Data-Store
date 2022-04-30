#ifndef STORE_H
#define STORE_H
#include <unordered_map>
#include <vector>
#include "Data.h"

#include <vector>
template <typename K, typename V>
class Store
{
private:
	std::unordered_map<K, V> data{};
public:
	Store();
	Store(Data<K, V> arr[], size_t);
	V get(K);
	void add(K, V);
	void remove(K);
	void clear();
	V find(bool cb(V valueToTest));
	void each(void cb(V value));
	Store<K, V> filter(bool cb(V valueToTest));

};

#include "Store.cpp"
#endif