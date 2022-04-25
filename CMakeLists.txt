CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
SET(CMAKE_CXX_STANDARD 11)
ADD_SUBDIRECTORY(googletest)

Project(project)


ADD_EXECUTABLE(main 
    main.cpp
    genreCatalog.cpp
    directorCatalog.cpp 
    criticsRatingCatalog.cpp
    releaseYearCatalog.cpp
    foundersRecommend.cpp
    library.cpp
    movie.cpp
    addMovie.cpp
    recommend.cpp
     
)

ADD_EXECUTABLE(test
	test.cpp
	genreCatalog.cpp
	directorCatalog.cpp 
	criticsRatingCatalog.cpp
	releaseYearCatalog.cpp
	foundersRecommend.cpp
	library.cpp
	movie.cpp
	addMovie.cpp
	recommend.cpp

)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
