/***************************************************************************
* COMSC-210 | Lab 15 | Grant Luo
* Editor: CLion
* Compiler: Apple clang version 16.0.0
*/
#include <iostream>
#include <vector>
#include <fstream>
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
            cout << "    " << "Year released: " << yearReleased << '\n';
            cout << "    " << "Screenwriter: " << screenWriter << "\n\n";
        }
};

void print_id(string const& lab_desc);

int main()
{
    print_id("Lab 15: Movie Class");

    // Initialize a vector container for four movie objects
    vector<Movie> movieList (4);

    // Set up file I/O
    ifstream fin("movies.txt");
    try
    {
        if (!fin.good()) throw "I/O error";
    }
    catch (const char* e)
    {
        cout << e << '\n';
        return 1;
    }

    // Populate each of the movie object in the container
    for (Movie& aMovie : movieList)
    {
        string aTitle;
        getline(fin, aTitle);
        aMovie.setTitle(aTitle);

        string theYear;
        fin >> theYear;
        fin.ignore(1000, '\n');
        try
        {
            aMovie.setYear(stoi(theYear));
        }
        catch (invalid_argument&)
        {
            cout << "The year released needs to be an integer value. \n";
            aMovie.setYear(0000);
        }

        string theScreenWriter;
        getline(fin, theScreenWriter);
        aMovie.setScreenWriter(theScreenWriter);
    }
    fin.close();

    // Display each movie object's data
    for (Movie& aMovie : movieList)
        aMovie.print();

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