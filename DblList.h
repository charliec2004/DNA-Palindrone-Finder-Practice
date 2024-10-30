// DblList.h
// Charles Conner
// 2450953
// chconner@chapman.edu
// CPSC 350-01
// Programming Assignment 4: Genetic Palindromes

#ifndef DBLLIST_H
#define DBLLIST_H

#include "ListNode.h"
#include <iostream>

template <typename T>
class DblList {
public:
    DblList();
    ~DblList();
    
    void append(T value);
    void clear();
    DblList<T>* reverse() const;
    bool equals(const DblList<T>& other) const;
    T get(int index) const;
    int size() const;

private:
    ListNode<T>* head;
    ListNode<T>* tail;
    int length;
};

template <typename T>
DblList<T>::DblList() : head(nullptr), tail(nullptr), length(0) {}

template <typename T>
DblList<T>::~DblList() { clear(); }

template <typename T>
void DblList<T>::append(T value) {
    ListNode<T>* node = new ListNode<T>(value);
    if (!head) {
        head = tail = node;
    } else {
        tail->next = node;
        node->prev = tail;
        tail = node;
    }
    length++;
}

template <typename T>
void DblList<T>::clear() {
    while (head) {
        ListNode<T>* temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
    length = 0;
}

template <typename T>
DblList<T>* DblList<T>::reverse() const {
    DblList<T>* reversedList = new DblList<T>();
    ListNode<T>* current = tail;
    while (current) {
        reversedList->append(current->value);
        current = current->prev;
    }
    return reversedList;
}

template <typename T>
bool DblList<T>::equals(const DblList<T>& other) const {
    if (length != other.size()) return false;
    ListNode<T>* curr1 = head;
    ListNode<T>* curr2 = other.head;
    while (curr1 && curr2) {
        if (curr1->value != curr2->value) return false;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return true;
}

template <typename T>
T DblList<T>::get(int index) const {
    ListNode<T>* current = head;
    for (int i = 0; i < index && current; ++i) {
        current = current->next;
    }
    return current ? current->value : T();
}

template <typename T>
int DblList<T>::size() const {
    return length;
}

#endif