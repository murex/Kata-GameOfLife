#include <kata/game_of_life/GameOfLife.hpp>
#include <gtest/gtest.h>

using namespace com::murex::kata::game_of_life;

TEST(GameOfLifeTest, DISABLED_blinker_oscillator_acceptance_test)
{
	World world1 = {
		{_,_,_,_,_},
		{_,_,O,_,_},
		{_,_,O,_,_},
		{_,_,O,_,_},
		{_,_,_,_,_},
	};
	World world2 = {
		{_,_,_,_,_},
		{_,_,_,_,_},
		{_,O,O,O,_},
		{_,_,_,_,_},
		{_,_,_,_,_},
	};

	EXPECT_EQ(world2, generation(world1));
	EXPECT_EQ(world1, generation(world2));
}

TEST(GameOfLifeTest, DISABLED_toad_oscillator_acceptance_test)
{
	World world1 = {
		{_,_,_,_,_,_},
		{_,_,_,_,_,_},
		{_,_,O,O,O,_},
		{_,O,O,O,_,_},
		{_,_,_,_,_,_},
		{_,_,_,_,_,_},
	};
	World world2 = {
		{_,_,_,_,_,_},
		{_,_,_,O,_,_},
		{_,O,_,_,O,_},
		{_,O,_,_,O,_},
		{_,_,O,_,_,_},
		{_,_,_,_,_,_},
	};

	EXPECT_EQ(world2, generation(world1));
	EXPECT_EQ(world1, generation(world2));
}

/* Bottom-up */

TEST(CountAliveNeighboringCells, first_test)
{
}

/* Then top-down */

TEST(GameOfLifeTest, first_test)
{
}
