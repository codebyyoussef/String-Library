# String-Library
String Library is a custom C++ class designed to simplify string manipulation and text processing. Whether you're working with basic string operations or advanced text formatting, this library provides a wide range of tools to handle strings efficiently and effectively.

## Key Features:

* **Basic String Operations:**
  * Get and set string values.
  * Calculate string length.
  * Split and join strings.
  
* **Text Analysis:**
  * Count words, vowels, capital letters, small letters, and specific characters.
  * Identify and print vowels in a string.

* **Case Conversion:**
  * Convert strings to uppercase or lowercase.
  * Capitalize or lowercase the first letter of each word.
  * Invert the case of all letters.

* **Text Cleaning:**
  * Trim whitespace from the left, right, or both sides.
  * Remove punctuation from a string.

* **Advanced String Tools:**
  * Reverse the words in a string.
  * Replace substrings with case-sensitive and case-insensitive options.
  * Print the first letter of each word.

* **Helper Methods:**
  * Check if a character is a vowel.
  * Enumerations for counting specific types of letters.

## Installation
To use the StringLib class in your C++ project, simply copy the StringLib.h header file into your project directory and include it in your source files:

## Usage
Here's an example of how to use the String class:

    #include "StringLib.h" 
    
    int main() 
    {
        StringLib str("Hello world, welcome to C++ programming!");
        
        // Convert to uppercase
        str.convertToUppercase();
        cout << "Uppercase: " << str.getValue() << endl;
        
        // Count words
        cout << "Word count: " << str.countWords() << endl;
        
        // Count vowels
        cout << "Vowel count: " << str.countVowels() << endl;
    
        // Split the string by space
        vector<string> words = str.splitString(" ");
        for (const auto& word : words) {
            cout << word << endl;
    
        return 0;
    }
    
## Methods Overview
* StringLib(): Default constructor that initializes the string to an empty value.
* StringLib(string value): Constructor that initializes the string with a specified value.
* strLength(): Returns the length of the string.
* countWords(): Counts the number of words in the string.
* convertToUppercase(): Converts the entire string to uppercase.
* convertToLowercase(): Converts the entire string to lowercase.
* invertAllLettersCase(): Inverts the case of all letters in the string.
* replaceSubstring(): Replaces occurrences of a substring with another string.
* removePunctuations(): Removes all punctuation from the string.

For more detailed information on all available methods, please refer to the class definition in the StringLib.h file.
