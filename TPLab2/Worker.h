#pragma once

/*1. Стандартные потоки
Определить класс с именем WORKER, содержащий следующие поля:
● ФИО работника;
● название занимаемой должности;
● год поступления на работу.
Определить методы доступа к этим полям и перегруженные операции
извлечения и вставки для объектов типа WORKER.
Заранее число объектов не известно.
Написать программу, выполняющую следующие действия:
● записи должны быть размещены в алфавитном порядке;
● вывод на дисплей фамилий работников, чей стаж работы в
организации превышает значение, введенное с клавиатуры;
● если таких работников нет, вывести на дисплей соответствующее
сообщение.*/
#include <iostream>
#include <fstream>

class Worker {
private:
	std::string fio;
	std::string post;
	int startYear;
public:
	Worker();
	~Worker();
	void getData();
	void setData();
	void fileGetData(std::ofstream& out);
	void fileSetData(std::ifstream& in);

	void setFIO(std::string& a) {
		fio = a;
	}

	void setPost(std::string& a) {
		post = a;
	}

	void setStartYear(int& a) {
		startYear = a;
	}

	std::string& getFIO() {
		return fio;
	}

	std::string& getPos() {
		return post;
	}

	int& getStartYear() {
		return startYear;
	}
};