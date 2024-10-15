// add the header file
#include <iostream>
using namespace std;

class Node {
public:
    Node(int value) : data(value), prev(NULL), next(NULL) {}
    int data;
    Node* prev;
    Node* next;
};
 
class Deque {
private:
    Node* front;
    Node* back;
public:
    Deque() : front(NULL), back(NULL) {}
    ~Deque() {
        while (front != NULL) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
    void push_front(int value) {
        Node* newNode = new Node(value);
        if (front == NULL)
            front = back = newNode;
        else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }
    void push_back(int value) {
        Node* newNode = new Node(value);
        if (back == NULL)
            front = back = newNode;
        else {
            newNode->prev = back;
            back->next = newNode;
            back = newNode;
        }
    }
    void pop_front() {
        if (front != NULL) {
            Node* temp = front;
            front = front->next;
            if (front != NULL)
                front->prev = NULL;
            else
                back = NULL;
            delete temp;
        }
    }
    void pop_back() {
        if (back != NULL) {
            Node* temp = back;
            back = back->prev;
            if (back != NULL)
                back->next = NULL;
            else
                front = NULL;
            delete temp;
        }
    }
};
 
int main() {
    Deque deque;
    deque.push_front(3);
    deque.pop_front();
    return 0;
}


