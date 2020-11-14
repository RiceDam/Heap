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
    std::vector<patient> patientVector;
    void heapify();
public:
    heap(std::vector<patient> v);
    void push(patient p);
    patient pop();
    int size();
    bool is_empty();
    void clear();
    friend std::ostream &operator <<(std::ostream &output, const heap &h);
    heap() = default;

    std::vector<patient> getPatientVector() const;
};


#endif //HEAP_HEAP_HPP
