#ifndef __LIBRARY_HPP__
#define __LIBRARY_HPP__
// #include "genreCatalog.hpp"
// #include "directorCatalog.hpp"
// #include "releaseYearCatalog.hpp"
// #include "criticsRatingCatalog.hpp"
#include "movie.hpp"
#include "recommend.hpp"
#include <vector>
#include <string>
#include <cstring>
#include <list>

using namespace std;


class Library {
        
    private:
        
    public:
        virtual bool sort(vector<Movie> origin, vector<Movie>& curated, string search) = 0;

        Library();


};

#endif



  /*
        vector<Movie> allMoviesVector;
        vector<Movie> genreVector;
        vector<Movie> directorVector;
        vector<Movie> ratingVector;
        vector<Movie> yearVector;
        //Library() : Recommend() {};
        //Library(string title, vector<string> genres, vector<string> directors, string ratings, string years)
        //        : Recommend(title, genres, directors, ratings, years) {};
        string getMovieTitles();
        vector<string> getGenres();
        vector<string> getDirectors();
        string getRatings();
        string getYears();
    
        void setTitle(string movieTitle);
        void addMovie(Movie* mov);
        void searchGenre(Genre* genreVector);
        void searchDirector(Director* directorVector);
        void searchRating(Rating* ratingVector);
        void searchYear(Year* yearVector);

        virtual string find();
        virtual void sort();
        virtual void search();
        virtual void addMovie(movie);
        virtual ~Print();
        */
