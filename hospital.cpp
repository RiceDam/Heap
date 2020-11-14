//
// Created by eric on 2020-11-13.
//
#include "hospital.hpp"

// adds patient to the heap by pushing patient into the heap vector
void hospital::addPatient(patient p) {
    patientHeap.push(p);
}

// gets the highest priority patient that is in the heap vector
patient hospital::getPatient() {
    return patientHeap.pop();
}

// prints all patients from the only instance of hospital
void hospital::printPatient() {
    std::cout << hospital::get_instance().patientHeap << std::endl;
}
