
#include "Worker.h"

Worker::Worker() {
#ifdef DEBUG
	std::cout << "Constructor Worker\n";
#endif // DEBUG	
	fio = "";
	post = "";
	startYear = 0;
}

Worker::~Worker() {
#ifdef DEBUG
	std::cout << "Destructor Worker\n";
#endif // DEBUG	
}

void Worker::fileGetData(std::ofstream& out) {
	out << "fio: ";
	out << this->fio;
	out << '\n';
	out << "pos: ";
	out << this->post;
	out << '\n';
	out << "sYe: ";

	out << this->startYear;
	out << '\n';
}

void Worker::fileSetData(std::ifstream& in) {
	in >> this->fio;
	in >> this->post;
	while (!(in >> this->startYear)) {
		std::cout << "Trouble maaaann. Enter a number.\n";
		in.clear();
		in.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		this->startYear = 0;
		break;
	}
	//in >> this->startYear;
}

void Worker::setData() {

	std::cout << "fio: ";
	std::cin >> this->fio;
	std::cout << '\n';
	std::cout << "pos: ";
	std::cin >> this->post;
	std::cout << '\n';
	std::cout << "sYe: ";
	while (!(std::cin >> this->startYear)) {
		std::cout << "Trouble maaaann. Enter a number.\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		if (std::cin >> this->startYear)
			break;
	}
	//std::cin >> this->startYear;
	std::cout << '\n';
}

void Worker::getData() {
	std::cout << "Worker\n";
	std::cout << "fio \t:\t" << fio << '\n';
	std::cout << "pos \t:\t" << post << '\n';
	std::cout << "sYe \t:\t" << startYear << '\n';
}
