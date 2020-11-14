#include <iostream>
#include "hospital.hpp"
#include "doctor.hpp"

int main() {
    doctor d("doctor");
    patient p("test", 1);
    patient p2("test2", 2);
    patient p3("test3", 3);
    patient p4("test4", 4);
    patient p5("test5", 5);
    hospital::get_instance().addPatient(p);
    hospital::get_instance().addPatient(p2);
    hospital::get_instance().addPatient(p3);
    hospital::get_instance().addPatient(p4);
    hospital::get_instance().addPatient(p5);

    d.treat();
    hospital::get_instance().printPatient();
    d.treat();
    hospital::get_instance().printPatient();
    d.treat();
    hospital::get_instance().printPatient();
    d.treat();
    hospital::get_instance().printPatient();
    d.treat();
    hospital::get_instance().printPatient();
    return 0;
}
