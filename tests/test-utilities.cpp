#include "test-utilities.h"

using namespace std;

Node* CreateSinglyLinkedList(int numNodes)
{
    if (numNodes <= 0)
        return nullptr;

    Node* head = new Node();
    head->data = 100;
    head->next = nullptr;
    Node* ptr = head;

    for (int i = 2; i <= numNodes; i++) {
        ptr->next = new Node();
        ptr = ptr->next;
        ptr->data = i * 100;
        ptr->next = nullptr;
    }

    return head;
}

DoubleNode* CreateDoublyLinkedList(int numNodes)
{
    if (numNodes <= 0)
        return nullptr;

    DoubleNode* head = new DoubleNode();
    head->data = 100;
    head->next = nullptr;
    head->prev = nullptr;

    DoubleNode* tail = head;
    DoubleNode* newNode = nullptr;

    for (int i = 2; i <= numNodes; i++) {
        newNode = new DoubleNode();
        newNode->data = i * 100;
        newNode->prev = tail;
        newNode->next = nullptr;
        tail->next = newNode;
        tail = newNode;
    }

    return head;
}

std::string PrintListToStringInBothDirections(DoubleNode* head)
{
    int maxLoops = 100; // Infinite loop protection
    stringstream ss;

    int i = 0;
    DoubleNode* ptr = head;

    // Empty list - just return empty string
    if (head == nullptr)
        return "";

    // Loop from front to back
    while (ptr->next != nullptr && i < maxLoops) {
        ss << ptr->data;
        ptr = ptr->next;
        i++;
        ss << " ";
    }

    // Loop from back to front
    while (ptr != nullptr && i < maxLoops) {
        ss << ptr->data;
        ptr = ptr->prev;
        i++;

        if (ptr != nullptr)
            ss << " ";
    }

    return ss.str();
}
