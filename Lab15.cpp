/***************************************************************************
* COMSC-210 | Lab 15 | Grant Luo
* Editor: CLion
* Compiler: Apple clang version 16.0.0
*/
#include <iostream>
using namespace std;

class Movie
{
    private:
        string screenWriter;
        string title;
        int yearReleased;
    public:
        // Setters
        void setScreenWriter(string writer) { screenWriter = writer; }
        void setTitle(string theTitle) { title = theTitle; }
        void setYear(int year) { yearReleased = year; }

        // Getters
        string getScreenWriter() const { return screenWriter; }
        string getTitle() const { return title; }
        int getYear() const { return yearReleased; }

        // Print method that displays the object data
        void print()
        {
            cout << "Movie: " << screenWriter << "\n";
        }
};