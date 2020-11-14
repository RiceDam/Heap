//
// Created by eric on 2020-11-13.
//
#ifndef HEAP_HEAP_HPP
#define HEAP_HEAP_HPP
#include <vector>
#include <algorithm>
#include <iostream>
#include "patient.hpp"

class heap {
private:
    // a vector that holds patients
    std::vector<patient> patientVector;
    // method to make the vector into a heap
    void heapify();
public:
    // constructor that sets the patient vector to v
    heap(std::vector<patient> v);
    // method to push a patient into the vector
    void push(patient p);
    // method to pop a patient from the heap
    patient pop();
    // method to get the size of the vector
    int size();
    // method to check if vector is empty
    bool is_empty();
    // clears the vector
    void clear();
    // overloads << operator
    friend std::ostream &operator <<(std::ostream &output, const heap &h);
    // sets heap constructor to default
    heap() = default;
    // gets the patient vector
    std::vector<patient> getPatientVector() const;
};


#endif //HEAP_HEAP_HPP
