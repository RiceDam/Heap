//
// Created by eric on 2020-11-13.
//
#include "heap.hpp"

void heap::heapify() {
    make_heap(patientVector.begin(), patientVector.end());
}

heap::heap(std::vector<patient> v) {
    patientVector = v;
    heapify();
}

void heap::push(patient p) {
    patientVector.push_back(p);
    heapify();
}

patient heap::pop() {
    patient top = patientVector.front();
    pop_heap(patientVector.begin(), patientVector.end());
    patientVector.pop_back();
    heapify();
    return top;
}

int heap::size() {
    return patientVector.size();
}

bool heap::is_empty() {
    if (patientVector.empty()) {
        return true;
    }
    return false;
}

void heap::clear() {
    patientVector.clear();
}



std::ostream &operator<<(std::ostream &output, const heap &h) {
    for (int i = 0; i < h.getPatientVector().size(); i++) {
        output << h.getPatientVector()[i] << std::endl;
    }
    return output;
}

std::vector<patient> heap::getPatientVector() const{
    return patientVector;
}
