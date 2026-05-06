#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {51, 38, 22, 86};
    assert(domain_review_score(item) == 160);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
