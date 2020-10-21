/*
  The code attempts to pluralize a word if it's not already plural. But + has higher precedence than ?: and ==. So it does std::string p1 = ((s + s[s.size() - 1]) == 's') ? "" : "s"; To fix this, do
                                                                                                                std::string p1 = s + ((s[s.size() - 1] == 's') ? "" : "s";
 */
