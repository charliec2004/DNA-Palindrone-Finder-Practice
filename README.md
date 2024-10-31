Name: Charlie Conner
Student ID: 2450953
Email: chconer@chapman.edu
Course: CPSC 350: Data Structures and Algorithms
Assignment: Programming Assignment 4: Genetic Palindromes

Source Files:
- main.cpp
- DNASeq.h
- DNASeq.cpp
- PalindromeFinder.h
- PalindromeFinder.cpp
- DblList.h
- ListNode.h

Program Instructions:
To compile:
g++ -o genetic_palindromes *.cpp

To run:
./genetic_palindromes input.txt

Known Issues:
- None

References:
- https://www.youtube.com/watch?v=-TkoO8Z07hI
    - For templates and syntax corrections.

- https://www.youtube.com/watch?v=EaHFhms_Shw&pp=ygUaaG93IHRvIGhhbmRsZSBmaWxlcyBpbiBjKys%3D
    - Referenced for understanding file handling in C++.

- https://www.youtube.com/watch?v=FynvrvLw3Rs&pp=ygUeQysrIFN0YW5kYXJkIEV4Y2VwdGlvbiBDbGFzc2Vz
    - Used to resolve syntax issues (bad memory on my part)

- https://www.geeksforgeeks.org/strings-in-cpp/
    - Used for refence on manipulating strings

- CHAT GPT 
    - Used for outlining project ("Give me an outline for this project")
    - Project Outline: Genetic Palindromes (outline below: NOT EXACT USED BEFORE CODING)

Classes and Functions
---------------------

1. Class: DNASeq
   Purpose: Represents a DNA sequence and provides methods to manipulate and analyze the sequence, including finding complements and determining palindromic structures.

   Functions:
     - DNASeq() - Default constructor.
     - DNASeq(const std::string& sequence) - Overloaded constructor that initializes a DNA sequence from a given string.
     - ~DNASeq() - Destructor.
     - void setSequence(const std::string& sequence) - Sets the DNA sequence.
     - std::string getSequence() const - Retrieves the DNA sequence.
     - DNASeq* complement() const - Returns a DNASeq object representing the complement of the current sequence.
     - DNASeq* substring(int start, int end) const - Returns a new DNASeq object that is a substring of the current sequence from index start to end.
     - bool isGeneticPalindrome() const - Checks if the DNA sequence is a genetic palindrome.
     - bool isValid() const - Checks if the sequence contains only valid nucleotide characters (A, C, T, G).
     - void display() const - Prints the DNA sequence.

---------------------

2. Class: PalindromeFinder
   Purpose: Determines whether a sequence is a genetic palindrome and identifies any palindromic substrings within DNA sequences.

   Functions:
     - PalindromeFinder() - Default constructor.
     - bool isPalindrome(const std::string& sequence) const - Checks if a given sequence is a palindrome.
     - void findLongestPalindrome(const std::string& sequence) - Finds and stores the longest palindromic substring within a given DNA sequence.
     - void printAllPalindromicSubstrings() - Prints all palindromic substrings found in a sequence, sorted from smallest to largest.

---------------------

3. Main Program (main.cpp)
   Purpose: Handles program execution by reading DNA sequences from a file, processing each sequence using DNASeq and PalindromeFinder, and printing the results to the console.

   Functions:
     - int main(int argc, char* argv[]) - The main function that takes a file name as a command-line argument, reads each DNA sequence line by line, processes it, and prints results.

---------------------

Summary
-------
Each DNA sequence is analyzed by DNASeq and checked for palindromic properties using PalindromeFinder. The main program controls file handling and output.

test test test