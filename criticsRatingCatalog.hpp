#ifndef __CRITICSRATINGCATALOG_HPP__
#define __CRITICSRATINGCATALOG_HPP__
#include "library.hpp"
// #include "movie.hpp"
#include <vector>
#include <string>

using namespace std;


class criticsRatingCatalog: public Library {

private:

public:
        criticsRatingCatalog(vector<Movie> origin, vector<Movie>& curated, string search);

        bool sort(vector<Movie> origin, vector<Movie>& curated, string search); 

                /* yearCatalog sorting: same sorting except u dont need to search string, 
                        cast then mod%10 for year or compare the 3 character */
};

#endif
      
