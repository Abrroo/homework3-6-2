#pragma once

class Counter
{
private:
    int x = 0;
public:
    void increment();
    void decrement();
    int checkState();
    Counter();
    Counter(int x);

};