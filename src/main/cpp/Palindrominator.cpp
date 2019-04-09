/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file    Palindrominator.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * // TODO: Add your name here
 */

#include <stack>   // Provides access to std::stack<T> where T is the template parameter, e.g., char
#include <sstream> // Provides access to std::stringstream which may be useful in the reverse helper operation
#include "Palindrominator.h"

Palindrominator::Palindrominator(bool append) : append_{append} {
    /* no-op */
}

bool Palindrominator::isPalindrome(const std::string &text) const {
    // TODO: Implement me; you must use a stack and a queue
    // Hint: See the pseudocode on page 398
    return false;
}

std::string Palindrominator::makePalindrome(const std::string &text) const {
    // TODO: Implement me; hint... See the PalindrominatroUnitTest::reverse() method for an easy way to reverse
    // the contents of a string. Be sure to read up on std::reverse() found in the algorithm library before
    // attempting to emulate that functionality here.
    // See the header file doxygen comments for more details about the parameter and behavior of this method
    return std::string{};
}
