//
// Created by eric on 2020-11-13.
//
#ifndef HEAP_PATIENT_HPP
#define HEAP_PATIENT_HPP
#include <string>
#include <ostream>

class patient {
private:
    std::string name;
    int priority;
public:
    patient(std::string n, int p);
    const std::string &getName() const;
    void setName(const std::string &name);
    int getPriority() const;
    void setPriority(int priority);

    friend std::ostream &operator<<(std::ostream &os, const patient &patient);
    friend bool operator < (const patient& a, const patient& b);
};


#endif //HEAP_PATIENT_HPP
