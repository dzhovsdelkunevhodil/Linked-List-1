
/*2. Файловые и строковые потоки
С использованием файловых и строковых потоков написать программу,
которая считывает текст из файла и выводит на экран только предложения,
не содержащие запятых.*/

#include "Stream.h"

Stream::Stream() {
    in.open("comma.txt");

    try {
        if (!in.is_open()) throw std::exception("File don't open\n");

    }
    catch (const std::exception& ex) {
        std::cout << ex.what();
    }
}

Stream::~Stream() {
    in.close();
}

void Stream::withoutComma() {

    setlocale(LC_ALL, "rus");
    std::string str;
    char ch;
    bool flag = 0;

    while (!in.eof()) {
        flag = 0;
        getline(in, str);
        std::istringstream iss(str);
        while (!iss.eof()) {
            iss >> ch;
            if (ch == ',') {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
            std::cout << str << '\n';
        iss.clear();
    }
}