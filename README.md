# Game of Life

[![Kata Image](images/ColorCodedRacetrack.gif)](https://images.unsplash.com/photo-1556565681-306458ef93cd?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=1950&q=80)

## Description

Available [here](http://codingdojo.org/kata/GameOfLife/)

### What is Bottom-up and Top-down TDD?

Bottom-up style is when you build a brick outside of your main acceptance test flow and only later integrate it
with the rest of the program. On the contrary, Top-down style is when you only work on the code that is covered
by the acceptance or high level tests.

At some point in the kata, you'll see that you need a function to compute the count of living neighbors to pass
the next test. The bottom-up way to solve this problem is:

1. Get back to green (by disabling the last test or by adding a hard-coded fake implementation)
2. Test drive the implementation of countAliveNeighboringCells with the minimal scope to make the previous test pass
3. Use this function in the main code, and pass the initial test properly

_Note: Bottom-up / Top-down are also known as Inside-out / Outside-in_

### The pros of Bottom-up TDD?

* It lets you work in small steps
* It tends to results in more reusable and robust bricks

### The cons of Bottom-up TDD?

* There is a risk that the brick does not integrate well with the main code, leading to a lot of rework. Then a good recommendation is to integrate the brick as soon as possible in the main code.
* Creating a robust brick is often more work than necessary for the current acceptance test

## Session Quick Retrospective

You can fill it from [here](./QuickRetrospective.md)

## Useful Links

### For this Kata

* [Wikipedia - Conway's Game of Life](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life)
* [Conway's Game of Life online editor](https://tebs-game-of-life.com/conways-editor/conways-editor.html)
* [TDD - From the Inside Out or the Outside In?](https://8thlight.com/blog/georgina-mcfadyen/2016/06/27/inside-out-tdd-vs-outside-in.html) by Georgina McFadyen

### General

* Handy for any type of turn-based session: [Online Timer](https://agility.jahed.dev/)
* [Coaching Plan Wiki Page](https://mxwiki.murex.com/confluence/display/DEVS/%5BXP+Coaching%5D+A+Kata+Plan+to+go+from+learning+TDD+to+refactoring+existing+code)

## Session Information

### Style & Duration

_`Remove irrelevant formats and adjust duration if needed`_

- 2-hour [Randori Kata](./doc/RandoriKata.md)

### Topic

Bottom-up TDD

### Focus Points

* Test readability
* Teamwork
* ⚠ YAGNI

### Source Files

[![Java](./images/LanguageJava.png)](./java)
[![C++](./images/LanguageCpp.png)](./cpp)
