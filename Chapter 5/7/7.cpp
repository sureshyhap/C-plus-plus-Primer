/*
  a. Missing semicolon on second line.
  b. occurs is outside of the if scope.
  c. ival is not in scope for the second if. Even if it was in scope, ival would
  always be one by this stage so the second if will always execute.
  d. Should be ival == 0. ival = 0 evaluates the zero so the if is never run.
 */
