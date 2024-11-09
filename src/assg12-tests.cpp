/** @file assg12-tests.cpp
 *
 * @brief Unit tests for Assignment 12: User Defined Types: Structures and Enumerated Types
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   November 08, 2024
 *
 * Assignment unit tests.  This file contains tests of the work you do
 * for the individual tasks for the assignment.  You should perform the
 * tasks in order, from Task 1 through the last task.  To start a task,
 * change the `#undef` statement to `#define`.  This will enable the test
 * cases for that task.
 */
#include "assg12-library.hpp"
#include "catch.hpp"
#include <iostream>
using namespace std;

// change these to #define when ready to begin working on each task,
// once defined they will enable the tests declared below for each task
#undef task1
#undef task2
#undef task3
#undef task4
#undef task5

/** Task 1: suitToString() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 1 implementation
 * of the suitToString() function.
 */
#ifdef task1
TEST_CASE("<suitToString()> function tests", "[task1]")
{
  CHECK(suitToString(DIAMONDS) == "DIAMONDS");
  CHECK(suitToString(CLUBS) == "CLUBS");
  CHECK(suitToString(HEARTS) == "HEARTS");
  CHECK(suitToString(SPADES) == "SPADES");
  CHECK(suitToString(Suit(5)) == "SUITUNKNOWN");
}
#endif

/** Task 2: faceToString() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 1 implementation
 * of the faceToString() function.
 */
#ifdef task2
TEST_CASE("<faceToString()> function tests", "[task2]")
{
  // exhaustively testing all 13 faces here to ensure you
  // are handling them all
  CHECK(faceToString(ACE) == "ACE");
  CHECK(faceToString(DEUCE) == "DEUCE");
  CHECK(faceToString(THREE) == "THREE");
  CHECK(faceToString(FOUR) == "FOUR");
  CHECK(faceToString(FIVE) == "FIVE");
  CHECK(faceToString(SIX) == "SIX");
  CHECK(faceToString(SEVEN) == "SEVEN");
  CHECK(faceToString(EIGHT) == "EIGHT");
  CHECK(faceToString(NINE) == "NINE");
  CHECK(faceToString(TEN) == "TEN");
  CHECK(faceToString(JACK) == "JACK");
  CHECK(faceToString(QUEEN) == "QUEEN");
  CHECK(faceToString(KING) == "KING");
  CHECK(faceToString(Face(13)) == "FACEUNKNOWN");
}
#endif

/** Task 3: cardToString() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 1 implementation
 * of the cardToString() function.
 */
#ifdef task3
TEST_CASE("<cardToString()> function tests", "[task3]")
{
  Card c;

  // test some random cards
  c.face = ACE;
  c.suit = SPADES;
  CHECK(cardToString(c) == "ACE of SPADES");

  c.face = KING;
  c.suit = HEARTS;
  CHECK(cardToString(c) == "KING of HEARTS");

  c.face = FOUR;
  c.suit = CLUBS;
  CHECK(cardToString(c) == "FOUR of CLUBS");

  c.face = TEN;
  c.suit = DIAMONDS;
  CHECK(cardToString(c) == "TEN of DIAMONDS");

  c.face = JACK;
  c.suit = SPADES;
  CHECK(cardToString(c) == "JACK of SPADES");

  c.face = DEUCE;
  c.suit = HEARTS;
  CHECK(cardToString(c) == "DEUCE of HEARTS");

  c.face = QUEEN;
  c.suit = CLUBS;
  CHECK(cardToString(c) == "QUEEN of CLUBS");

  c.face = SEVEN;
  c.suit = DIAMONDS;
  CHECK(cardToString(c) == "SEVEN of DIAMONDS");
}
#endif

/** Task 4: createDeckOfCards() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 1 implementation
 * of the createDeckOfCards() function.
 */
#ifdef task4
TEST_CASE("<createDeckOfCards()> function tests", "[task4]")
{
  // create a new deck, we expect you dynamically allocate an array of size
  // STANDARD_DECK_SIZE of Card structures and return it
  Card* deck = createDeckOfCards();

  // we expect the deck to be sorted in exactly the specified order, all
  // DIAMONDS from ACE to KING are first 13 cards, followed by the 13 CLUBS
  // then the 13 HEARTS and finally the 13 SPADES
  CHECK(cardToString(deck[00]) == "ACE of DIAMONDS");
  CHECK(cardToString(deck[13]) == "ACE of CLUBS");
  CHECK(cardToString(deck[26]) == "ACE of HEARTS");
  CHECK(cardToString(deck[39]) == "ACE of SPADES");

  CHECK(cardToString(deck[12]) == "KING of DIAMONDS");
  CHECK(cardToString(deck[25]) == "KING of CLUBS");
  CHECK(cardToString(deck[38]) == "KING of HEARTS");
  CHECK(cardToString(deck[51]) == "KING of SPADES");

  CHECK(cardToString(deck[05]) == "SIX of DIAMONDS");
  CHECK(cardToString(deck[18]) == "SIX of CLUBS");
  CHECK(cardToString(deck[31]) == "SIX of HEARTS");
  CHECK(cardToString(deck[44]) == "SIX of SPADES");
}
#endif

/** Task 5: shuffleDeckOfCards() test case
 * Define the following test case block and write your
 * code to pass these tests for the Task 1 implementation
 * of the shuffleDeckOfCards() function.
 */
#ifdef task5
TEST_CASE("<shuffleDeckOfCards()> function tests", "[task5]")
{
  // create a new deck of unshuffled cards
  Card* deck = createDeckOfCards();

  // by setting the random seed here, we ensure you will always get the
  // same sequence of random numbers
  srand(42);
  shuffleDeckOfCards(deck);

  // so if you implement the random shuffle as described for task 5, since we
  // know what random indexes will be generated, we know what the first 5
  // cards at the top of the deck should be after you shuffle it
  CHECK(cardToString(deck[00]) == "QUEEN of SPADES");
  CHECK(cardToString(deck[01]) == "NINE of CLUBS");
  CHECK(cardToString(deck[02]) == "ACE of CLUBS");
  CHECK(cardToString(deck[03]) == "NINE of SPADES");
  CHECK(cardToString(deck[04]) == "JACK of HEARTS");
}
#endif
