// PalindromeFinder.cpp
// Charles Conner
// 2450953
// chconner@chapman.edu
// CPSC 350-01
// Programming Assignment 4: Genetic Palindromes

#include "PalindromeFinder.h"
#include <iostream>

void PalindromeFinder::findPalindromes(const DNASeq& seq) {
    // Display the sequence
    seq.display();
    std::cout << " - ";

    // Check if the sequence is valid
    if (!seq.isValid()) {
        std::cout << "INVALID\n";
        return;
    }

    // Check if the full sequence is a genetic palindrome
    bool isMainPalindrome = seq.isGeneticPalindrome();
    std::cout << (isMainPalindrome ? "Genetic Palindrome\n" : "Not a Genetic Palindrome\n");

    // Only look for palindromic substrings if the full sequence is a genetic palindrome
    if (isMainPalindrome) {
        int len = seq.size();
        bool foundSubPalindrome = false;

        // Iterate through all possible substring lengths > 4 and < length of the sequence
        for (int subLength = 5; subLength < len; ++subLength) {
            for (int i = 0; i <= len - subLength; ++i) {
                // Extract the substring and check if it's a genetic palindrome
                DNASeq* substring = seq.substring(i, i + subLength);
                if (substring->isGeneticPalindrome()) {
                    std::cout << "\tSubstring ";
                    substring->display();
                    std::cout << " - Genetic Palindrome\n";
                    foundSubPalindrome = true;
                }
                delete substring;
            }
        }

        // If no palindromic substrings were found, print a message
        if (!foundSubPalindrome) {
            std::cout << "\tNo genetic palindromic substrings found\n";
        }
    }
}