/*
 * Exercise 8: typedef and using – Type aliases.
 * Let's say you have a structure like this:
 * struct Node {
 * int value;
 * Node *next;
 * };
 * This is a node in a singly linked list. Use typedef to declare the NodePtr alias for
 * the Node pointer ( Node* ). Then write a function that accepts NodePtr and
 * calculates the length of the list (by following the next field). In main, create several nodes
 * manually, link them (for example, three nodes: n1->n2->n3), and test the length function.
 * After that, make a similar alias using keyword using NodePtr = Node*; and
 * make sure that the code compiles the same way.
 */

/*
 * Доп. материал (вопрос) в faq.md в этой же папке.
 */

#include <iostream>

using namespace std;

struct Node{
    int value;
    Node* next;
};

typedef Node* Nodeptr;

int len_of_list(Nodeptr head){
    int count = 0;
    if (head == nullptr){
        return 0;
    } else{
        while (head != nullptr){
            count++;
            head = head->next;
        }
    }
    return count;
}

int main(){
    Node n1 = {1, nullptr};
    Node n2 = {2, nullptr};
    Node n3 = {3, nullptr};

    n1.next = &n2;
    n2.next = &n3;

    Nodeptr head = &n1;

    cout << "Length of list: " << len_of_list(head) << endl;

}