#ifndef __ADDMOVIE_HPP__
#define __ADDMOVIE_HPP__

#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <ostream>
#include <vector>
#include <cstdlib>

using namespace std;

class addMovie
{
private:
	string name;
	vector<string> director;
	vector<string> genre;
	string rating;
	string year;

public:
	addMovie(string n_name, string n_year, vector<string> n_directors, string n_rating, vector<string> n_genres);
	void addName(string);
	void addDirector(vector<string>);
	void addGenre(vector<string>);
	void addRating(string);
	void addYear(string);
	void addAMovie(); // bool returns true if it was able to add a movie properly
};

#endif
