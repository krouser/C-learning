// add the header file
#include <iostream>
#include <memory>


class Node {
public:
    Node(int value) : data(value) {}
    int data;
    std::shared_ptr<Node> prev;
    std::shared_ptr<Node> next;
};
 
class Deque {
private:
    std::shared_ptr<Node> front;
    std::shared_ptr<Node> back;
public:
    Deque() : front(nullptr), back(nullptr) {}
    void push_front(int value) {
        std::shared_ptr<Node> newNode = std::make_shared<Node>(value);
        if (front == nullptr)
            front = back = newNode;
        else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }
    void push_back(int value) {
        std::shared_ptr<Node> newNode = std::make_shared<Node>(value);
        if (back == nullptr)
            front = back = newNode;
        else {
            newNode->prev = back;
            back->next = newNode;
            back = newNode;
        }
    }
    void pop_front() {
        if (front != nullptr) {
            front = front->next;
            if (front != nullptr)
                front->prev = nullptr;
            else
                back = nullptr;
        }
    }
    void pop_back() {
        if (back != nullptr) {
            back = back->prev;
            if (back != nullptr)
                back->next = nullptr;
            else
                front = nullptr;
        }
    }
};
 
int main() {
    Deque deque;
    deque.push_front(3);
    deque.pop_front();
    return 0;
}