#include <iostream>
#define MAX_SIZE 100 // Maximum size of the stack
#include <chrono>
using namespace std;

class Stack {
  private:
    int arr[MAX_SIZE]; // Array to store elements
    int top; // Index of the topmost element

  public:
    Stack() { // Constructor to initialize the stack
        top = -1;
    }

    bool isEmpty() {
        return top == -1; // Returns true if stack is empty
    }

    bool isFull() {
        return top == MAX_SIZE - 1; // Returns true if stack is full
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value; // Increment top and add value to stack
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        top--; // Decrement top to remove topmost element
    }

    int stackTop() {
        if (isEmpty()) {
            cout << "Stack is empty!" <<endl;
            return -1;
        }
        return arr[top]; // Returns topmost element
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements are: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    auto startTime1 = chrono::high_resolution_clock::now();
    Stack s;
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
    auto endTime1 = chrono::high_resolution_clock:: now();
    auto duration1 = chrono::duration_cast<chrono::nanoseconds>(endTime1 - startTime1).count();
   
    cout << "Time taken for stack implemented using array is: " <<duration1 <<endl;
     cout << "Top element is " << s.stackTop();
    return 0;
}
