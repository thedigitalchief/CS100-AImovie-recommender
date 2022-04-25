#include "addMovie.hpp"
// #include <string>
// #include <cstring>
// #include <iostream>
// #include <fstream>
// #include <ostream>
// #include <vector>
// #include <cstdlib>

using namespace std;

addMovie ::addMovie(string name, string year, vector<string> directors, string rating, vector<string> genres)
{
	// cout << "CONSTRUCTOR" << endl;
	addName(name);
	addDirector(directors);
	addGenre(genres);
	addRating(rating);
	addYear(year);
	// cout << "AFTER CONSTRUCTOR" << endl;
	addAMovie();
	// cout << "addMovie is done" << endl;
}

void addMovie ::addName(string n_name)
{
	name = n_name;
}

void addMovie ::addDirector(vector<string> n_directors)
{
	for (int i = 0; i < n_directors.size(); i++)
	{
		director.push_back(n_directors.at(i));
	}
}

void addMovie ::addGenre(vector<string> n_genres)
{
	for (int i = 0; i < n_genres.size(); i++)
	{
		genre.push_back(n_genres.at(i));
	}
}

void addMovie ::addRating(string n_rating)
{
	rating = n_rating;
}

void addMovie ::addYear(string n_year)
{
	year = n_year;
}

void addMovie ::addAMovie()
{
	if (name == "")
	{
		name = "Unknown Name";
	}

	if (year == "")
	{
		year = "Unknown Release Year";
	}

	if (rating == "")
	{
		rating = "Unknown Rating";
	}
	// cout << "Right before addMovie" << endl;
	ofstream file;
	file.open("movielist.txt", ios_base::app);

	if (file.is_open() != true)
	{
		cout << "Error opening movielist.txt" << endl;
		// return(1);
	}

	// NAME, YEAR, DIRECTOR, RATING, GENRE
	file << endl;
	// add name first, seperated by ;
	file << name;
	file << "; ";

	file << year;
	file << "; ";

	// add directors, seperated by , and then by ;
	for (int i = 0; i < director.size(); i++)
	{
		if (i != director.size() - 1) // this makes sure the last element does not have a comma and space after
		{
			file << director.at(i) << ", ";
		}
		else
		{
			file << director.at(i) << "; "; // this is the last element
		}
	}

	// rating
	file << rating;
	file << "; ";

	// add genres, seperated by "," and then by ";"
	for (int i = 0; i < genre.size(); i++)
	{
		if (i != genre.size() - 1) // this makes sure the last element does not have a comma and space after
		{
			file << genre.at(i) << ", ";
		}
		else
		{
			file << genre.at(i) << ";"; // this is the last element
		}
	}

	file.close();
	cout << "Added your movie to the database" << endl;
}
