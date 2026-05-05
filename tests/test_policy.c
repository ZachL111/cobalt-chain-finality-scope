#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {75, 95, 27, 20, 4};
    assert(score_signal(signal_case_1) == 84);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {88, 105, 9, 10, 8};
    assert(score_signal(signal_case_2) == 244);
    assert(strcmp(classify_signal(signal_case_2), "accept") == 0);
    Signal signal_case_3 = {69, 85, 24, 5, 12};
    assert(score_signal(signal_case_3) == 186);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
