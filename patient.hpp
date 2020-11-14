//
// Created by eric on 2020-11-13.
//
#ifndef HEAP_PATIENT_HPP
#define HEAP_PATIENT_HPP
#include <string>
#include <ostream>

class patient {
private:
    // patient name
    std::string name;
    // patient priority
    int priority;
public:
    // constructor that sets the name to n and priority to p
    patient(std::string n, int p);
    // gets the name of the patient
    const std::string &getName() const;
    // sets the name of the patient
    void setName(const std::string &name);
    // gets the priority of the patient
    int getPriority() const;
    // sets the priority of the patient
    void setPriority(int priority);
    // overloads the << operator
    friend std::ostream &operator<<(std::ostream &os, const patient &patient);
    // overloads the < operator
    friend bool operator < (const patient& a, const patient& b);
};


#endif //HEAP_PATIENT_HPP
