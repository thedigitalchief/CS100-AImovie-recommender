#ifndef __MOVIE_HPP__
#define __MOVIE_HPP__
#include <vector>
#include <string>
using namespace std;

class Movie
{

private:
	string name;
	string directors;
	//	string director1;
	//	string director2;
	//	string director3;
	string genres;
	//	string genre1;
	//	string genre2;
	//	string genre3;
	//	string genre4;
	//	string genre5;
	//	string genre6;
	string year;
	string rating;

public:
	// empty constructor
	Movie();
	// constructor with 1 director, 1 genre
	Movie(string nm, string yr, string dir, string rt, string gen);
	/*constructor with 1 director, 2 genres
		Movie(string nm, int yr, string dir1, double rt, string gen1, string gen2);
	constructor with 1 director, 3 genres
		Movie(string nm, int yr, string dir, double rt, string gen1, string gen2, string gen3);
	constructor with 1 director, 4 genres
		Movie(string nm, int yr, string dir, double rt, string gen1, string gen2, string gen3, string gen4);
		constructor with 1 director, 5 genres
		Movie(string nm, int yr, string dir, double rt, string gen1, string gen2, string gen3, string gen4, string gen5);
	constructor with 1 director, 6 genres
		Movie(string nm, int yr, string dir, double rt, string gen1, string gen2, string gen3, string gen4, string gen5, string gen6);
	constructor with 2 directors, 1 genre
		Movie(string nm, int yr, string dir1, string dir2, double rt, string gen);
	constructor with 2 directors, 2 genres
		Movie(string nm, int yr, string dir1, string dir2, double rt, string gen1, string gen2);
	constructor with 2 directors, 3 genres
		Movie(string nm, int yr, string dir1, string dir2, double rt, string gen1, string gen2, string gen3);
	constructor with 2 directors, 4 genres
		Movie(string nm, int yr, string dir1, string dir2, double rt, string gen1, string gen2, string gen3, string gen4);
	constructor with 3 directors, 4 genres
		Movie(string nm, int yr, string dir1, string dir2, string dir3, double rt, string gen1, string gen2, string gen3, string gen4);
		*/
	string getName();
	string getDirector();
	string getYear();
	string getRate();
	string getGenre();

	void setName(string);
	void setDirector(string);
	void setYear(string);
	void setRating(string);
	void setGenre(string);
	void printMovie();
};
#endif

