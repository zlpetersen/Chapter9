#include "golf.h"

#include <iostream>

void setGolf(golf& g, const std::string& name, int hc)
{
    g.fullname = name;
    g.handicap = hc;
}


int setGolf(golf& g)
{
    std::string name;
    std::cout << "Enter full name: ";
    std::cin >> name;
    std::cin.clear();
    std::cin.ignore(100, '\n');
    int hc;
    std::cout << "Enter handicap: ";
    std::cin >> hc;
    setGolf(g, name, hc);
    if (g.fullname != "")
        return 1;
    return 0;
}


void handicap(golf& g, int hc)
{
    g.handicap = hc;
}


void showGolf(golf& g)
{
    std::cout << "Name: " << g.fullname << "\nHandicap: " << g.handicap << "\n";
}

