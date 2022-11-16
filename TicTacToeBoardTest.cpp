/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, smoke_test)
{
	ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, place_piece)
{
	TicTacToeBoard myboard;
	Piece flako = myboard.placePiece(1, 1);
	ASSERT_EQ(flako, X);
}

TEST(TicTacToeBoardTest, place_piece_on_piece)
{
	TicTacToeBoard myboard;
	//Piece flako = myboard.placePiece(1, 1);
	//ASSERT_EQ(flako, X);
}