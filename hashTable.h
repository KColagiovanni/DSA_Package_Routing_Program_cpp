#include <map>

class HashTable {

    const int TABLESIZE = 40;
    // std::vector<std::variant<int, std::vector>> hashTable;
    std::map<int, std::vector<std::string>> hash_table;

    int createKey(int key) {
        return key % TABLESIZE;
    }

    void addPackage(int key, std::vector<std::string> value) {
        hash_table[createKey(key)] = value;
    }

    std::vector<std::string> lookupItem(int key) {
        return hash_table[key];
    }

};