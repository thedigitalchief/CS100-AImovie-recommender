#ifndef __RELEASEYEARCATALOG_HPP__
#define __RELEASEYEARCATALOG_HPP__
#include "library.hpp"
//#include "movie.hpp"
#include <string>
#include <vector>
using namespace std;

class releaseYearCatalog: public Library {

private:

public:
        releaseYearCatalog(vector<Movie> origin, vector<Movie>& curated, string search);
        bool sort(vector<Movie> origin, vector<Movie>& curated, string search);
                 /* yearCatalog sorting: same sorting except u dont need to search string */

};

#endif
        
