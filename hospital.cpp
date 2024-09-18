#include "hospital.h"
#include <iostream>

Hospital::Hospital(std::string Patient, std::string Doctor, std::string Speciality, std::string Date, std::string Time, std::string Stat)
    : patient(Patient), doctor(Doctor), speciality(Speciality), date(Date), time(Time), status(Stat)
{

}

void Hospital::Print() const
{
    std::cout << "Patient: " << patient << std::endl;
    std::cout << "Doctor " << speciality << ": " << doctor << std::endl;
    std::cout << "Date: " << date << std::endl;
    std::cout << "Time: " << time << std::endl;
    std::cout << "Status: " << status << std::endl;

    std::cout << std::endl;
}

void Hospital::addToArchiv()
{
    std::string record = "Patient: " + patient + ", Doctor: " + doctor + ", Date: " + date + ", Time: " + time + ", Status: " + status;
    archiv.push_back(record);
}

void Hospital::showArchiv() const
{
    std::cout << "Archived records:" << std::endl;
    for (size_t i = 0; i < archiv.size(); i++) {
        std::cout << i + 1 << ". " << archiv[i] << std::endl;
    }
}

void Hospital::updateStatus(const std::string& newStatus)
{
    if (status != newStatus) {
        status = newStatus;
        std::cout << "Status updated to: " << status << std::endl;
    }
}

Hospital::~Hospital()
{}

