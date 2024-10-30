// PalindromeFinder.h
// Charles Conner
// 2450953
// chconner@chapman.edu
// CPSC 350-01
// Programming Assignment 4: Genetic Palindromes

#ifndef PALINDROME_FINDER_H
#define PALINDROME_FINDER_H

#include "DNASeq.h"

class PalindromeFinder {
public:
    static void findPalindromes(const DNASeq& seq);
};

#endif