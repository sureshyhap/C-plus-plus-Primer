/*
  Illegal because can't initialize a pointer with an integer. It can be made
  legal by putting constexpr at the front so that the value of null will
  represent a literal zero that can be assigned to a pointer.
 */
