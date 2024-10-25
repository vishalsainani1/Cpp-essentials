#include <iostream>
#include <vector>
using namespace std;

// Dictionary class template
template <typename K, typename V>
class Dictionary {
private:
    vector<K> keys;
    vector<V> values;
    int capacity;

    // Function to resize the vectors if necessary
    void resize() {
        capacity *= 2;
        keys.resize(capacity);
        values.resize(capacity);
    }

public:
    // Constructor to initialize the dictionary with a certain capacity
    Dictionary(int initialCapacity) {
        capacity = initialCapacity;
        keys.reserve(capacity);
        values.reserve(capacity);
    }

    // Function to add a new key-value pair
    void add(const K& key, const V& value) {
        if (keys.size() == capacity) {
            resize();  // Resize the vectors if capacity is reached
        }
        keys.push_back(key);
        values.push_back(value);
    }

    // Overloaded [] operator to access values by key
    V operator[](const K& key) {
        for (size_t i = 0; i < keys.size(); i++) {
            if (keys[i] == key) {
                return values[i];
            }
        }
        return V();  // Return default value of V if key is not found
    }

    // Overloaded << operator for printing the dictionary
    friend ostream& operator<<(ostream& os, const Dictionary& dict) {
        for (size_t i = 0; i < dict.keys.size(); i++) {
            os << dict.keys[i] << " : " << dict.values[i] << endl;
        }
        return os;
    }
};

int main() {
    // Create a dictionary with initial capacity 2
    Dictionary<int, string> deviceCodeMap(2);

    // Add elements to the dictionary
    deviceCodeMap.add(1, "D1");
    deviceCodeMap.add(2, "D2");
    deviceCodeMap.add(3, "D3");
    deviceCodeMap.add(4, "D4");

    // Access an element by key
    string deviceName = deviceCodeMap[2];
    cout << deviceName << endl; // Output: D2

    // Dump all the items from the dictionary
    cout << deviceCodeMap;
    /*
        Output:
        1 : D1
        2 : D2
        3 : D3
        4 : D4
    */

    return 0;
}
