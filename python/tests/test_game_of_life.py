import pytest
from parametrization import Parametrization
from game_of_life.game_of_life import generation, count_live_neighbors


class TestGameOfLife:

    @pytest.mark.skip(reason="TODO: bottom-up TDD")  # Comment or remove this line to enable this test case
    def test_count_alive_neighboring_cells_first_test(self):
        pass

    @pytest.mark.skip(reason="TODO: top-down TDD")  # Comment or remove this line to enable this test case
    def test_game_of_life_first_test(self):
        pass

    @pytest.mark.skip(reason="test currently disabled")  # Comment or remove this line to enable this test case
    @Parametrization.autodetect_parameters()
    @Parametrization.case(
        name="blinker",
        world1=[
            "_____",
            "__O__",
            "__O__",
            "__O__",
            "_____",
        ],
        world2=[
            "_____",
            "_____",
            "_OOO_",
            "_____",
            "_____",
        ])
    @Parametrization.case(
        name="toad",
        world1=[
            "______",
            "______",
            "__OOO_",
            "_OOO__",
            "______",
            "______",
        ],
        world2=[
            "______",
            "___O__",
            "_O__O_",
            "_O__O_",
            "__O___",
            "______",
        ])
    def test_oscillator_acceptance_tests(self, world1, world2):
        assert (world2 == generation(world1))
        assert (world1 == generation(world2))
