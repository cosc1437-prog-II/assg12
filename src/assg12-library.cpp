/** @file assg12-library.cpp
 *
 * @brief Implementation file for Assignment 12: User Defined Types: Structures and Enumerated Types
 *
 * @author Jane Programmer
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   November 08, 2024
 *
 * Assignment implementation file.  All of the actual implementation of
 * functions for tasks goes into an implementation file with a .cpp extension.
 * The prototypes of any functions that are used by others should be put into
 * the .hpp header file.
 */
#include "assg12-library.hpp"
#include <cstdlib>
#include <string>
using namespace std;

/** @brief Convert Suit enum to string
 *
 * This function is a helper function for the Suit enumerated type.
 * Given a Suit enumerated type as input, return a string representation
 * of the card Suit. This will be used when creating a card game using\
 * these functions.
 *
 * @param suit A Suit enumerated type that should be converted to its
 *   string representation.
 *
 * @returns string Returns a string name of the indicated Suit enumerated
 *   type given to this function.
 */
// task 1 implementation goes here

/** @brief Convert Face enum to string
 *
 * This function is a helper function for the Face enumerated type.
 * Given a Face enumerated type as input, return a string
 * representation of that Face. This will be used when creating a card
 * game using these functions.
 *
 * @param face A Face enumerated type that should be converted to its
 *   string representation.
 *
 * @returns string Returns a string name of the indicated Face enumerated
 *   type given to this function.
 */
// task 2 implementation goes here

/** @brief Convert Card struct to string
 *
 * A Card structure represents a single playing card.
 * We reuse the suitToString() and faceToString() functions
 * to generate a string representation of the given card.
 *
 * @param card A Card structure that should be converted to its
 *   string representation.
 *
 * @returns string Returns a string name of the indicated Card enumerated
 *   type given to this function.
 */
// task 3 implementation goes here

/** @brief Create a deck of cards
 *
 * This function dynamically allocates an array of 52
 * Card structures and returns the pointer to the base
 * address of this dynamically allocated array from the
 * function.  It initializes the new deck of 52 cards to
 * ensure that all 52 standard playing cards are in the deck.
 *
 * @returns Card* Returns a pointer to an array of 52 Card
 *   structures.  The cards in the returned deck of cards are
 *   intialized to the 52 unique cards in a standard deck of
 *   cards.
 */
// task 4 implementation goes here

/** @brief Shuffle a deck of cards
 *
 * This function expects an array of 52 Card structures
 * representing a standard deck of cards.  The function
 * will shuffle the deck randomly.  We shuffle by iterating
 * over each of the 52 cards / indexes of the deck, randomly
 * generating an index from 0 to 52-1, and then swapping the
 * card with the card at the random index.  The result should
 * be a well shuffled and randomly shuffled deck of cards.
 *
 * @param deck An array of 52 Card structure items is passed in as input.
 *   We shuffle the deck in place randomly.  Since arrays are passed
 *   by reference (to the base address of the array), the resulting
 *   shuffle will be seen by the caller upon return from this function.
 */
// task 5 implementation goes here
