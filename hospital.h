#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <string>
#include <vector>

class Hospital
{
private:
    std::string patient;
    std::string doctor;
    std::string speciality;
    std::string date;
    std::string time;
    std::string status;
    std::vector<std::string> archiv;

public:
    Hospital(std::string Patient, std::string Doctor, std::string Speciality, std::string Date, std::string Time, std::string Stat);

    void Print()const;
    void addToArchiv();
    void showArchiv()const;
    void updateStatus(const std::string& newStatus);
    ~Hospital();
};

#endif // HOSPITAL_H
