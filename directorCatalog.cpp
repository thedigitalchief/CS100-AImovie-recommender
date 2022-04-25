#include "directorCatalog.hpp"

using namespace std;

directorCatalog::directorCatalog(vector<Movie> origin, vector<Movie> &curated, string search)
{
    //sort(origin, curated, search);
}

// sort function
bool directorCatalog::sort(vector<Movie> origin, vector<Movie> &curated, string search)
{
    // if (search == "")
    // {
    //     return false;
    // }
    
    for (int i = 0; i < origin.size(); ++i)
    {
        string director = origin.at(i).getDirector(); // creating new string for each entry of vector, string is full genre string
        int found = director.find(search);            //.find looks for search in genre string

        if (found != string::npos)
        {                                    // if not null return
            curated.push_back(origin.at(i)); // add entry to new curated vector
        }
        // else
        // {
        //     return false;
        // }
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
