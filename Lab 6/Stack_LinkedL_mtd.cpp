#include <iostream>
#include <chrono>

using namespace std;

// Node class to create nodes of the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// Stack class to implement stack using linked list
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == NULL;
    }

    // Push element to the top of the stack
    void push(int data) {
        Node* node = new Node(data);
        node->next = top;
        top = node;
    }

    // Remove and return element from the top of the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        Node* temp = top;
        int data = temp->data;
        top = top->next;
        delete temp;
        return data;
    }

    // Return element at the top of the stack without removing it
    int stackTop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }

    // Display elements of the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Main function to test the Stack class
int main() {
    auto startTime2 = chrono::high_resolution_clock::now();
    Stack s;
       s.push(85);
    s.push(85);
    s.push(14);
    s.push(8);
    s.push(11);
    s.push(15);
    s.push(23);
    s.push(6);
    s.push(18);
    s.push(20);
    s.push(17);
    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.push(11);
    s.push(15);
    s.push(20);
    s.push(17);
    s.display();
    s.pop();
    s.pop();
    s.push(1);
    s.display();
    s.push(18);
    s.push(20);
    s.push(17);
    s.pop();
    s.display();
    s.push(4);
    s.push(3);
    s.display();
    s.pop();
    s.pop();
    s.push(1);
    s.display();
    s.push(85);
    s.push(14);
    s.push(8);
    s.push(11);
    s.push(15);
    s.push(23);
    s.push(6);
    s.push(18);
    s.push(20);
    s.push(17);
    s.display();
    s.pop();
    s.pop();
    s.display();
    s.push(4);
    s.push(3);
    s.display();
    s.pop();
    s.pop();
    s.push(1);
    s.display();
    s.push(85);
    s.push(14);
    s.push(8);
    s.push(14);
    s.push(8);
    s.push(11);
    s.push(15);
    s.push(23);
    s.push(6);
    s.push(18);
    s.push(20);
    s.push(17);
    s.display();
    s.pop();
    s.pop();
    s.display();
    s.push(4);
    s.push(3);
    s.display();
    s.pop();
    s.pop();
    s.push(1);
    s.display();
    s.push(85);
    s.push(14);
       s.push(20);
    s.push(17);
    s.pop();
    s.display();
    s.push(4);
    s.push(3);
    s.display();
    s.pop();
    s.pop();
    s.push(1);
    s.display();
    s.push(85);
    s.push(14);
    s.push(8);
    s.push(11);
    s.push(15);
    s.push(23);
    s.push(6);
    s.push(18);
    s.push(20);
    s.push(17);
    s.display();
    s.pop();
    s.pop();
    s.display();
    s.push(4);
    s.push(3);
    s.display();
    s.pop();
    s.pop();
    s.push(1);
    s.display();
    s.push(85);
    s.push(14);
    s.push(8);
    s.push(14);
    s.push(8);
    s.push(11);
    s.push(15);
    s.push(23);
    s.push(6);
    s.push(18);
    s.push(20);
    s.push(17);
    s.display();
    s.pop();
    s.pop();
    s.display();
    s.push(4);
    s.push(3);
    s.display();
    s.pop();
    s.pop();
    s.push(1);
    s.display();
    s.push(85);
    s.push(14);

    auto endTime2 = chrono::high_resolution_clock:: now();
    auto duration2 = chrono::duration_cast<chrono::nanoseconds>(endTime2 - startTime2).count();
   
    cout << "Time taken for stack implemented using linked list is: " <<duration2 <<endl;
    cout << "Top element: " << s.stackTop() << endl; // Output: Top element
    s.display(); 
    return 0;
}
