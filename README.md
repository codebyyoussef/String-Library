# StringLib

StringLib is a versatile and easy-to-use C++ library for string manipulation. It offers a rich set of features to simplify common string operations, making it ideal for developers who work with text processing, formatting, and analysis in their projects.

## Features:

* **String Length & Word Count**: Calculate the length of a string or count the number of words efficiently.
* **Case Manipulation**: Convert strings to uppercase, lowercase, or invert letter cases.
* **Word Operations**:
   * Extract and print the first letter of each word.
   * Capitalize or decapitalize the first letter of each word.
   * Reverse the order of words in a string.
* **Character Analysis**:
   * Count vowels, or specific characters (case-sensitive or case-insensitive).
   * Identify and print vowels in a string.
* **Trimming & Splitting**:
   * Trim whitespace from the left, right, or both sides of a string.
   * Split a string into words or tokens using custom delimiters.
 * **Joining Strings**: Merge an array or vector of strings with a custom delimiter.
* **Substring Replacement**: Replace specific substrings in a string (with or without case sensitivity).
* **Remove Punctuation**: Strip punctuation characters from strings for clean processing.
* **Advanced Utilities**:
   * Count capital and small letters.
   * Replace substrings and handle match cases.
   * Remove or replace words.
 
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
    
## Installation
To use the StringLib class in your C++ project, simply copy the StringLib.h header file into your project directory and include it in your source files:

For more detailed information on all available methods, please refer to the class definition in the StringLib.h file.
