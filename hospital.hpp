//
// Created by eric on 2020-11-13.
//
#ifndef HEAP_HOSPITAL_HPP
#define HEAP_HOSPITAL_HPP
#include "heap.hpp"

class hospital {
public:
    // gets the only instance of hospital
    static hospital& get_instance() {
        static hospital instance;
        return instance;
    };
private:
    // the heap that contains the patients
    heap patientHeap;
    // sets constructor to default
    hospital() = default;
public:
    // deletes copy constructor
    hospital(hospital const &) = delete;
    // deletes assignment operator
    void operator = (hospital const&) = delete;
    // adds patient to heap
    void addPatient(patient p);
    // gets the patient with the highest priority
    patient getPatient();
    // prints all patients from the heap
    void printPatient();
};


#endif //HEAP_HOSPITAL_HPP
