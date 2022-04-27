#ifndef DATA_H
#define DATA_H

template<typename K, typename V>
class Data
{
public:
	K key;
	V value;
	Data(K, V);
};

#endif