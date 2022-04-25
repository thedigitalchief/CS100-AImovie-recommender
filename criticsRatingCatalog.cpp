#include "criticsRatingCatalog.hpp"

using namespace std;

criticsRatingCatalog::criticsRatingCatalog(vector<Movie> origin, vector<Movie> &curated, string search)
{
    // sort(origin, curated, search);
}

/* yearCatalog sorting: same sorting except u dont need to search string,
                        cast then mod%10 for year or compare the 3 character */

bool criticsRatingCatalog::sort(vector<Movie> origin, vector<Movie> &curated, string search)
{

    if (search == "")
    {
        cout << "Setting rating to 8.0" << endl;
        search = "8.0";
    }

    double searchDouble = stod(search);

    for (int i = 0; i < origin.size(); ++i)
    {

        string rating = origin.at(i).getRate();
        double ratingDouble = stod(rating); // converting string to int
        // int found = year.find(search);

        // if (ratingDouble <= (searchDouble + 1.0) || ratingDouble <= (searchDouble - 1.0)) {  //if not null return
        //     curated.push_back(origin.at(i)); //add entry to new curated vector
        // }

        if (ratingDouble >= (searchDouble))
        {                                    // if not null return
            curated.push_back(origin.at(i)); // add entry to new curated vector
        }
    }
    if (curated.size() > 3)
    {
        return false;
    } // originally: .size > 3; true if continue onto next
    else
    {
        return true;
    }
}
