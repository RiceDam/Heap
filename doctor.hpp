//
// Created by eric on 2020-11-13.
//
#ifndef HEAP_DOCTOR_HPP
#define HEAP_DOCTOR_HPP


#include <string>

class doctor {
private:
    // name of the doctor
    std::string name;
public:
    // doctor constructor that sets the name to string n
    doctor(std::string n);
    // method to treat a patient in the hospital
    void treat();
};


#endif //HEAP_DOCTOR_HPP
