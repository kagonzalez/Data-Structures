//
// Created by Kevin Gonzalez on 2/25/2019.
//

#ifndef DATA_STRUCTURES_DOUBLYLINKEDLIST_H
#define DATA_STRUCTURES_DOUBLYLINKEDLIST_H

#include "../Node.h"

template<typename E>
class DoublyLinkedList {
public:

private:
    class DoublyNode : public Node<E> {
    public:
        DoublyNode();

        DoublyNode(E, DoublyNode);

        DoublyNode& setNext(DoublyNode*);

        DoublyNode& setPrev(DoublyNode*);

        DoublyNode *getNext();

        DoublyNode *getPrev();
    private:
        DoublyNode *next, *prev;
    };
};


#endif //DATA_STRUCTURES_DOUBLYLINKEDLIST_H
