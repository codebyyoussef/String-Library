#pragma once
#include <iostream>
#include <vector>

using namespace std;

class StringLib
{
private:
	string _value;

public:
	StringLib()
	{
		_value = "";
	}
	StringLib(string value)
	{
		_value = value;
	}

	void setValue(string value)
	{
		_value = value;
	}
	string getValue()
	{
		return _value;
	}
	__declspec(property(get = getValue, put = setValue)) string value;

	static short strLength(string str)
	{
		return str.length();
	}
	short strLength()
	{
		return _value.length();
	}

	static short countWords(string str) // "Hello world"
	{
		short countWords = 0;
		string word = "";
		string delimiter = " ";
		short pos = 0;

		while ((pos = str.find(delimiter)) != string::npos)
		{
			word = str.substr(0, pos);
			if (word != "")
			{
				countWords++;
			}
			str.erase(0, pos + delimiter.length());
		}

		if (str != "")
			countWords++;

		return countWords;
	}
	short countWords()
	{
		return countWords(_value);
	}

	static void printFirstLetterOfEachWord(string str)
	{
		bool isFirstLetter = true;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ' && isFirstLetter)
			{
				cout << str[i] << "\n";
			}
			isFirstLetter = str[i] == ' ' ? true : false;
		}
	}
	void printFirstLetterOfEachWord()
	{
		return printFirstLetterOfEachWord(_value);
	}

	static string upperFirstLetterOfEachWord(string str)
	{
		if (str[0] != ' ' && islower(str[0]))
		{
			str[0] = toupper(str[0]);
		}

		for (int i = 1; i < str.length(); i++)
		{
			if (islower(str[i]) && str[i - 1] == ' ')
			{
				str[i] = toupper(str[i]);
			}
		}
		return str;
	}
	void upperFirstLetterOfEachWord()
	{
		_value = upperFirstLetterOfEachWord(_value);
	}

	static string lowerFirstLetterOfEachWord(string str)
	{
		if (str[0] != ' ' && isupper(str[0]))
		{
			str[0] = tolower(str[0]);
		}

		for (int i = 1; i < str.length(); i++)
		{
			if (isupper(str[i]) && str[i - 1] == ' ')
			{
				str[i] = tolower(str[i]);
			}
		}
		return str;
	}
	void lowerFirstLetterOfEachWord()
	{
		_value = lowerFirstLetterOfEachWord(_value);
	}

	static string convertToUppercase(const string& str)
	{
		string result = str;
		for (char& ch : result)
		{
			ch = toupper(ch);
		}
		return result;
	}
	void convertToUppercase()
	{
		_value =  convertToUppercase(_value);
	}

	static string convertToLowercase(const string& str)
	{
		string result = str;
		for (char& ch : result)
		{
			ch = tolower(ch);
		}
		return result;
	}
	void convertToLowercase()
	{
		_value = convertToLowercase(_value);
	}

	static char invertLetterCase(char ch)
	{
		return islower(ch) ? toupper(ch) : tolower(ch);
	}
	static string invertAllLettersCase(string str)
	{
		for (char& ch : str)
		{
			ch = invertLetterCase(ch);
		}
		return str;
	}
	void invertAllLettersCase()
	{
		_value = invertAllLettersCase(_value);
	}

	enum enLettersType { smallLetters = 0, capitalLetters = 1, all = 2 };
	static short countLetters(string str, enLettersType whatToCount = all)
	{
		if (whatToCount == all)
		{
			return str.length();
		}

		short result = 0;
		for (char& ch : str)
		{
			if (whatToCount == smallLetters && islower(ch))
			{
				result++;
			}
			else if (whatToCount == capitalLetters && isupper(ch))
			{
				result++;
			}
		}
		return result;
	}

	static short countCapitalLetters(string str)
	{
		short result = 0;
		for (char& ch : str)
		{
			if (isupper(ch))
			{
				result++;
			}
		}
		return result;
	}
	short countCapitalLetters()
	{
		return countCapitalLetters(_value);
	}

	static short countSmallLetters(string str)
	{
		short result = 0;
		for (char& ch : str)
		{
			if (islower(ch))
			{
				result++;
			}
		}
		return result;
	}
	short countSmallLetters()
	{
		return countSmallLetters(_value);
	}

	static short countSpecificCharacter(string str, char targetChar, bool matchCase = true)
	{
		short result = 0;
		for (char& ch : str)
		{
			if (matchCase)
			{
				if (ch == targetChar)
					result++;
			}
			else
			{
				if (tolower(ch) == tolower(targetChar))
					result++;
			}
		}
		return result;
	}
	short countSpecificCharacter(char targetChar, bool matchCase = true)
	{
		return countSpecificCharacter(_value, targetChar, matchCase);
	}

	static bool isVowel(char ch)
	{
		ch = tolower(ch);
		return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
	}

	static short countVowels(string str)
	{
		short result = 0;
		for (const char& ch : str)
		{
			if (isVowel(ch))
				result++;
		}
		return result;
	}
	short countVowels()
	{
		return countVowels(_value);
	}

	static void printVowels(string str)
	{
		cout << "\nVowels in string are: ";
		for (const char& ch : str)
		{
			if (isVowel(ch))
				cout << ch << " ";
		}
	}
	void printVowels()
	{
		printVowels(_value);
	}

	static void printWords(string str)
	{
		string word = ""; 
		string delimiter = " ";
		short pos = 0; 

		while ((pos = str.find(delimiter)) != string::npos)
		{
			word = str.substr(0, pos);
			if (word != "")
			{
				cout << word << "\n";
			}
			str.erase(0, pos + delimiter.length());
		}

		if (str != "")
			cout << str << "\n";
	}

	void printWords()
	{
		printWords(_value);
	}

	static vector<string> splitString(string str, string delimiter)
	{
		vector<string> vWordTokens;
		string word = "";
		short pos = 0;

		while ((pos = str.find(delimiter)) != string::npos)
		{
			word = str.substr(0, pos);
			if (word != "")
			{
				vWordTokens.push_back(word);
			}
			str.erase(0, pos + delimiter.length());
		}

		if (str != "")
			vWordTokens.push_back(str);

		return vWordTokens;
	}
	vector<string> splitString(string delimiter)
	{
		return splitString(_value, delimiter);
	}

	static string trimLeft(string str)
	{
		for (short i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ')
			{
				return str.substr(i); // it takes the substring from index i to the end of the string by default.
			}
		}
		return "";
	}
	void trimLeft()
	{
		_value = trimLeft(_value);
	}

	static string trimRight(string str)
	{
		for (short i = str.length() - 1; i >= 0; i--)
		{
			if (str[i] != ' ')
			{
				return str.substr(0, i + 1);
			}
		}
		return "";
	}
	void trimRight()
	{
		_value = trimRight(_value);
	}

	static string trim(string str)
	{
		return trimLeft(trimRight(str));
	}
	void trim()
	{
		_value = trimLeft(trimRight(_value));
	}

	static string joinString(vector<string> vec, string delimiter = " ")
	{
		string result = "";
		for (short i = 0; i < vec.size(); i++)
		{
			result += vec[i];
			if (i < vec.size() - 1)
			{
				result += delimiter;
			}
		}
		return result;
	}
	static string joinString(string arr[], short size, string delimiter = " ")
	{
		string result = "";
		for (short i = 0; i < size; i++)
		{
			result += arr[i];
			if (i < size - 1)
			{
				result += delimiter;
			}
		}
		return result;
	}

	static string reverseWordsInString(string str)
	{
		vector<string> vWordTokens;
		string reversedStr = "";

		vWordTokens = splitString(str, " ");

		for (short i = vWordTokens.size() - 1; i >= 0; i--)
		{
			reversedStr += vWordTokens[i] + " ";
		}
		reversedStr.pop_back();

		return reversedStr;
	}
	void reverseWordsInString()
	{
		_value = reverseWordsInString(_value);
	}

	static string replaceSubstring(string str, string stringToReplace, string replaceTo)
	{
		short pos = str.find(stringToReplace);
		while (pos != string::npos)
		{
			str = str.replace(pos, stringToReplace.length(), replaceTo);
			pos = str.find(stringToReplace); // find next 
		}
		return str;
	}
	string replaceSubstring(string stringToReplace, string replaceTo)
	{
		return replaceSubstring(_value, stringToReplace, replaceTo);
	}

	static string replaceSubstring(string str, string stringToReplace, string replaceTo, bool matchCase)
	{
		vector<string> vStr = splitString(str, " ");

		for (string& subStr : vStr)
		{
			if (matchCase)
			{
				if (subStr == stringToReplace)
				{
					subStr = replaceTo;
				}
			}
			else
			{
				if (convertToLowercase(subStr) == convertToLowercase(stringToReplace))
				{
					subStr = replaceTo;
				}
			}
		}

		return joinString(vStr, " ");
	}
	void replaceSubstring(string stringToReplace, string replaceTo, bool matchCase)
	{
		_value = replaceSubstring(_value, stringToReplace, replaceTo, matchCase);
	}

	static string removePunctuation(string str)
	{
		string noPunctuationString = "";
		for (char& ch : str)
		{
			if (!ispunct(ch))
			{
				noPunctuationString += ch;
			}
		}
		return noPunctuationString;
	}
	void removePunctuations()
	{
		_value = removePunctuation(_value);
	}
};

