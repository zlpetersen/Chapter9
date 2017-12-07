# Chapter9
#### 0. Golf
Put togeter a multifile program with `golf.h`, `golf.cpp`, and a file to call the functions defined within these. The program should contain a `struct` that has an `std::string` for the `fullname` and an `int` for the `handicap`. `golf.cpp` should contain the functions `void setGolf(golf& g, std::string& name, int hc)`, which sets `golf` `g` to the passed values, `int setGolf(golf&g)`, which takes user input to set the values of `g`, `void handicap(golf& g, int hc)`, which sets the `handicap` of the provided `golf` structure, and `void showGolf(const golf& g)`, which displays the contents of `g`.
#### 1. strCount
Create a program that uses a loop to get `string` input. It should have a function that counts the number of characters in each string and the total number of characters stored in a `static` variable.
#### 2. chaff
Write a program that uses placement `new` to place a `chaff` structure in a buffer. Then assign values to the structure members and display the contents.
#### 3. Sales
Write a 3 file program using a `namespace` called `SALES`. It should contain a `struct` called `Sales` which has an `array` of `double`s to store the quarterly sales, and 3 `double`s called `average`, `min`, and `max`. These will contain the average, minimum, and maximum numbers of the `array`. There should be 4 functions, one to interactively get the contents of the passed `Sales`, one to put the passed values into the passed `Sales`, one to display the values of the passed `Sales`, and one to calculate the `average`, `min`, and `max` variables of the passed `Sales`.
