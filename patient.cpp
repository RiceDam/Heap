//
// Created by eric on 2020-11-13.
//
#include "patient.hpp"

// gets the name of the patient
const std::string &patient::getName() const {
    return name;
}

// sets the name of the patient
void patient::setName(const std::string &name) {
    patient::name = name;
}

// gets the priority of the patient
int patient::getPriority() const {
    return priority;
}

// sets the priority of the patient
void patient::setPriority(int priority) {
    patient::priority = priority;
}

// prints the name and priority of the patient
std::ostream &operator<<(std::ostream &os, const patient &patient) {
    os << "name: " << patient.name << " priority: " << patient.priority;
    return os;
}

// checks if a patient's priority is larger than another
bool operator<(const patient &a, const patient &b) {
    return a.getPriority() < b.getPriority();
}

// constructor that initializes the name and priority to n and p
patient::patient(std::string n, int p) {
    name = n;
    priority = p;
}
