// StackException.hpp
// Header file is for translating array exception to a stack exemption.
// Base class and derived classes are implemented in header file for simplicity.
// CPP Certificate
// Author: Aidan Richer
// Date: July 26, 2025

#ifndef StackException_HPP
#define StackException_HPP

#include <string>

namespace AidanRicher {
namespace Containers {

class StackException { //Base class
    public: 
        virtual std::string GetMessage() const = 0; //Pure virtual method
        virtual ~StackException() {} //Base class virtual destructor, avoid memory leaks
};

class StackFullException : public StackException { //StackFull derived class
    public:
        std::string GetMessage() const override {
            return "Stack is full. Cannot push element on stack.";
        }
};

class StackEmptyException : public StackException { //StackEmpty derived class
    public:
        std::string GetMessage() const override {
            return "Stack is empty. Cannot pop element on stack.";
        }
};

} //Namespace Containers
} //Namespace AidanRicher

#endif //StackExceptiion_HPP