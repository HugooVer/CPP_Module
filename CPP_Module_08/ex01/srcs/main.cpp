
#include "Span.hpp"

int main() {
    Span sp(5);  // Create a Span that can hold a maximum of 5 elements

    sp.insert(10);
    sp.insert(20);
    sp.insert(30);
    sp.insert(40);
    sp.insert(50);

    // The next insertion should fail because the limit is 5
    // sp.addNumber(60);  // This will trigger the error message in LimitedMultiset

    return 0;
}