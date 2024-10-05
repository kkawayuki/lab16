// COMSC-210 | lab 16 | Kent Kawashima
#include <iostream>
using namespace std;

// class declaration
class Color
{
private:
    int r, g, b;

public:
    Color() // default constructor
    {
        r = 0;
        g = 0;
        b = 0;
    }

    Color(int red) // partial constructor, only initializes a specific value for red
    {
        r = red;
        g = 0;
        b = 0;
    }

    Color(int red, int green) // partial constructor, intializes red/green
    {
        r = red;
        g = green;
        b = 0;
    }

    Color(int red, int green, int blue) // complete constructor
    {
        r = red;
        g = green;
        b = blue;
    }

    // inline functions to get each private value, const to avoid loophole changes
    int getterR() const { return r; }
    int getterG() const { return g; }
    int getterB() const { return b; }

    // setter inline functions for each seperate variable
    void setterR(int value) { r = value; }
    void setterG(int value) { g = value; }
    void setterB(int value) { b = value; }

    // method to print out all values of specified class, formatted neatly.
    void printAll() const // unsure if const needed here but method acts similarly to getter fucntions so I included
    {
        cout << "-------------\n"; // formatting
        cout << "red value: " << r << '\n';
        cout << "green value: " << g << '\n';
        cout << "blue value: " << b << '\n';
    }
};

/**************************************
 * Function: Main
 **************************************/
int main()
{
    // using individual setters/getters for the first
    Color color1;
    color1.setterR(100);
    color1.setterB(234);
    color1.setterG(23);
    cout << "red value: " << color1.getterR() << '\n';
    cout << "green value: " << color1.getterG() << '\n';
    cout << "blue value: " << color1.getterB() << '\n';

    // using constructors to show
    /*
    Color color2;
    color2.setterAll(232, 111, 40);
    color2.printAll();

    Color color3;
    color3.setterAll(54, 100, 140);
    color3.printAll();

    Color color4;
    color4.setterAll(24, 1, 30);
    color4.printAll();

    Color color5;
    color5.setterAll(98, 11, 210);
    color5.printAll();
    */
}