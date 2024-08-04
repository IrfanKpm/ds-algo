#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    // Create and initialize nodes
    Node *node1 = new Node{12, nullptr};
    Node *node2 = new Node{4, nullptr};
    Node *node3 = new Node{10, nullptr};
    Node *node4 = new Node{1, nullptr};
    Node *node5 = new Node{14, nullptr};
    Node *node6 = new Node{9, nullptr};

    // Link nodes to form a singly linked list
    Node *head = node1;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    // Printing specific nodes
    Node *addr = node2;
    cout << addr->data << endl; // 4
    cout << addr->next << endl;

    addr = addr->next;          // addr = node3
    cout << addr->data << endl; // 10
    cout << addr->next << endl;

    cout << "\n-----------------------\n"
         << endl;

    // Traverse from head and print data, next pointer, and node address
    Node *current = head; // We use current to avoid modifying head
    while (current != nullptr)
    {
        cout << "Node Address: " << current << ", Data: " << current->data << ", Next: " << current->next << endl;
        current = current->next;
    }

    // Clean up memory to prevent memory leaks using head
    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp; // Delete the current node to free memory
    }

    return 0;
}
