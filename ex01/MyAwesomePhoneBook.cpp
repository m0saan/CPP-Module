//
// Created by moboustt on 29/1/2021.
//

#include "MyAwesomePhoneBook.h"

MyAwesomePhoneBook::MyAwesomePhoneBook() : size() {
    contacts = new Contact[8];
}

MyAwesomePhoneBook::~MyAwesomePhoneBook() {
    delete contacts;
}

void MyAwesomePhoneBook::addContact() {
    Contact newContact;
    showPrompts(Contact::Field::FirstName, newContact);
    showPrompts(Contact::Field::LastName, newContact);
    showPrompts(Contact::Field::Nickname, newContact);
    showPrompts(Contact::Field::Login, newContact);
    showPrompts(Contact::Field::Address, newContact);
    showPrompts(Contact::Field::Email, newContact);
    showPrompts(Contact::Field::Phone, newContact);
    showPrompts(Contact::Field::Birthday, newContact);
    showPrompts(Contact::Field::FavoriteMeal, newContact);
    showPrompts(Contact::Field::UnderwearColor, newContact);
    showPrompts(Contact::Field::Secret, newContact);
    contacts[size++] = newContact;
}

void MyAwesomePhoneBook::showPrompts(int index, Contact &contact) {
    std::cout << Contact::fields[index] << " >>> ";
    getline(std::cin, contact.infos[index]);
}

void MyAwesomePhoneBook::showSearchHeader() {
    putTable();
}

void MyAwesomePhoneBook::putTable() const {
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
}

void MyAwesomePhoneBook::searchContact() {

}
