//
// Created by scoti on 22.05.2024.
//

#ifndef CARSHARINGFINAL_EMPLOYEE_H
#define CARSHARINGFINAL_EMPLOYEE_H

#include <iostream>
#include <string>
#include <ctime>

class Employee {

protected:
    std::string name;
    std::string surname;
    std::string email;
    std::string password;
    std::string abbreviation;
    std::string remarks;
    std::string birthdate;
    float salary;
    std::string position;
    bool admin;
public:

    //constructor
    Employee(std::string name, std::string surname, std::string email,std::string password, std::string position, std::string birthdate,
             std::string abbreviation, float salary, std::string remarks);

    Employee();

    //getters
    std::string getName();

    std::string getSurname();

    std::string getEmail();

    std::string getPassword();

    std::string getPosition();

    std::string getAbbreviation();

    float getSalary();

    std::string getRemarks();

    std::string getBirthdate();

    bool isAdmin();

    //setters
    void setPosition(std::string newPosition);

    //birthdate given by user as DD MM YYY
    void setBirthdate( std::string newBirthdate);

    void setAbbreviation(std::string newAbbreviation);

    void setSalary(float newSalary);

    void setEmail(std::string newEmail);

    void setName(std::string newName);

    void setSurname(std::string newSurname);

    void setRemarks(std::string newRemarks);

    //method
    void updateProfile();

    //convert to csv format
    std::string toCsv();

    //convert into normal type from csv
    void fromCsv(std::string& csvLine);

    void setAdmin(bool adminStatus);

};


#endif //CARSHARINGFINAL_EMPLOYEE_H
