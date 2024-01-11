/**
 * @file MyClass.h
 * @brief Declaration of MyClass class.
 */

#ifndef MYCLASS_H
#define MYCLASS_H

/**
 * @class MyClass
 * @brief A simple C++ class example.
 */
class MyClass {
public:
    /**
     * @brief Default constructor.
     */
    MyClass();

    /**
     * @brief Parameterized constructor.
     * @param value An integer value to initialize the class with.
     */
    MyClass(int value);

    /**
     * @brief Destructor.
     */
    ~MyClass();

    /**
     * @brief Getter function to retrieve the value.
     * @return The current value.
     */
    int getValue() const;

    /**
     * @brief Setter function to set the value.
     * @param value The new value to set.
     */
    void setValue(int value);

    /**
     * @brief Function to perform a simple operation on the current value.
     * @param increment The value to increment the current value by.
     */
    void performOperation(int increment);

private:
    int value; /**< The current value stored in the class. */
};

#endif // MYCLASS_H
