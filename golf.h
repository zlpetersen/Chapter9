#pragma once
#include <string>
struct golf
{
    std::string fullname;
    int handicap;
};

// non-interactive version:
void setGolf(golf& g, const std::string& name, int hc);

// interactive version
// returns 1 if name is entered, 0 if name is empty string
int setGolf(golf& g);

// sets the handicap of the provided golf structure
void handicap(golf& g, int hc);

// shows contents of golf struct
void showGolf(golf& g);
