#include "gtest/gtest.h"
#include <iostream>


#include "foundersRecommend.hpp"
#include "genreCatalog.hpp"
#include "library.hpp"
#include "movie.hpp"
#include "recommend.hpp"
#include "releaseYearCatalog.hpp"

//#include "test.cpp"
#include "criticsRatingCatalog.hpp"
#include "directorCatalog.hpp"
#include "addMovie.hpp"

//#include "main.cpp"

//#include "menu_test.hpp"
//#inclide "library_test.hpp"
//#include "founderRecommend_test.hpp"
//#include "recommend_test.hpp"
//#include "movieRecommend_test.hpp"


/*TEST(Recommend_test, Recommend) {
        Recommend* Recommend1 = new recommend;
        EXPECT_EQ(Recommend -> createVector());
}

TEST(Add_Movie_test, addMovie {
        addMovie* addname1 = new addName();
        addMovie* adddirector1 = new addDirector();
        addMovie* addgenre1 = new addGenre();
        addMovie * addrating1 = new addRating();
        addMovie* addyear1 = new addYear();
        addMovie* addAmovie1 = new addAMovie();
        EXPECT_EQ(addMovie -> addMovie())
}

TEST(Founders_Recommend_test, foundersRecommend) {
        foundersRecommended* foundersRecommend1 = new foundersRecommend();
        foundersRecommended* intro1 = new intro();
        foundersRecommended* menu1 = new menu();
        EXPECT_EQ(foundersRecommend -> foundersRecommend());
}
*/
TEST(Recommend_Test, addMovieName) {
	//Recommend rec("rc");
	vector<Movie> testVect;
	Movie movie("It", "2000", "James Cameron", "9.0"," Horror");
	testVect.push_back(movie);
	EXPECT_EQ(testVect.at(0).getName(), "It");
}
TEST(Recommend_Test, addMovieYear) {
        vector<Movie> testVect;
	Movie movie("It", "2000", "James Cameron", "9.0"," Horror");
        testVect.push_back(movie);
        EXPECT_EQ(testVect.at(0).getYear(), "2000");
}
TEST(Recommend_Test, addMovieDir) {
        vector<Movie> testVect; 
        Movie movie("It", "2000", "James Cameron", "9.0"," Horror");
        testVect.push_back(movie);
        EXPECT_EQ(testVect.at(0).getDirector(), "James Cameron");
}

TEST(Recommend_Test, addMovieRate) {
        vector<Movie> testVect;
        Movie movie("It", "2000", "James Cameron", "9.0"," Horror");
        testVect.push_back(movie);
        EXPECT_EQ(testVect.at(0).getRate(), "9.0");
}

TEST(Recommend_Test, addMovieGenre) {
        vector<Movie> testVect;
        Movie movie("It", "2000", "James Cameron", "9.0"," Horror");
        testVect.push_back(movie);
        EXPECT_EQ(testVect.at(0).getGenre(), " Horror");
}
TEST(Movie_Test, Name) {
	Movie movie("It", "2000", "James Cameron", "9.0"," Horror");
        EXPECT_EQ(movie.getName(), "It");
}

TEST(Movie_Test, Year) {
        Movie movie("It", "2000", "James Cameron", "9.0"," Horror");
        EXPECT_EQ(movie.getYear(), "2000");
}
TEST(Movie_Test, Director) {
        Movie movie("It", "2000", "James Cameron", "9.0"," Horror");
        EXPECT_EQ(movie.getDirector(), "James Cameron");
}
TEST(Movie_Test, Rating) {
        Movie movie("It", "2000", "James Cameron", "9.0"," Horror");
        EXPECT_EQ(movie.getRate(), "9.0");
}
TEST(Movie_Test, Genre) {
        Movie movie("It", "2000", "James Cameron", "9.0"," Horror");
        EXPECT_EQ(movie.getGenre(), " Horror");
}

/*
TEST(Movie_Test, setRating) {
        Movie movie();
	movie.setRating("9.0");
        EXPECT_EQ(movie.getRate(), "9.0");
}
*/
 int main(int argc, char **argv) {
     ::testing::InitGoogleTest(&argc, argv);

     return RUN_ALL_TESTS();
}
/*
TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(composite_test, Rand_test_stringify) {
        Base* rand2 = new Rand();
        EXPECT_EQ("83.000000", rand2->stringify());
}

TEST(composite_test, Pow_test_stringify) {
        Base* Pow1 = new Pow (new Op(3),new Op(4));
        EXPECT_EQ("3.000000 ** 4.000000", Pow1->stringify());
}

TEST(composite_test, Pow_test_evaluate) {
        Base* Pow2 = new Pow (new Op(3),new Op(4));
        EXPECT_EQ(81, Pow2->evaluate());
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();

}*/
