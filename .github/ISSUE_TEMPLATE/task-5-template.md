---
name: 'Task 5: Implement `shuffleDeckOfCards()` Function'
about: Task 5 for Students
title: 'Task 5: Implement `shuffleDeckOfCards()` Function'
labels: enhancement
assignees: ''

---

**Description**

Write a function named `shuffleDeckOfCards()` to randomly shuffle
an array of `Card` items.  An array of 52 (`STANDARD_DECK_SIZE`) `Card` items
is passed in as the parameter to this function.  This is a `void` function, it
will not return an explicit result.  But as you have learned, arrays are
effecitvely passed by value, so when we randomly shuffle the cards in this
function, the caller will see a randomly shuffled deck when it returns.

**Suggested Solution**

1. Iterate over all of the cards in the array from index 0 to 
   index `STANDARD_DECK_SIZE - 1`
   - Randomly generate a number in the range from 0 to 51 to serve
     as the index of another card in the deck.
   - Swap the card at the index we are iterating with the card at the
     index we randomly generated.

**Additional Requirements**

- You are required to use the algorithm described here.  Iterate
  over each array index, randomly select another index in the
  array, and swap this index with the randomly selected index.

