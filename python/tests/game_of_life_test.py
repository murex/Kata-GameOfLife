import unittest

from parameterized import parameterized
from game_of_life.game_of_life import generation, count_live_neighbors


class GameOfLifeTest(unittest.TestCase):

    @unittest.skip("TODO: bottom-up TDD")  # Comment or remove this line to enable this test case
    def test_count_alive_neighboring_cells_first_test(self):
        pass

    @unittest.skip("TODO: top-down TDD")  # Comment or remove this line to enable this test case
    def test_game_of_life_first_test(self):
        pass

    @parameterized.expand([
        ("blinker",
         [
             "_____",
             "__O__",
             "__O__",
             "__O__",
             "_____",
         ],
         [
             "_____",
             "_____",
             "_OOO_",
             "_____",
             "_____",
         ]),
        ("toad",
         [
             "______",
             "______",
             "__OOO_",
             "_OOO__",
             "______",
             "______",
         ],
         [
             "______",
             "___O__",
             "_O__O_",
             "_O__O_",
             "__O___",
             "______",
         ]),

    ])
    @unittest.skip("test currently disabled")  # Comment or remove this line to enable this test case
    def test_oscillator_acceptance_tests(self, _name, world1, world2):
        self.assertEqual(world2, generation(world1))
        self.assertEqual(world1, generation(world2))


if __name__ == "__main__":
    unittest.main()
