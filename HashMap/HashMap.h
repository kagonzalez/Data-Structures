//
// Created by kegonzal on 4/1/19.
//

#ifndef DATA_STRUCTURES_HASHMAP_H
#define DATA_STRUCTURES_HASHMAP_H

#include <string>
#include <stdexcept>
#include <cmath>
#include "../SinglyLinkedList/SinglyLinkedList.h"

template<typename E>
class HashMap {
private:
    class HashNode {
    public:

        HashNode() : data(), key("") {}

        E &getData() { return data; }

        std::string getKey() { return key; }

        HashNode &setKey(std::string _key) {
            key = _key;
            return *this;
        }

        HashNode &setData(E _data) {
            data = _data;
            return *this;
        }

    private:
        E data;
        std::string key;
    };

public:
    HashMap(int n = 10);

    void add(E, std::string);

private:
    int initSize;
    int currSize;
    HashNode *arr;

    int hashFunction(std::string);

};

template<typename E>
HashMap<E>::HashMap(int n) {
    initSize = 0;
    currSize = 0;
    arr = new E[n];
}

template<typename E>
void HashMap<E>::add(E data, std::string key) {
    int hash = hashFunction(key);
    arr[hash].insert(data);
}

template<typename E>
int HashMap<E>::hashFunction(std::string key) {
    int value = 0;
    for (int i = 0; i < key.length(); i++)
        value += (int) key.at(i);
    return value % currSize;
}

#endif //DATA_STRUCTURES_HASHMAP_H
