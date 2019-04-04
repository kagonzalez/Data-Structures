//
// Created by Kevin Gonzalez on 2/25/2019.
//

#ifndef DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_NODE_H

template<typename E>
class Node {
public:
    Node();

    Node(E);

    E &getData();

    Node<E> &setData(E);

protected:
    E data;
};

template<typename E>
Node<E>::Node() {
    data = nullptr;
}

template<typename E>
Node<E>::Node(E _data) {
    data = _data;
}

template<typename E>
E &Node<E>::getData() {
    return data;
}

template<typename E>
Node<E> &Node<E>::setData(E _data) {
    data = _data;
    return *this;
}

#endif //DATA_STRUCTURES_NODE_H
