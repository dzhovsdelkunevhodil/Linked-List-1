#pragma once

#include <sstream>
#include <fstream>
#include <iostream>

class Stream {
private:
    std::ifstream in;          


public:
    Stream();

    ~Stream();

    void withoutComma();

};