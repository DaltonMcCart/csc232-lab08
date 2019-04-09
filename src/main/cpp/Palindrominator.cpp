/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file    Palindrominator.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Dalton McCart <mccart.42@live.missouristate.edu>
 */

#include <stack>   // Provides access to std::stack<T> where T is the template parameter, e.g., char
#include <queue>
#include <sstream> // Provides access to std::stringstream which may be useful in the reverse helper operation
#include "Palindrominator.h"

Palindrominator::Palindrominator(bool append) : append_{append} {
    /* no-op */
}

bool Palindrominator::isPalindrome(const std::string &text) const {
    // Hint: See the pseudocode on page 398
    std::queue <char> palQueue;
    std::stack <char> palStack;
    int stringLength = text.length();

    for (int i = 0; i < stringLength; i++){
        palQueue.push(text[i]);
        palStack.push(text[i]);
    }

    while (!palQueue.empty()){
        if (palStack.top() == palQueue.front()){
            palStack.pop();
            palQueue.pop();
        }
        else {
            return false;
        }
    }

    return true;
}

std::string Palindrominator::makePalindrome(const std::string &text) const {
    // the contents of a string. Be sure to read up on std::reverse() found in the algorithm library before
    // attempting to emulate that functionality here.
    // See the header file doxygen comments for more details about the parameter and behavior of this method

    std::stack<char> reverseString;
    std::string newString = text;

    for (auto x : text){
        reverseString.push(x);
    }

    if (append_){  //append reverse

       while (!reverseString.empty()){
           newString += reverseString.top();
           reverseString.pop();

       }
    }

   else {   //prepend reverse

       newString = {};
        while (!reverseString.empty()){
            newString += + reverseString.top();
            reverseString.pop();
        }
        newString += text;


   }
    return newString;
}
