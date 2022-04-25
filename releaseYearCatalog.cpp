#include "releaseYearCatalog.hpp"

using namespace std;

releaseYearCatalog ::releaseYearCatalog(vector<Movie> origin, vector<Movie> &curated, string search)
{
    // sort(origin, curated, search);
}

bool releaseYearCatalog::sort(vector<Movie> origin, vector<Movie> &curated, string search)
{

    if (search == "")
    {
        cout << "Setting year to 1960s" << endl;
        search = "1960";
    }
    
    int searchInt = stoi(search);

    for (int i = 0; i < origin.size(); ++i)
    {
        string year = origin.at(i).getYear();
        int yearInt = stoi(year);
        
        // int found = year.find(search); //.find looks for search in genre string

        // if (yearInt <= (searchInt + 10) || yearInt <= (searchInt - 10))
        // {                                    // if not null return
        //     curated.push_back(origin.at(i)); // add entry to new curated vector
        // }

        // searchInt is user, which is a decade
        int lastDig = yearInt % 10;
        if (lastDig != 0)
        {
            year.at(3) = '0';
        }
        
        //cout << "year: " << year << endl;
        yearInt = stoi(year);

        if (yearInt >= (searchInt))
        {                                    // if not null return
            curated.push_back(origin.at(i)); // add entry to new curated vector
        }

    }

    if (curated.size() > 3)
    {
        return false;
    }
    else
    {
        return true;
    }
}
