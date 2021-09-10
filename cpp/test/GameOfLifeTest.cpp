/*
Copyright (c) 2021 Murex

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

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
