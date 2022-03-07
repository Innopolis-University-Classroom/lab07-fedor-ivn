
// change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
#include <cstddef>

template<class T> void multiples (T& sum, T x, T n) {
    sum = 1;
    for (size_t i = 1; i <= n; i++) {
        sum += i * x;
    }
}
