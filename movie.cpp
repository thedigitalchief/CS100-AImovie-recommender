#include "movie.hpp"

#include <iostream>

//empty constructor 
Movie::Movie() {
	name = "";
	directors = "";
	year = "";
	genres = "";
	rating = "";
}

//constructor with 1 director, 1 genre
Movie::Movie(string nm, string yr, string dir, string rt, string gen){
	name = nm;
	year = yr;
        directors = dir;
        genres = gen; 
	rating = rt;
}
//constructor with 1 director, 2 genres
/*Movie::Movie(string nm, int yr, string dir1, double rt, string gen1, string gen2){
	name = nm;
        year = yr;
        director1 = dir; director2 = ""; director3 = "";
        genre1 = gen; genre2 = gen2; genre3 = ""; genre4 = ""; genre5 = ""; genre6 = "";
        rating = rt;

}

//constructor with 1 director, 3 genres
Movie::Movie(string nm, int yr, string dir, double rt, string gen1, string gen2, string gen3) {
	name = nm;
        year = yr;
        director1 = dir; director2 = ""; director3 = "";
        genre1 = gen; genre2 = gen2; genre3 = gen3; genre4 = ""; genre5 = ""; genre6 = "";
        rating = rt;

}
//constructor with 1 director, 4 genres
Movie::Movie(string nm, int yr, string dir, double rt, string gen1, string gen2, string gen3, string gen4){
	name = nm;
        year = yr;
        director1 = dir; director2 = ""; director3 = "";
        genre1 = gen; genre2 = gen2; genre3 = gen3; genre4 = gen4; genre5 = ""; genre6 = "";
        rating = rt;

}
//constructor with 1 director, 5 genres
Movie::Movie(string nm, int yr, string dir, double rt, string gen1, string gen2, string gen3, string gen4, string gen5) {
	name = nm;
        year = yr;
        director1 = dir; director2 = ""; director3 = "";
        genre1 = gen; genre2 = gen2; genre3 = gen3; genre4 = gen4; genre5 = gen5; genre6 = "";
        rating = rt;

}
//constructor with 1 director, 6 genres
Movie::Movie(string nm, int yr, string dir, double rt, string gen1, string gen2, string gen3, string gen4, string gen5, string gen6){
	name = nm;
        year = yr;
        director1 = dir; director2 = ""; director3 = "";
        genre1 = gen; genre2 = gen2; genre3 = gen3; genre4 = gen4; genre5 = gen5; genre6 = gen6;
        rating = rt;

}
//constructor with 2 directors, 1 genre
Movie::Movie(string nm, int yr, string dir1, string dir2, double rt, string gen){
	name = nm;
        year = yr;
        director1 = dir; director2 = dir2; director3 = "";
        genre1 = gen; genre2 = ""; genre3 = ""; genre4 = ""; genre5 = ""; genre6 = "";
        rating = rt;

}
//constructor with 2 directors, 2 genres
Movie::Movie(string nm, int yr, string dir1, string dir2, double rt, string gen1, string gen2) {
	name = nm;
        year = yr;
        director1 = dir; director2 = dir2; director3 = "";
        genre1 = gen; genre2 = gen2; genre3 = ""; genre4 = ""; genre5 = ""; genre6 = "";
        rating = rt;

}
//constructor with 2 directors, 3 genres
Movie::Movie(string nm, int yr, string dir1, string dir2, double rt, string gen1, string gen2, string gen3){
	name = nm;
        year = yr;
        director1 = dir; director2 = dir2; director3 = "";
        genre1 = gen; genre2 = gen2; genre3 = gen3; genre4 = ""; genre5 = ""; genre6 = "";
        rating = rt;

}
//constructor with 2 directors, 4 genres
Movie::Movie(string nm, int yr, string dir1, string dir2, double rt, string gen1, string gen2, string gen3, string gen4){
	name = nm;
        year = yr;
        director1 = dir; director2 = dir2; director3 = "";
        genre1 = gen; genre2 = gen2; genre3 = gen3; genre4 = gen4; genre5 = ""; genre6 = "";
        rating = rt;

}
//constructor with 3 directors, 4 genres
Movie::Movie(string nm, int yr, string dir1, string dir2, string dir3, double rt, string gen1, string gen2, string gen3, string gen4){
	name = nm;
        year = yr;
        director1 = dir; director2 = dir2; director3 = dir3;
        genre1 = gen; genre2 = gen2; genre3 = gen3; genre4 = gen4; genre5 = ""; genre6 = "";
        rating = rt;

}*/
string Movie::getName() {return name;}
string Movie::getDirector() {return directors;}
/*	if (director2 =="") {return director1}
	else if (director3 == "") { return director1 ", " director2}
	else { return director1 ", " director2 ", " director3}
*/
string Movie::getYear() {return year;}
string Movie::getRate() {return rating;}
string Movie::getGenre() {return genres;}
/*	if (genre2 == "") {return genre1}
	else if (genre3 == "") {return genre1 ", " genre2}
	else if (genre4 == "") {return genre1 ", " genre2 ", " genre3}
	else if (genre5 == "") {return genre1 ", " genre2 ", " genre3 ", " genre4}
	else if (genre6 == "") {return genre1 ", " genre2 ", " genre3 ", " genre4 ", " genre5} 
	else {return genre1 ", " genre2 ", " genre3 ", " genre4 ", " genre5 ", " genre6;}
*/
void Movie::setName(string nm) {name = nm;}
void Movie::setDirector(string dir) {
        directors = dir;
	//directors.push_back(dir);
}
void Movie::setYear(string yr) {year = yr;}
void Movie::setRating(string rt) {rating = rt;}
void Movie::setGenre(string gen) {
        genres = gen;
	//genres.push_back(gen);
}void Movie::printMovie() 
{
        cout << getName() << "; " << getYear() << "; " << getDirector() << "; " << getRate() << "; " << getGenre() << endl;
        /*for (int i= 0; i < directors.size(); ++i) {
                cout << m.directors.at(i);
        }
        cout << " , " << m.getRate() << ", ";
        for (int i = 0; i < genres.size(); ++i) {
                cout << m.genres.at(i);
}*/
}



