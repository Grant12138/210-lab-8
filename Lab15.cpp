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
        void setScreenWriter(string s) { screenWriter = s; }
        void setTitle(string s) { title = s; }
        void setYear(string s)
        {
            try
            {
                yearReleased = stoi(s);
            }
            catch
        }
};