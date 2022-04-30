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
        std::cout << "Each: store1" << val << std::endl;
        });
    Store<std::string, int> store2 = store.filter([](int val) {
        return val > 5;
        });
    store2.each([](int val) {
        std::cout << "Each store2: " << val << std::endl;
        });
    Data<std::string, std::string> arr[] = { Data<std::string, std::string>("hello", "world") } ;

    
   Store<std::string, std::string> store3(arr, std::size(arr));
    store3.each([](std::string val) {
        std::cout << "Each store3: " << val << std::endl;
    });

}

