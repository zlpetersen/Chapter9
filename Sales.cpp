#include "Sales.h"

#include <iostream>

namespace SALES
{
    void setSales(Sales& s, const double ar[], int n)
    {
        int len = QUARTERS < n ? QUARTERS : n;
        if (len > QUARTERS)
            len = QUARTERS;
        for (int i = 0; i < len; i++)
            s.sales[i] = ar[i];
        if (len < 4)
            for (int i = len; i < QUARTERS; i++)
                s.sales[i] = 0;
        calcSales(s);
    }

    void setSales(Sales& s)
    {
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Quarter " << i + 1 << " sales: ";
            while (!(std::cin >> s.sales[i]))
                std::cout << "Please enter a valid number\nQuarter " << i + 1 << " sales: ";
        }
        calcSales(s);
    }

    void showSales(const Sales& s)
    {
        std::cout << "Sales:\n";
        for (int f = 0; f < QUARTERS; f++)
            std::cout << "Quarter " << f + 1 << ": " << s.sales[f] << "\n";
        std::cout << "Average: " << s.average << "\n";
        std::cout << "Minimum: " << s.min << "\n";
        std::cout << "Maximum: " << s.max << "\n";
    }

    void calcSales(Sales& s)
    {
        double max = 0;
        for (auto x : s.sales)
            max = x > max ? x : max;
        s.max = max;
        double min = max;
        for (auto f : s.sales)
            min = f < min ? f : min;
        s.min = min;
        double average{};
        for (auto g : s.sales)
            average += g;
        average /= QUARTERS;
        s.average = average;
    }
}