#include "golf.h"
#include "Sales.h"

#include <iostream>
#include <string>

#define el std::endl;

const int ARLEN = 3;

struct chaff
{
    char dross[20];
    int slag;
};

void ignore();
void showMenu();

void golfCaller();

void strCountCaller();
void strCount(std::string& str);

void chaffCaller();
void showChaff(chaff& c);

void salesCaller();

int main()
{
    showMenu();
    std::string input;
    while (std::getline(std::cin, input))
    {
        if (input == "q" || input == "Q")
            break;
        char cinput = input[0];
        if (!(isdigit(cinput)))
        {
            ignore();
            std::cout << "Please enter a valid option" << el;
            showMenu();
            continue;
        }
        int choice = atoi(&cinput);
        switch (choice)
        {
        case 0: golfCaller(); showMenu(); break;
        case 1: strCountCaller(); showMenu(); break;
        case 2: chaffCaller(); showMenu(); break;
        case 3: salesCaller(); showMenu(); break;
        default: std::cout << "Please enter a valid option" << el; showMenu(); break;
        }
    }
    return 0;
}


void ignore()
{
    std::cin.clear();
    std::cin.ignore(100, '\n');
}


void showMenu()
{
    std::cout << "0) Golf\n1) strCount\n2) chaff\n3) Sales\nq) Quit\n>";
}


void golfCaller()
{
    golf golfers[ARLEN];
    std::cout << el;
    for (int x = 0; x < ARLEN; x++)
    {
        std::cout << "Golfer " << x + 1 << ":" << el;
        setGolf(golfers[x]);
        ignore();
        std::cout << el;
    }
    std::cout << el;
    for (int x = 0; x < ARLEN; x++)
    {
        std::cout << "Golfer " << x + 1 << ":" << el;
        showGolf(golfers[x]);
        std::cout << el;
    }
}


void strCountCaller()
{
    std::cout << "Enter next line (empty line to quit): ";
    std::string input;
    while (std::getline(std::cin, input))
    {
        if (input == "")
            break;
        strCount(input);
        std::cout << "Enter next line (empty line to quit): ";
    }
}

void strCount(std::string& str)
{
    static int total = 0;
    int count = 0;
    std::cout << "\"" << str << "\" contains ";
    count = str.length();
    total += count;
    std::cout << count << " characters\n";
    std::cout << total << " characters total\n";
}


void chaffCaller()
{
    char* buf = new char[sizeof(chaff)];
    chaff* c = new (buf) chaff;
    strcpy_s(c->dross, "ssord");
    c->slag = 50;
    std::cout << "\naddress: " << c << el;
    showChaff(*c);
    chaff* f = new (buf) chaff;
    strcpy_s(f->dross, "fdross");
    f->slag = 42;
    std::cout << "\naddress: " << f << el;
    showChaff(*f);
    std::cout << el;
}


void showChaff(chaff& c)
{
    std::cout << "dross: " << c.dross << ", slag: " << c.slag << el;
}


void salesCaller()
{
    SALES::Sales s;
    SALES::setSales(s);
    const double ar[3]{ 4, 2.5, 7.3 };
    SALES::Sales ss;
    SALES::setSales(ss, ar, 3);
    std::cout << "\nSales 1:\n";
    SALES::showSales(s);
    std::cout << "\nSales 2:\n";
    SALES::showSales(ss);
    std::cout << el;
    ignore();
}
