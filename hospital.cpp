//
// Created by eric on 2020-11-13.
//
#include "hospital.hpp"

void hospital::addPatient(patient p) {
    patientHeap.push(p);
}

patient hospital::getPatient() {
    return patientHeap.pop();
}

void hospital::printPatient() {
    std::cout << hospital::get_instance().patientHeap << std::endl;
}
