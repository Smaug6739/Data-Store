# Data store

This project is a class for manipulate maps in C++ with useful methods.

## Usage

## Constructor

```cpp
Store();
```

```cpp
Store(Data<K, V> arr[], size_t);
```

Example :

```cpp
Store<std::string, int> store{};
```

```cpp
Data<std::string, std::string> arr[] = { Data<std::string, std::string>("hello", "world") } ;
Store<std::string, std::string> store3(arr, std::size(arr));
```

## Get

This method get element in the store.

Parameters : Key (K)

```cpp
store.get("key1"); // Get value of "key1"
```

## Add

This method add a new element in the store.

Parameters : Key (K) and Value (V)

```cpp
store.add("key1", 1); // Add a new element (1) with key "key1" to the store
```

## Remove

This method remove an element in the store.

Parameters : Key (K)

```cpp
store.remove("key1"); // Remove element with key "key1" from the store
```

## Clear

This method clear the store.

```cpp
store.clear(); // Clear the store
```

## Find

This method find an element in the store.

Signature: `V find(bool cb(V valueToTest));`

Parameters : Function : `bool cb(V valueToTest)`

```cpp
store.find([](int valueToTest) { return valueToTest > 0; }); // Find element with value > 0
```

## Each

This method apply a function to each element in the store.

Signature: `void each(void cb(V value));`

Parameters : Function : `void cb(V value)`

```cpp
store.each([](int value) { std::cout << value << std::endl; }); // Print each element
```

## Filter

This method apply a function to each element in the store and return a new store with the result.

Signature: `Store<K, V> filter(bool cb(V value));`

Parameters : Function : `bool cb(V value)`

```cpp
store.filter([](int value) { return value > 0; }); // Filter elements with value > 0
```

---

## Example

```cpp
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
```

---

## License

MIT License

Copyright (c) 2022 Smaug6739

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
