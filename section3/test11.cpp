// Copyright (c) 2020 by Chrono
//
// g++ test11.cpp -std=c++11 -o a.out;./a.out
// g++ test11.cpp -std=c++14 -o a.out;./a.out
// g++ test11.cpp -std=c++14 -I../common -o a.out;./a.out

#include <cassert>

#include <iostream>
#include <string>
#include <regex>

void case1()
{
    using namespace std;

    string str;

    str = "neir:automata";
    cout << str << endl;

    str = u8"机械纪元";
    cout << str << endl;
}

void case2()
{
    // enable literal suffix 's'
    using namespace std::literals::string_literals;

    using std::string;

    auto str = "std string"s;

    assert(str.length() > 0);
}

int main()
{
    case1();
    case2();

    using namespace std;

    cout << "string demo" << endl;
}
