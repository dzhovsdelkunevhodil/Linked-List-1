
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
	in >> this->startYear;
}

void Worker::setData() {

	std::cout << "fio: ";
	std::cin >> this->fio;
	std::cout << '\n';
	std::cout << "pos: ";
	std::cin >> this->post;
	std::cout << '\n';
	std::cout << "sYe: ";
	std::cin >> this->startYear;
	std::cout << '\n';
}

void Worker::getData() {
	std::cout << "Worker\n";
	std::cout << "fio \t:\t" << fio << '\n';
	std::cout << "pos \t:\t" << post << '\n';
	std::cout << "sYe \t:\t" << startYear << '\n';
}
