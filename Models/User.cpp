//
// Created by Robert on 5/22/2024.
//

#include "User.h"
#include "sstream"

User::User(int id, std::string email, std::string password, std::string firstName, std::string lastName) {
    this->id = id;
    this->email = email;
    this->password = password;
    this->firstName = firstName;
    this->lastName = lastName;
}

std::string User::getUserFirstName() const {
    return this->firstName;
}

std::string User::getUserEmail() const {
    return this->email;
}

std::string User::getUserLastName() const {
    return this->lastName;
}

std::string User::getUserPassword() const {
    return this->password;
}

void User::setUserFirstName(std::string newFirstName) {
    this->firstName = newFirstName;
}

void User::setUserLastName(std::string newLastName) {
    this->lastName = newLastName;
}

void User::setUserEmail(std::string newEmail) {
    this->email = newEmail;
}

void User::setUserPassword(std::string newPassword) {
    this->password = newPassword;
}

std::string User::toCsv() {
    std::ostringstream oss;
    oss << this->id<<","<<this->email<<","<<this->password<<","<<this->firstName<<","<<this->lastName;
}

void User::fromCsv(std::string &csvLine) {
    std::istringstream ss(csvLine);
    ss >> this->id;
    ss.ignore(1);//ignore comma for ints,floats...
    std::getline(ss,this->email,',');
    std::getline(ss,this->password,',');
    std::getline(ss,this->firstName,',');
    std::getline(ss,this->lastName,',');
}
