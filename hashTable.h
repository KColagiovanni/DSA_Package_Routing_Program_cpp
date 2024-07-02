class HashTable {

    const int TABLESIZE = 40;
    // std::vector<std::variant<int, std::vector>> hashTable;
    struct hashTable {
        int key;
        std::vector<std::string> value;
    };

    int createKey(int key) {
        return key % TABLESIZE;
    }

    hashTable addPackage(int key, std::vector<std::string> value) {
        hashTable kvPair;
        kvPair.key = createKey(key);
        kvPair.value = value;

        return kvPair;
    }
};