import { GameOfLife } from "../src/GameOfLife";

const x: boolean = false; // Dead
const T: boolean = true; // Alive

describe("game_of_life", () => {

    // Remove the ".skip" below to enable this test case
    describe.skip("acceptance tests", () => {

        test('blinker oscillator', () => {
            let world1: boolean[][] = [
                [x, x, x, x, x],
                [x, x, T, x, x],
                [x, x, T, x, x],
                [x, x, T, x, x],
                [x, x, x, x, x],
            ];
            let world2: boolean[][] = [
                [x, x, x, x, x],
                [x, x, x, x, x],
                [x, T, T, T, x],
                [x, x, x, x, x],
                [x, x, x, x, x],
            ];

            expect(GameOfLife.generation(world1)).toEqual(world2);
            expect(GameOfLife.generation(world2)).toEqual(world1);
        });

        test('toad oscillator', () => {
            let world1: boolean[][] = [
                [x, x, x, x, x, x],
                [x, x, x, x, x, x],
                [x, x, T, T, T, x],
                [x, T, T, T, x, x],
                [x, x, x, x, x, x],
                [x, x, x, x, x, x],
            ];
            let world2: boolean[][] = [
                [x, x, x, x, x, x],
                [x, x, x, T, x, x],
                [x, T, x, x, T, x],
                [x, T, x, x, T, x],
                [x, x, T, x, x, x],
                [x, x, x, x, x, x],
            ];

            expect(GameOfLife.generation(world1)).toEqual(world2);
            expect(GameOfLife.generation(world2)).toEqual(world1);
        });
    });

    // Bottom-up

    describe("count alive neighboring cells", () => {
        test('first test', () => {
        });
    });

    // Then top-down

    describe("generation", () => {
        test('first test', () => {
        });
    });
});
