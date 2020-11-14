//
// Created by eric on 2020-11-13.
//
#ifndef HEAP_HOSPITAL_HPP
#define HEAP_HOSPITAL_HPP
#include "heap.hpp"

class hospital {
public:
    static hospital& get_instance() {
        static hospital instance;
        return instance;
    };
private:
    heap patientHeap;
    hospital() = default;
public:
    hospital(hospital const &) = delete;
    void operator = (hospital const&) = delete;
    void addPatient(patient p);
    patient getPatient();
    void printPatient();
};


#endif //HEAP_HOSPITAL_HPP
