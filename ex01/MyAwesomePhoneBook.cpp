//
// Created by moboustt on 29/1/2021.
//

#include "MyAwesomePhoneBook.h"

MyAwesomePhoneBook::MyAwesomePhoneBook() : size() {
    contacts = new Contact[8];
}

MyAwesomePhoneBook::~MyAwesomePhoneBook() {
    // delete contacts;
    std::cout << "Destructing" << std::endl;
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
    std::cout << Contact::fields[index] <<  std::endl << ">>> ";
    getline(std::cin, contact.infos[index]);
}

void MyAwesomePhoneBook::putTable() const {
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;

    for (int i = 0; i < size; ++i) {
        std::string firstName = checkOutput(contacts[i].infos[0]);
        std::string lastName = checkOutput(contacts[i].infos[1]);
        std::string nickName = checkOutput(contacts[i].infos[2]);

        ContactConsole contactConsole(firstName, lastName, nickName);
        putTableColmuns(contactConsole, i);
        std::cout << std::endl;
        std::cout << "|-------------------------------------------|" << std::endl;
    }
}

void MyAwesomePhoneBook::searchContact() {
    if (isEmptyPhonebook()) {
        std::cout << "Phonebook is empty. Can't search" << std::endl;
        return;
    }
    putTable();
    displayContactInfos();
}

bool MyAwesomePhoneBook::isEmptyPhonebook() const {
    return size == 0;
}

std::string MyAwesomePhoneBook::checkOutput(const std::string &str) const {
    if (str.length() > 10)
        return str.substr(0, 9).append(".");
    return str;
}

void MyAwesomePhoneBook::putTableColmuns(const ContactConsole &contactConsole, std::size_t i) const {
    std::cout << std::setw(10 - static_cast<int>(log10(i+1))+1) << i+1 << '|';
    std::cout << std::setw(10) << std::right << contactConsole.getFirstName() << '|';
    std::cout << std::setw(10) << std::right << contactConsole.getLastName() << '|';
    std::cout << std::setw(10) << std::right << contactConsole.getNickName() << '|';
}

void MyAwesomePhoneBook::displayContactInfos() const {
    std::cout << "# Enter Index to display Informations or 0 to Exit" << std::endl << " >>> ";
    int index;
    std::cin >> index;
    std::cin.ignore();
    index -= 1;

    if (index < 0) return;

    std::cout << "First Name: " << contacts[index].infos[0] << std::endl;
    std::cout << "Last Name: " << contacts[index].infos[1] << std::endl;
    std::cout << "Nick Name: " << contacts[index].infos[2] << std::endl;
    std::cout << "Login: " << contacts[index].infos[3] << std::endl;
    std::cout << "Address: " << contacts[index].infos[4] << std::endl;
    std::cout << "Email: " << contacts[index].infos[5] << std::endl;
    std::cout << "Phone: " << contacts[index].infos[6] << std::endl;
    std::cout << "Birthday: " << contacts[index].infos[7] << std::endl;
    std::cout << "Favourite Meal: " << contacts[index].infos[8] << std::endl;
    std::cout << "UnderwearColor: " << contacts[index].infos[9] << std::endl;
    std::cout << "Secret: " << contacts[index].infos[10] << std::endl;
}
