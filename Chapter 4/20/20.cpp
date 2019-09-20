/*
  a. Legal, will increment iter but dereference the old value.
  b. Illegal, will attempt to increment what iter points to but iter points to
     a string.
  c. Illegal because the member access operator has higher precedence than
     dereference so it will attempt to call the member function empty() for
     an iter object but iter has no empty method.
  d. Legal, accesses the vector's empty() member function through an iterator
     pointing to an element in it.
  e. Illegal, because it will attempt to increment what iter poitns to but iter points to a string.
  f. Legal, it will increment iter to point to the next string but check if
     the string it points to is empty.
 */
