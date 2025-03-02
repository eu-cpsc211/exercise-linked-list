#include "node.h"
#include "test-utilities.h"

#include <gtest/gtest.h>
#include <sstream>
#include <vector>

using namespace std;

/* --------------------------------------------------------
A linked list has, at minimum, a "head". This is a pointer
to the beginning of the list.

If the head pointer is NULL, the list is empty.
-------------------------------------------------------- */

TEST(LinkedLists, 1_NullPointerIsEmptyList)
{
    Node* head = nullptr; // NULL works too
    ASSERT_EQ(nullptr, head);
}

/* --------------------------------------------------------
A linked list is made up of "nodes".

The head pointer points to the first node in the list.

Each node contains:
- Data. This is whatever is being tracked by the list.
   This could be a single value, multiple values, or an object.
- A "next" pointer: a pointer to the next node in the list.

If the "next" pointer is NULL, that is the last node.
-------------------------------------------------------- */

TEST(LinkedLists, 2_SingleNode)
{
    Node* head = new Node();

    // TODO

    ASSERT_EQ(100, head->data);
}

/* --------------------------------------------------------
You can use pointers to reference any nodes in the list.

Here is an example of building a linked list.
-------------------------------------------------------- */

TEST(LinkedLists, 3_MultipleNodes)
{
    Node* head = nullptr;
    Node* ptr = nullptr;

    // TODO

    // Verify list contents
    string str = PrintListToString(head);
    ASSERT_EQ("100 200 300", str);
}

/* --------------------------------------------------------
Prepending an item
-------------------------------------------------------- */

TEST(LinkedLists, 4_Prepend)
{
    // Create a linked list
    Node* head = CreateSinglyLinkedList(3);

    // TODO

    // Verify list contents
    string str = PrintListToString(head);
    ASSERT_EQ("50 100 200 300", str);
}

/* --------------------------------------------------------
Insert an item
-------------------------------------------------------- */

TEST(LinkedLists, 5_Insert)
{
    // Create a linked list
    Node* head = CreateSinglyLinkedList(4);

    // Create new node
    Node* newNode = new Node();
    newNode->data = 50;
    newNode->next = nullptr;

    // TODO

    // Verify list contents
    string str = PrintListToString(head);
    ASSERT_EQ("100 200 300 50 400", str);
}

/* --------------------------------------------------------
Remove an item
-------------------------------------------------------- */

TEST(LinkedLists, 6_Remove)
{
    // Create a linked list
    Node* head = CreateSinglyLinkedList(4);

    // Want to delete 3rd node, so get pointer to 2nd node
    // Find node to remove
    Node* ptr = head->next;

    // TODO

    // Verify list contents
    string str = PrintListToString(head);
    ASSERT_EQ("100 200 400", str);
}

/* --------------------------------------------------------
Append an item
-------------------------------------------------------- */

TEST(LinkedLists, 7_Append)
{
    // Create a linked list
    Node* head = CreateSinglyLinkedList(4);

    // Get last node
    Node* tail = head;
    while (tail->next != nullptr)
        tail = tail->next;

    // TODO

    // Verify list contents
    string str = PrintListToString(head);
    ASSERT_EQ("100 200 300 400 50", str);
}

/* --------------------------------------------------------
Reverse a list
-------------------------------------------------------- */

TEST(LinkedLists, 8_Reverse)
{
    // Create a linked list
    Node* head = CreateSinglyLinkedList(4);

    // TODO

    // Verify list contents
    string str = PrintListToString(head);
    ASSERT_EQ("400 300 200 100", str);
}
