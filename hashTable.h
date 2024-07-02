class HashTable {

    const int TABLESIZE = 40;
    std::vector<std::vector<std::string>> hashTable;
    map<key, value> = kvPair;

    int createKey(int key) {
        return key % TABLESIZE;
    }

    std::vector<std::string> addPackage(int key, std::vector<std::string> value) {
        return hashTable[createKey(key)] = kvPair;
    }
};