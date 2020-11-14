//
// Created by eric on 2020-11-13.
//
#include "doctor.hpp"
#include "patient.hpp"
#include "hospital.hpp"

// implements constructor
doctor::doctor(std::string n) {
    name = n;
}

// implementation of treat method
void doctor::treat() {
    patient p = hospital::get_instance().getPatient();
    std::cout << this->name << " is treating " << p << std::endl;
}
