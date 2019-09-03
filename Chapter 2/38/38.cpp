/*
  They differ in how they handle top level consts and references.
  int a = 0;
  decltype(a) b = 0; auto b = 0;
  decltype((a)) b = 0; auto b = 0;
 */
