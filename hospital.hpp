//
// Created by eric on 2020-11-13.
//
#ifndef HEAP_HOSPITAL_HPP
#define HEAP_HOSPITAL_HPP
#include "heap.hpp"

class hospital {
private:
    heap patientHeap;
public:
    void addPatient(patient p);
    patient getPatient();
    void printPatient();
};


#endif //HEAP_HOSPITAL_HPP
