#ifndef TIMER_H
#define TIMER_H

#include <chrono>

class Timer {
private:
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double>;

    std::chrono::time_point<clock_t> m_beg;

public:
    Timer() : m_beg(clock_t::now()) {}
    void reset();
    double elapsed() const;
};

#endif // TIMER_H

