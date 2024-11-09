---
name: 'Task 4: Implement `createDeckOfCards()` Function'
about: Task 4 for Students
title: 'Task 4: Implement `createDeckOfCards()` Function'
labels: enhancement
assignees: ''

---

**Description**

Implement a function named `createDeckOfCards()`.  This function does not
take any input parameters.  This function should dynamically create a new
array of `Card` data types.  The size of this array should be 52, which is
defined in a constant for you named `STANDARD_DECK_SIZE`.

**Suggested Solution**

1. Dynamically allocate an array of `Card` structures.  You should call this
   array `newDeck`.  Use the
   defined constant `STANDARD_DECK_SIZE` to allocate an array that will
   contain 52 cards.
2. Create an integer variable called `index` initialized to 0 before your loops.
3. Create nested for loops.
   - The outer for loop should iterate over the suits from DIAMONDS to SPADES.
     - The inner for loop should iterate over the faces from ACE to KING
	   - Inside of the two loops you need to initialize each `Card` structure
	     in the dynamically allocated array.
	   - The `index` tells you which card in your `newDeck` array you need
	     to initialize.  The loop variables will tell you the value of the suit
	     and face to initialize this card to.
	   - Increment the `index` by 1 after you initialize the indicated card.
4. After initializing the cards, return the pointer to the dynamically allocated
   base address of the array of `Card` you created.

**Additional Requirements**

- You are required to correctly dynamically allocate an array of `Card`
  structures.
- You are required to size this array correctly.  You are required to use the
  defined constant `STANDARD_DECK_SIZE` to allocate the correct sized array.
- You are required to return the pointer to the base of the dynamically
  allocated array from this function.
