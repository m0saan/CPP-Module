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
	showPrompts(Contact::FirstName, newContact);
	showPrompts(Contact::LastName, newContact);
	showPrompts(Contact::Nickname, newContact);
	showPrompts(Contact::Phone, newContact);
	showPrompts(Contact::Secret, newContact);
//	std::cout << size + 1 << std::endl;
//	std::cout << (size + 1) % 8 << std::endl;
	contacts[size % 8] = newContact;
	++size;
}

void MyAwesomePhoneBook::showPrompts(int index, Contact &contact) {
	std::cout << Contact::fields[index] << std::endl << ">>> ";
	getline(std::cin, contact.infos[index]);
}

void MyAwesomePhoneBook::putTable() const {
	std::cout << "|------------------------------------------|" << std::endl;
	std::cout << "|   Index|First Name| Last Name|  Nickname |" << std::endl;
	std::cout << "|------------------------------------------|" << std::endl;

	for(std::size_t i = 0; i < 8; ++i) {
		std::string firstName = checkOutput(contacts[i].infos[0]);
		std::string lastName = checkOutput(contacts[i].infos[1]);
		std::string nickName = checkOutput(contacts[i].infos[2]);

		ContactConsole contactConsole(firstName, lastName, nickName);
		putTableColumns(contactConsole, i);
		std::cout << std::endl;
		std::cout << "|------------------------------------------|" << std::endl;
	}
}

void MyAwesomePhoneBook::searchContact() {
	if(isEmptyPhonebook()) {
		std::cout << "Phonebook is empty. Can't search" << std::endl;
		return;
	}
	putTable();
	std::cout << "# Enter Index to display Information or 0 to Exit" << std::endl << " >>> ";
	int index;
	std::cin >> index;
	std::cin.clear();
	index -= 1;

	if(index < 0 || index >= (int) size) {
		std::cout << "Invalid index!" << std::endl;
		std::cin.ignore(1000, '\n');
		return;
	}
	console.displayContactInfos(contacts[index]);
	std::cin.ignore(1000, '\n');
}

bool MyAwesomePhoneBook::isEmptyPhonebook() const {
	return size == 0;
}

std::string MyAwesomePhoneBook::checkOutput(const std::string &str) const {
	if(str.length() > 10)
		return str.substr(0, 9).append(".");
	return str;
}

void MyAwesomePhoneBook::putTableColumns(const ContactConsole &contactConsole, std::size_t i) const {
	std::cout << std::setw(10) << i + 1 << '|';
	std::cout << std::setw(10) << std::right << contactConsole.getFirstName() << '|';
	std::cout << std::setw(10) << std::right << contactConsole.getLastName() << '|';
	std::cout << std::setw(10) << std::right << contactConsole.getNickName() << '|';
}
