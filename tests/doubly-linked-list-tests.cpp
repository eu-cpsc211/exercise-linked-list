#include "double-node.h"
#include "test-utilities.h"

#include <gtest/gtest.h>
#include <vector>

using namespace std;

/* --------------------------------------------------------
Doubly linked lists.

Similar to a singly linked list, we'll need a head pointer
to start with. This is a pointer to the beginning of the list.

If the head pointer is NULL, the list is empty.
-------------------------------------------------------- */

TEST(DoublyLinkedLists, 1_NullPointerIsEmptyList)
{
    DoubleNode* head = nullptr; // NULL works too
    ASSERT_EQ(nullptr, head);
}

/* --------------------------------------------------------
For a doubly linked list, each node contains:
- Data. This is whatever is being tracked by the list.
   This could be a single value, multiple values, or an object.
- A "next" pointer: a pointer to the next node in the list.
- A "prev" pointer: a pointer to the previous node in the list.

If the "next" pointer is NULL, that is the last node.
If the "prev" pointer is NULL, that is the first node.
-------------------------------------------------------- */

TEST(DoublyLinkedLists, 2_SingleNode)
{
    DoubleNode* head = new DoubleNode();

    // TODO

    ASSERT_EQ(100, head->data);
}

/* --------------------------------------------------------
You can use pointers to reference any nodes in the list.

Here is an example of building a doubly linked list.
-------------------------------------------------------- */

TEST(DoublyLinkedLists, 3_MultipleNodes)
{
    DoubleNode* head = nullptr;
    DoubleNode* tail = nullptr;
    DoubleNode* newNode = nullptr;

    // TODO

    // Verify list contents
    string str = PrintListToStringInBothDirections(head);
    ASSERT_EQ("100 200 300 200 100", str);
}

/* --------------------------------------------------------
Prepending an item
-------------------------------------------------------- */

TEST(DoublyLinkedLists, 4_Prepend)
{
    // Create a linked list
    DoubleNode* head = CreateDoublyLinkedList(3);

    // TODO

    // Verify list contents
    string str = PrintListToStringInBothDirections(head);
    ASSERT_EQ("50 100 200 300 200 100 50", str);
}

/* --------------------------------------------------------
Insert an item
-------------------------------------------------------- */

TEST(DoublyLinkedLists, 5_Insert)
{
    // Create a linked list
    DoubleNode* head = CreateDoublyLinkedList(4);

    // Create new node
    DoubleNode* newNode = new DoubleNode();
    newNode->data = 50;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    // TODO

    // Verify list contents
    string str = PrintListToStringInBothDirections(head);
    ASSERT_EQ("100 200 300 50 400 50 300 200 100", str);
}

/* --------------------------------------------------------
Remove an item
-------------------------------------------------------- */

TEST(DoublyLinkedLists, 6_Remove)
{
    // Create a linked list
    DoubleNode* head = CreateDoublyLinkedList(4);

    // Want to delete 3rd node, so get pointer to 2nd node
    // Find node to remove
    DoubleNode* ptr = head->next;

    // TODO

    // Verify list contents
    string str = PrintListToStringInBothDirections(head);
    ASSERT_EQ("100 200 400 200 100", str);
}

/* --------------------------------------------------------
Append an item
-------------------------------------------------------- */

TEST(DoublyLinkedLists, 7_Append)
{
    // Create a linked list
    DoubleNode* head = CreateDoublyLinkedList(4);

    // Get last node
    DoubleNode* ptr = head;
    while (ptr->next != nullptr)
        ptr = ptr->next;

    // Create new node
    DoubleNode* newNode = new DoubleNode();
    newNode->data = 50;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    // TODO

    // Verify list contents
    string str = PrintListToStringInBothDirections(head);
    ASSERT_EQ("100 200 300 400 50 400 300 200 100", str);
}

/* --------------------------------------------------------
Reverse a list
-------------------------------------------------------- */

TEST(DoublyLinkedLists, 8_Reverse)
{
    // Create a linked list
    DoubleNode* head = CreateDoublyLinkedList(4);

    // TODO

    // Verify list contents
    string str = PrintListToStringInBothDirections(head);
    ASSERT_EQ("400 300 200 100 200 300 400", str);
}
