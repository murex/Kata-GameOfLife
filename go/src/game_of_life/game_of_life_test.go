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

package game_of_life

import (
	"github.com/stretchr/testify/assert"
	"testing"
)

func Test_oscillator_acceptance_tests(t *testing.T) {

	t.Skip("test currently disabled") // Comment or remove this line to enable this test case

	tests := []struct {
		name   string
		world1 world
		world2 world
	}{
		{
			name: "blinker",
			world1: world{
				"_____",
				"__O__",
				"__O__",
				"__O__",
				"_____",
			},
			world2: world{
				"_____",
				"_____",
				"_OOO_",
				"_____",
				"_____",
			},
		},
		{
			name: "toad",
			world1: world{
				"______",
				"______",
				"__OOO_",
				"_OOO__",
				"______",
				"______",
			},
			world2: world{
				"______",
				"___O__",
				"_O__O_",
				"_O__O_",
				"__O___",
				"______",
			},
		},
	}
	for _, test := range tests {
		t.Run(test.name+" oscillator", func(t *testing.T) {
			assert.Equal(t, test.world2, generation(test.world1))
			assert.Equal(t, test.world1, generation(test.world2))
		})
	}
}

// Bottom-up
func Test_count_alive_neighboring_cells_first_test(t *testing.T) {
	t.Skip("TODO: bottom-up TDD") // Comment or remove this line to enable this test case
}

// Then top-down
func Test_game_of_life_first_test(t *testing.T) {
	t.Skip("TODO: top-down TDD") // Comment or remove this line to enable this test case
}
