// rem will be initialized before base so using base to initialize it is undefined.

struct X {
  X(int i, int j) : rem(i % j), base(i) {}
};
