#include "Classes.h"


void Counter::increment() { ++x; }
void Counter::decrement() { --x; }
int Counter::checkState() { return x; }
Counter::Counter() { x = 1; }
Counter::Counter(int x) { this->x = x; }
