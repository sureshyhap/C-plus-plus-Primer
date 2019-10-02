/*
  It is valid to return a reference when what you're returning will exist after the function returns such as when returning a reference that was passed in (nonconst reference) or if it is a member function, returning *this (the object that is calling the member function which will exist after the function returns).
Also if a pointer (to an object outside the function) is passed in and the function returns a reference to the dereferenced pointer, the value of what the pointer points to can be assigned as a LValue function statement.

A reference to const is the same but it can also return const& parameters that were passed in (unlike with a normal reference).
)
 */
