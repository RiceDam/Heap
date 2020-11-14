//
// Created by eric on 2020-11-13.
//
#include "heap.hpp"

// makes a heap out of the vector
void heap::heapify() {
    make_heap(patientVector.begin(), patientVector.end());
}

// constructor that sets the vector to v
heap::heap(std::vector<patient> v) {
    patientVector = v;
    heapify();
}

// adds a patient to the vector and makes the vector into a heap
void heap::push(patient p) {
    patientVector.push_back(p);
    heapify();
}

// removes the top element of the vector and makes the vector into a heap again
patient heap::pop() {
    patient top = patientVector.front();
    pop_heap(patientVector.begin(), patientVector.end());
    patientVector.pop_back();
    heapify();
    return top;
}

// gets the size of the vector
int heap::size() {
    return patientVector.size();
}

// checks if the vector is empty
bool heap::is_empty() {
    if (patientVector.empty()) {
        return true;
    }
    return false;
}

// clears the vector
void heap::clear() {
    patientVector.clear();
}


// prints out all the patients in the vector
std::ostream &operator<<(std::ostream &output, const heap &h) {
    for (int i = 0; i < h.getPatientVector().size(); i++) {
        output << h.getPatientVector()[i] << std::endl;
    }
    return output;
}

// gets the vector of patients
std::vector<patient> heap::getPatientVector() const{
    return patientVector;
}
