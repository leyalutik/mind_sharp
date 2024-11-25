#include "timer.h"

void Timer::reset() {
    m_beg = std::chrono::high_resolution_clock::now();
}

double Timer::elapsed() const {
    return std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::high_resolution_clock::now() - m_beg).count();
}

