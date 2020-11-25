
#define CATCH_CONFIG_MAIN
#include "../inc/catch.hpp"
#include "../inc/countIslands.hpp"

TEST_CASE( "countIslands_KnownBoard", "islands_test" ) 
{
    vector<vector<int>>M = { { 1, 1, 0, 0, 1, 0 }, 
                     { 0, 1, 0, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 0, 0 }, 
                     { 0, 0, 0, 0, 0, 1 }, 
                     { 1, 1, 0, 1, 0, 1 },
                     { 0, 0, 0, 1, 0, 0 } }; 
    CIslandCounter c(M);
    REQUIRE(6 == c.getIslands());
}

TEST_CASE( "countIslands_OpenSea", "islands_test" ) 
{
    vector<vector<int>>M = { { 0, 0, 0, 0, 0, 0 }, 
                     { 0, 0, 0, 0, 0, 0 }, 
                     { 0, 0, 0, 0, 0, 0 }, 
                     { 0, 0, 0, 0, 0, 0 }, 
                     { 0, 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0, 0 } }; 

    CIslandCounter c(M);
    REQUIRE(0 == c.getIslands());
}

TEST_CASE( "countIslands_Checkers", "islands_test" ) 
{
    vector<vector<int>>M = { { 1, 0, 1, 0, 1, 0 }, 
                     { 0, 1, 0, 1, 0, 1 }, 
                     { 1, 0, 1, 0, 1, 0 }, 
                     { 0, 1, 0, 1, 0, 1 }, 
                     { 1, 0, 1, 0, 1, 0 },
                     { 0, 1, 0, 1, 0, 1 } }; 

    CIslandCounter c(M);
    REQUIRE(1 == c.getIslands());
}

TEST_CASE( "countIslands_MainLand", "islands_test" ) 
{
    vector<vector<int>>M = { { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 1, 1, 1, 1 },
                     { 1, 1, 1, 1, 1, 1 } }; 

    CIslandCounter c(M);
    REQUIRE(1 == c.getIslands());
}

TEST_CASE( "countIslands_Lake", "islands_test" ) 
{
    vector<vector<int>>M = { { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 0, 0, 1, 1 }, 
                     { 1, 0, 0, 0, 0, 1 }, 
                     { 1, 0, 0, 0, 0, 1 }, 
                     { 1, 1, 0, 0, 1, 1 },
                     { 1, 1, 1, 1, 1, 1 } }; 

    CIslandCounter c(M);
    REQUIRE(1 == c.getIslands());
}

TEST_CASE( "countIslands_LakeIsland", "islands_test" ) 
{
    vector<vector<int>>M = { { 1, 1, 1, 1, 1, 1 }, 
                     { 1, 1, 0, 0, 1, 1 }, 
                     { 1, 0, 0, 0, 0, 1 }, 
                     { 1, 0, 0, 2, 0, 1 }, 
                     { 1, 1, 0, 0, 0, 1 },
                     { 1, 1, 1, 1, 1, 1 } }; 

    CIslandCounter c(M);
    REQUIRE(2 == c.getIslands());
}
