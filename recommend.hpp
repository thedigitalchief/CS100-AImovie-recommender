#ifndef __RECOMMEND_HPP__
#define __RECOMMEND_HPP__

#include <iostream>
#include <vector>
//#include "library.hpp"
#include <fstream>
#include <ostream>
#include <string>
#include "movie.hpp"

using namespace std;

class Recommend
{

private:
     

public:
     //vector<Movie> fullVector();
     Recommend(string); // constructor to send stuff 
     vector<Movie> createVector();     
     void createRecommendation(vector<Movie> &fullMov);

     void print(vector<Movie>);
     
};

#endif

