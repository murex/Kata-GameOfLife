import org.junit.Ignore;
import org.junit.Test;

import static org.junit.Assert.assertArrayEquals;

public class GameOfLifeTest {

    @Ignore
    @Test
    public void blinker_oscillator_acceptance_test() {
        String[] world1 = {
                "_____",
                "__O__",
                "__O__",
                "__O__",
                "_____",
        };
        String[] world2 = {
                "_____",
                "_____",
                "_OOO_",
                "_____",
                "_____",
        };
        assertArrayEquals(world2, GameOfLife.generation(world1));
        assertArrayEquals(world1, GameOfLife.generation(world2));
    }

    @Ignore
    @Test
    public void toad_oscillator_acceptance_test() {
        String[] world1 = {
                "______",
                "______",
                "__OOO_",
                "_OOO__",
                "______",
                "______",
        };
        String[] world2 = {
                "______",
                "___O__",
                "_O__O_",
                "_O__O_",
                "__O___",
                "______",
        };
        assertArrayEquals(world2, GameOfLife.generation(world1));
        assertArrayEquals(world1, GameOfLife.generation(world2));
    }


    /* Bottom-up */

    @Test
    public void count_alive_neighboring_cells_first_test() {
    }

    /* Then top-down */

    @Test
    public void game_of_life_first_test() {
    }
}