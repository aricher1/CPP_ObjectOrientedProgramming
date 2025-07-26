// TestProgram.cpp
// The purpose of this file is to test our program.
// CPP Certificate
// Author: Aidan Richer
// Date: July 26, 2025

#include <iostream>
#include "Stack.hpp"

using namespace AidanRicher::Containers;
using namespace std;

int main() {
    Stack<int, 3> intStack; //Create a Stack<int, size 3> array

    //Test Push() function by pushing elements onto the stack
    try {
        cout << "Pushing 2 onto the stack " << endl;
        intStack.Push(2);
        cout << "Pushing 5 onto the stack " << endl;
        intStack.Push(5);
        cout << "Pushing 7 onto the stack " << endl;
        intStack.Push(7);
        cout << "Pushing 9 onto the stack " << endl;
        intStack.Push(9); //Should throw StackFullException, index out of reach
    } catch (const StackFullException& e) {
        cout << "Error pushing: " << e.GetMessage() << endl;
    }

    //Current array looks like [2, 5, 7]

    try {
        cout << "Popped: " << intStack.Pop() << endl;
        cout << "Popped: " << intStack.Pop() << endl;
        cout << "Popped: " << intStack.Pop() << endl;
        cout << "Popped: " << intStack.Pop() << endl; //Should throw StackEmptyExcception, index out of reach
    } catch (const StackEmptyException& e) {
        cout << "Error popping: " << e.GetMessage() << endl;
    }

    //Popped array looks like [7, 5, 2]

    return 0;
}