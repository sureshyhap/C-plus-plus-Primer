/*
   The C-string "9-999-99999-9" is converted to a C++ string.
   
   The string null_isbn is implicitly used to construct item1.

   Only one type conversion is allowed so this will not work (it tries to
   convert C-string to C++ string and then to Sales_data object).

   If the Sales_data constructors are explicit, the second conversion will be
   invalid.
 */
