#ifndef STORE_H
#define STORE_H
#include <unordered_map>
#include "Data.h"

#include <vector>
template <typename K, typename V>
class Store
{
private:
	std::unordered_map<K, V> data{};
public:
	void add(K, V);
	void remove(K);
	/*void clear();
	void each();
	void filter();
	void find();*/
	//void get();
	Store();
	//Store(Data<K, V>* data[]);

};

#include "Store.cpp"
#endif