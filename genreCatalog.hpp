#ifndef __GENRECATALOG_HPP__
#define __GENRECATALOG_HPP__
#include "library.hpp"
//#include "movie.hpp"
#include <string>
#include <vector>

using namespace std;


class genreCatalog: public Library {

	private: 

	public: 
		genreCatalog(vector<Movie> origin, vector<Movie>& curated, string search);
		bool sort(vector<Movie> origin, vector<Movie>& curated, string search); 

			//string find(vector<Movie>&);
			//origin = full vector
			//curated = vector creating
			//search = genre in question
		
			//void addMovie(movie);

};

#endif
