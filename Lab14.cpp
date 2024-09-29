/***************************************************************************
* COMSC-210 | Lab 14 | Grant Luo
* Editor: CLion
* Compiler: Apple clang version 15.0.0
*/
#include <iostream>
using namespace std;

void print_id(string const& lab_desc)

class Color
{
    private:
        int red, green, blue;
    public:
        // Setters
        void setRed(int r) { red = r; }
        void setGreen(int g) { green = g; }
        void setBlu(int b) { blue = b; }

        // Getters
        int getRed() const { return red; }
        int getGreen() const { return green; }
        int getBlue() const { return blue; }

        // Other method(s)
        void print() const
        {
            cout <<
        }

};




void print_id(string const& lab_desc)
{
    cout << "Grant Luo\n";
    cout << lab_desc << endl;
    cout << "Editor: CLion\n";
    cout << "Compiler: Apple clang version 15.0.0\n";
    cout << "File: " << __FILE__ << "\n";
    cout << "Compiled: " << __DATE__ << " at " << __TIME__ << "\n\n";
}