#pragma once

#include "double-node.h"
#include "node.h"

#include <sstream>
#include <string>

/**
 * Creates a singly linked list with the number of nodes specified.
 * Nodes are assigned data values starting with 100 and incrementing by 100 for each
 * additional node.
 * @param numNode The number of nodes to include in the linked list.
 */
Node* CreateSinglyLinkedList(int numNodes);

/**
 * Creates a doubly linked list with the number of nodes specified.
 * Nodes are assigned data values starting with 100 and incrementing by 100 for each
 * additional node.
 * @param numNode The number of nodes to include in the linked list.
 */
DoubleNode* CreateDoublyLinkedList(int numNodes);

/**
 * Deletes all nodes in the linked list.
 */
template <typename T>
void DeleteList(T* head)
{
    T* ptr = head;
    T* next = nullptr;

    while (ptr != nullptr) {
        next = ptr->next;
        delete ptr;
        ptr = next;
    }
}

/**
 * Traverses a list and creates a space-delimited string containing all data values
 * in the list in order from head to tail.
 */
template <typename T>
std::string PrintListToString(T* head)
{
    int maxLoops = 100; // Infinite loop protection
    stringstream ss;

    int i = 0;
    T* ptr = head;

    while (ptr != nullptr && i < maxLoops) {
        ss << ptr->data;
        ptr = ptr->next;
        i++;

        if (ptr != nullptr)
            ss << " ";
    }

    return ss.str();
}

/**
 * Traverses a doubly linked list from head to tail and then back to head.
 * Creates a space-delimited string containing the data values of each node as they are encountered.
 */
std::string PrintListToStringInBothDirections(DoubleNode* head);
