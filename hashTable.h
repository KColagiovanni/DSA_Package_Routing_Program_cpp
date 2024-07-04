#include <map>

class HashTable {

    public:
        const int TABLESIZE = 40;
        std::map<int, std::vector<std::string>> hash_table;

        int createKey(int key) {
            return key % TABLESIZE;
        }

        void addPackage(int key, std::vector<std::string> value) {
            hash_table.insert({createKey(key), value});
        }

        std::vector<std::string> lookupItem(int key) {
            for (int i = 0; i < hash_table.size(); i++){
                std::cout << hash_table[key][i] << std::endl;
            }
            return hash_table[key];
        }

};