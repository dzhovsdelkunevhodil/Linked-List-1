#pragma once

#include "Worker.h"
#include "Keeper.h"
#include "Stream.h"

int action;
int actionGlobal;

int val = 0;

void MenuWorkerPrint() {

	std::cout << "Select command\n";
	std::cout << "1 - Add Element\n";
	std::cout << "2 - Delete Element\n";
	std::cout << "3 - Change Element\n";
	std::cout << "4 - Display\n";
	std::cout << "5 - Save to file\n";
	std::cout << "6 - Extract from file\n";
	std::cout << "7 - Display by value\n";
	std::cout << "0 - Exit\n";
	std::cout << "Your choice: ";
	while (!(std::cin >> action)) {
		std::cout << "Trouble maaaann. Select comand again.\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		if (std::cin >> action)
			break;
	}
}

void MenuPrint() {

	std::cout << "Select command\n";
	std::cout << "1 - Task 1\n";
	std::cout << "2 - Task 2\n";
	std::cout << "0 - Exit\n";
	std::cout << "Your choice: ";
	while (!(std::cin >> actionGlobal)) {
		std::cout << "Trouble maaaann. Select comand again.\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
		if (std::cin >> actionGlobal)
			break;
	}
}

void MenuWorker() {

	Keeper* keep = new Keeper;
	Worker* worker;
	action = 1;

	while (action != 0) {
		MenuWorkerPrint();
		switch (action) {
		case 0:
			break;
		case 1:
			system("cls");

			worker = new Worker;
			worker->setData();
			keep->addElement(worker);

			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");

			try {
				if (keep->getCount() == 0) throw std::exception("Keeper is empty\n");
				val = 0;
				std::cout << "If you want to delete last Element(enter -> " << keep->getCount() << ")\n";

				std::cout << "Index of Elemnt to delete: ";
				while (!(std::cin >> val)) {
					std::cout << "Trouble maaaann. Index of Elemnt to delete: ";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
					if (std::cin >> val)
						break;
				}
				if (val <= 0) throw std::exception("Index cannot <0 or =0\n");
				if (keep->getCount() < val)  throw std::exception("This Element doesn't exist\n");
				(*(keep))[val].getData();
				keep->deleteElement(val);
			}
			catch (const std::exception& ex) {
				std::cout << ex.what() << '\n';
			}

			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");

			try {
				if (keep->getCount() == 0) throw std::exception("Keeper is empty\n");
				val = 0;
				std::cout << "Index of Elemnt to edit: ";
				while (!(std::cin >> val)) {
					std::cout << "Trouble maaaann. Index of Elemnt to edit: ";
					std::cin.clear();
					std::cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
					if (std::cin >> val)
						break;
				}
				if (val <= 0) throw std::exception("Index cannot <0 or =0\n");
				if (keep->getCount() < val)  throw std::exception("This Element doesn't exist\n");
				(*(keep))[val].getData();
				keep->editElement(val);
			}
			catch (const std::exception& ex) {
				std::cout << ex.what() << '\n';
			}

			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");

			keep->sortirovka();
			keep->displayKeep();

			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");

			keep->fileDisplayKeep();

			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");

			//std::cout << "Index of Elemnt to edit: ";
			keep->fileSetDataKeep();

			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");

			keep->displayByValue();

			system("pause");
			system("cls");
			break;
		default:
			system("cls");

			std::cout << "Trouble maaaann. Select comand again.\n";

			system("pause");
			system("cls");
			break;
		}
	}
	delete keep;
}

void MenuStream() {
	Stream* stream = new Stream;
	stream->withoutComma();
}

void Menu() {
	actionGlobal = 1;
	while (actionGlobal != 0) {
		MenuPrint();
		switch (actionGlobal) {
		case 0:
			break;
		case 1:
			system("cls");

			MenuWorker();

			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");

			MenuStream();

			system("pause");
			system("cls");
			break;
		default:
			system("cls");

			std::cout << "Trouble maaaann. Select comand again.\n";

			system("pause");
			system("cls");
			break;
		}
	}
}