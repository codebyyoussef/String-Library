# StringLib

StringLib is a library for string manipulation. It offers a set of features to simplify common string operations, It is simple to use, so I hope you find it useful to you.

## Features:
* Calculate the number of words in a string.
* Convert strings to uppercase, lowercase, or invert letter cases.
* Extract and print the first letter of each word.
* Capitalize or decapitalize the first letter of each word.
* Reverse the order of words in a string.
* Count vowels, or specific characters (case-sensitive or case-insensitive).
* Identify and print vowels in a string.
* Print words in a string.
* Trim whitespace from the left, right, or both sides of a string.
* Split a string into words using custom delimiters.
* Joining Strings: Merge an array or vector of strings with a custom delimiter.
* Replace specific substrings in a string (with or without case sensitivity).
* Remove punctuation characters from strings.
* Check if a string has valid spacing.
 
## Usage:
Here's an example of how to use the StringLib class:

    #include "StringLib.h" 
    
    int main() 
    {
        StringLib str("Hello world");

        // Count words
        cout << "Word count: " << str.countWords() << endl; // 2
        
        // Convert to uppercase
        str.convertToUppercase();
        cout << "Uppercase: " << str.getValue() << endl; // HELLO WORLD
        
    
        // Split the string by space
        vector<string> words = str.splitString(" ");
        for (const auto& word : words) {
            cout << word << endl;
    
        return 0;
    }
    
## Installation
To use the StringLib class in your C++ project, simply copy the StringLib.h header file into your project directory and include it in your source files:

For more detailed information on all available methods, please refer to the class definition in the StringLib.h file.
