// DNASeq.cpp
// Charles Conner
// 2450953
// chconner@chapman.edu
// CPSC 350-01
// Programming Assignment 4: Genetic Palindromes

#include "DNASeq.h"
#include <iostream>

DNASeq::DNASeq() {}

DNASeq::DNASeq(const std::string& sequence) {
    for (char nucleotide : sequence) {
        this->sequence.append(nucleotide);
    }
}

DNASeq::~DNASeq() {}

// Create a new DNASeq object that represents the complement of the sequence
DNASeq* DNASeq::complement() const {
    DNASeq* comp = new DNASeq();
    for (int i = 0; i < sequence.size(); ++i) {
        char complement = ' ';
        switch (sequence.get(i)) {
            case 'A': 
            complement = 'T'; 
            break;
            case 'T': 
            complement = 'A'; 
            break;
            case 'C': 
            complement = 'G'; 
            break;
            case 'G': 
            complement = 'C'; 
            break;
        }
        comp->sequence.append(complement);
    }
    return comp;
}

// Create a new DNASeq object for a substring of the sequence
DNASeq* DNASeq::substring(int start, int end) const {
    DNASeq* subSeq = new DNASeq();
    for (int i = start; i < end; ++i) {
        subSeq->sequence.append(sequence.get(i));
    }
    return subSeq;
}

// Check if the sequence is a genetic palindrome
bool DNASeq::isGeneticPalindrome() const {
    DNASeq* comp = complement();
    DblList<char>* reversedComp = comp->sequence.reverse();
    bool result = sequence.equals(*reversedComp);
    // Clean up for memory and next iteration
    delete comp;
    delete reversedComp;
    return result;
}

// Check if the sequence is valid
bool DNASeq::isValid() const {
    // Check if the sequence contains only valid nucleotides
    for (int i = 0; i < sequence.size(); ++i) {
        char nucleotide = sequence.get(i);
        if (nucleotide != 'A' && nucleotide != 'T' && nucleotide != 'C' && nucleotide != 'G') {
            return false;
        }
    }
    return true;
}

// Display the sequence as a string
void DNASeq::display() const {
    for (int i = 0; i < sequence.size(); ++i) {
        std::cout << sequence.get(i);
    }
}