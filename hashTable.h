// HashTable Tutorial: https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus
#include <map>

class HashTable {

    public:
        const int TABLESIZE = 40;
        std::map<int, std::vector<std::string>> hash_table;

        int createKey(int key) {
            return key % TABLESIZE;
        }

        std::map<int, std::vector<std::string>> addPackage(int key, std::vector<std::string> value) {
            for (int i = 0; i < value.size(); i++){
                std::cout << "value[i] from addPackage is: " << value[i] << std::endl;
            }
            hash_table.insert({createKey(key), value});
            std::cout << "hash_table.size() from addPackage is: " << hash_table.size() << std::endl;

            return hash_table;
        }

        std::vector<std::string> lookupItem(int key) {
            std::cout << "key from HashTable is: " << key << std::endl;
            std::cout << "hash_table.size() from lookupItem is: " << hash_table.size() << std::endl;

            for (int i = 0; i < hash_table.size(); i++){
                std::cout << hash_table[key][i] << std::endl;
            }

            return hash_table[key];
        }

};