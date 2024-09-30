/***************************************************************************
* COMSC-210 | Lab 14 | Grant Luo
* Editor: CLion
* Compiler: Apple clang version 16.0.0
*/
#include <iostream>
using namespace std;

void print_id(string const& lab_desc);

class Color
{
    private:
        int red, green, blue;
    public:
        // Setters
        void setRed(int r) { red = r; }
        void setGreen(int g) { green = g; }
        void setBlue(int b) { blue = b; }

        // Getters
        int getRed() const { return red; }
        int getGreen() const { return green; }
        int getBlue() const { return blue; }

        // Print out RGB values of this Color object
        void print() const
        {
            cout << "Color RGB (" << red << ", " << green <<", " << blue << ")\n";
        }

};

int main()
{
    print_id("Lab 14: Color Class");

    // Instantiate Color objects
    Color color1;
    color1.setRed(255);
    color1.setGreen(0);
    color1.setBlue(122);

    Color color2;
    color2.setRed(0);
    color2.setGreen(255);
    color2.setBlue(0);

    Color color3;
    color3.setRed(100);
    color3.setGreen(100);
    color3.setBlue(100);

    // Print out the RBG values
    cout << "Color 1: ";
    color1.print();

    cout << "Color 2: ";
    color2.print();

    cout << "Color 3: ";
    color3.print();

    cout << "\n";
    return 0;
}


void print_id(string const& lab_desc)
{
    cout << "\nCOMSC210 | Grant Luo | " << lab_desc << "\n";
    cout << "Editor: CLion\n";
    cout << "Compiler: Apple clang version 16.0.0\n";
    cout << "File: " << __FILE__ << "\n";
    cout << "Compiled: " << __DATE__ << " at " << __TIME__ << "\n\n";
}