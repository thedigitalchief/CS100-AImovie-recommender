#include "genreCatalog.hpp"
//#include "library.hpp"
// #include <stdio.h>
// #include <vector>
// #include <list>
// #include <string>

using namespace std;

genreCatalog::genreCatalog(vector<Movie> origin, vector<Movie> &curated, string search)
{
   //sort(origin, curated, search);
}

// sort function
bool genreCatalog::sort(vector<Movie> origin, vector<Movie> &curated, string search)
{

   for (int i = 0; i < origin.size(); ++i)
   {

      string genre = origin.at(i).getGenre(); // creating new string for each entry of vector, string is full genre string
      int found = genre.find(search);         //.find looks for search in genre string

      if (found != string::npos)
      {                                   // if not null return
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
