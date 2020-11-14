//
// Created by eric on 2020-11-13.
//
#ifndef HEAP_HEAP_HPP
#define HEAP_HEAP_HPP
#include <vector>
#include <algorithm>
#include <iostream>
#include "patient.hpp"

using namespace std;

class heap {
private:
    vector<patient> patientVector;
    void heapify();
public:
    heap(vector<patient> v);
    void push(patient p);
    patient pop();
    int size();
    bool is_empty();
    void clear();
    friend ostream &operator <<(ostream &output, const heap &h);

    vector<patient> getPatientVector() const;
};


#endif //HEAP_HEAP_HPP
