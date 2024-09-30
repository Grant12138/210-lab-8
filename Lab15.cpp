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
            cout << "Movie: " << title << '\n';
            cout.width(4); cout << "Year released: " << yearReleased << '\n';
            cout.width(4); cout << "Screenwriter: " << screenWriter << "\n\n";
        }
};

void print_id(string const& lab_desc);

int main()
{
    print_id("Lab 15: Movie Class");

    vector<Movie> movieList {};

    return 0;
}

void print_id(string const& lab_desc)
{
    cout << "COMSC210 | Grant Luo | " << lab_desc << "\n";
    cout << "Editor: CLion\n";
    cout << "Compiler: Apple clang version 16.0.0\n";
    cout << "File: " << __FILE__ << "\n";
    cout << "Compiled: " << __DATE__ << " at " << __TIME__ << "\n\n";
}