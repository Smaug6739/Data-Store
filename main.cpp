#include <iostream>
#include <string>
#include "Store.h"

int main()
{
    Store<std::string, int> store{};
    store.add("key1", 1);
    store.add("key2", 8);
    store.add("key3", 12);
    std::cout << "Get: " << store.get("key1") << std::endl;
    std::cout << "Find: " << store.find([](int val) {
        return val == 1;
        })
    << std::endl;
    store.each([](int val) {
        std::cout << "Each: " << val << std::endl;
        });
    Store<std::string, int> store2 = store.filter([](int val) {
        return val > 5;
        });
    store2.each([](int val) {
        std::cout << "Each store2: " << val << std::endl;
        });
    //  std::cout << store.get("key1") << std::endl;
}

