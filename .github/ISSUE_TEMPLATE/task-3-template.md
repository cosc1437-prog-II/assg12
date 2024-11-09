---
name: 'Task 3: Implement `Card` Structure and `cardToString()` Function'
about: Task 3 for Students
title: 'Task 3: Implement `Card` Structure and `cardToString()` Function'
labels: enhancement
assignees: ''

---

**Description**

For this task, first declare a structure named `Card` as described
to represent a playing card in a standard deck of cards.  This structure
should have two member fields named `suit` and `face` that are of your
previously declared `Suit` and `Face` enumerated types.

Then implement a function named `cardToString()`.  This function takes
a `Card` data type as input and returns a `string` representation of the
playing card.

**Suggested Solution**


**Additional Requirements**

- You are required to pass in a `Card` as input to the function and
  return a `string` result.
- You are required to reuse the `faceToString()` and `cardToString()`
  functions when implementing this function.
- You are required to reuse the `Suit` and `Face` enumerated types
  in the `Card` structure.  
- You are required to name the member fields `suit` and `face`
  (lower case initial letter) respectively.
- You will need to access the member fields `suit` and `face` from the
  passed in card.
- You will need to concatenate the strings together as shown, putting
  and " of " string in between the face and suit strings.

