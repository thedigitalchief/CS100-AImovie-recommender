#ifndef __DIRECTORCATALOG_HPP__
#define __DIRECTORCATALOG_HPP__
#include "library.hpp"
//#include "movie.hpp"
#include <string>
#include <vector>
#include <iostream>


using namespace std; 


class directorCatalog: public Library {

	private:
//		list[movie];
public:
	directorCatalog(vector<Movie> origin, vector<Movie>& curated, string search);
	bool sort(vector<Movie> origin, vector<Movie>& curated, string search); 
//	void addMovie(movie);


};

#endif
