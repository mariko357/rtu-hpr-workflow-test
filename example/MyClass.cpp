/**
 * @file MyClass.cpp
 * @brief Implementation of MyClass class.
 */

#include "MyClass.h"

MyClass::MyClass() : value(0) {}

MyClass::MyClass(int value) : value(value) {}

MyClass::~MyClass() {}

int MyClass::getValue() const {
    return value;
}

void MyClass::setValue(int value) {
    this->value = value;
}

void MyClass::performOperation(int increment) {
    value += increment;
}
