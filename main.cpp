// main.cpp
// Charles Conner
// 2450953
// chconner@chapman.edu
// CPSC 350-01
// Programming Assignment 4: Genetic Palindromes

#include <iostream>
#include <fstream>
#include "DNASeq.h"
#include "PalindromeFinder.h"

int main(int argc, char** argv) {
    // Check for correct number of arguments
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }

    // Open the file successfully
    std::ifstream infile(argv[1]);
    if (!infile) {
        std::cerr << "Error opening file\n";
        return 1;
    }

    // Read the file line by line
    // For each line, create a DNASeq object and find palindromes
    std::string line;
    while (std::getline(infile, line) && line != "END") {
        DNASeq dna(line);
        dna.display();
        std::cout << " - ";
        PalindromeFinder::findPalindromes(dna);
    }

    return 0; // :)
}