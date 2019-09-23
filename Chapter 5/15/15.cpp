/*
  a. ix is out of scope by the time the if is reached.

  int ix = 0;
  for (; ix != sz; ++ix) {
  
  }
  if (ix != sz) {
  
  }

  b. ix was not initialized so it has a garbage value.
  Also the a null statement is required at the front of
  the for parentheses.

  int ix = 0;
  for (; ix != sz; ++ix) {

  }

  c. If sz is not 0 initially, the loop will run forever
  because ix will never catch up to sz because you are
  increasing sz along with ix.

 */
