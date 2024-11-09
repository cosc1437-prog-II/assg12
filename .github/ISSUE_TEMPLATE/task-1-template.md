---
name: 'Task 1: Implement `Suit` Enumeration and `suitToString()` Function'
about: Task 1 for Students
title: 'Task 1: Implement `Suit` Enumeration and `suitToString()` Function'
labels: enhancement, good first issue
assignees: ''

---

**Description**

First declare an enumerated type named `Suit` as described to represent
the suits in a standard deck of cards. 

Then implement a function named `suitToString()`.  This function takes
a `Suit` data type as input and returns a `string` representation
of the suit.


**Suggested Solution**


**Additional Requirements**

- You are required to order the suits in the indicated enumeration
  order (your tests will not work later on if not declared in the
  correct order).
- You are required to declare the `Suit` enumeration in the
  assignment library header file.  This is where most user data
  types should be declared, in a header file that will be included
  in other files.
- You are required to use a `switch` statement in your implementation
  and have a `default` case that detects and does something if an
  unknown `Suit` is created and passed to the function.
