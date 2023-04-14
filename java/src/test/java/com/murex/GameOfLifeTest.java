/*
Copyright (c) 2022 Murex

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

package com.murex;

import static org.junit.jupiter.api.Assertions.assertArrayEquals;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

public class GameOfLifeTest {
    
    @Disabled
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
    
    @Disabled
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
