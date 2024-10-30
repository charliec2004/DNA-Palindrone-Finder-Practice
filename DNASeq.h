// DNASeq.h
// Charles Conner
// 2450953
// chconner@chapman.edu
// CPSC 350-01
// Programming Assignment 4: Genetic Palindromes

#ifndef DNASEQ_H
#define DNASEQ_H

#include "DblList.h"
#include <string>

class DNASeq {
public:
    DNASeq();
    DNASeq(const std::string& sequence);
    ~DNASeq();

    DNASeq* complement() const;
    DNASeq* substring(int start, int end) const;
    bool isGeneticPalindrome() const;
    void display() const;
    bool isValid() const;
    int size() const { return sequence.size(); }

private:
    DblList<char> sequence;
};

#endif