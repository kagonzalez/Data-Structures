//
// Created by kegonzal on 4/3/19.
//

#ifndef DATA_STRUCTURES_SINGLYLINKEDLIST_H
#define DATA_STRUCTURES_SINGLYLINKEDLIST_H

#include "../Node.h"

template<typename E>
class SinglyLinkedList {
private:
    class SinglyNode : public Node<E> {
    public:
        void setNext(SinglyNode *_next) {
            next = _next;
        }
    private:
        SinglyNode *next;
    };

public:
    SinglyLinkedList();

    SinglyLinkedList(int);

    E &getHead();

    E &getTail();

    SinglyNode *getHeader();

    SinglyNode *getTailer();

    E &operator[](int);

private:
    SinglyNode *header;
    SinglyNode *tailer;
    int size;

};

template<typename E>
SinglyLinkedList<E>::SinglyLinkedList() {
    header = nullptr;
    tailer = nullptr;
    size = 0;
}

template<typename E>
SinglyLinkedList<E>::SinglyLinkedList(int n) {
    header = new SinglyNode();
    SinglyNode *curr = header;
    for (int i = 0; i < n; i++)
        curr.setNext(new SinglyNode());
}


#endif //DATA_STRUCTURES_SINGLYLINKEDLIST_H
