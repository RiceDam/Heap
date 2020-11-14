//
// Created by eric on 2020-11-13.
//
#include "patient.hpp"

const std::string &patient::getName() const {
    return name;
}

void patient::setName(const std::string &name) {
    patient::name = name;
}

int patient::getPriority() const {
    return priority;
}

void patient::setPriority(int priority) {
    patient::priority = priority;
}

std::ostream &operator<<(std::ostream &os, const patient &patient) {
    os << "name: " << patient.name << " priority: " << patient.priority;
    return os;
}

bool operator<(const patient &a, const patient &b) {
    return a.getPriority() < b.getPriority();
}

patient::patient(std::string n, int p) {
    name = n;
    priority = p;
}
