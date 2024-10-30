// ListNode.h
// Charles Conner
// 2450953
// chconner@chapman.edu
// CPSC 350-01
// Programming Assignment 4: Genetic Palindromes

#ifndef LISTNODE_H
#define LISTNODE_H

template <typename T>
struct ListNode {
    T value;
    ListNode* next;
    ListNode* prev;
    ListNode(T val) : value(val), next(nullptr), prev(nullptr) {}
};

#endif