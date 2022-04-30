#ifndef DATA_H
#define DATA_H

template<typename K, typename V>
class Data
{
public:
	K key;
	V value;
	Data() = default;
	Data(K, V);
};
#include "Data.cpp"
#endif