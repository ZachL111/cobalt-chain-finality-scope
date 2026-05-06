#include "domain_review.h"

int domain_review_score(DomainReview item) {
    return item.signal * 2 + item.slack + item.confidence - item.drag * 3;
}

const char *domain_review_lane(DomainReview item) {
    int score = domain_review_score(item);
    if (score >= 140) return "ship";
    if (score >= 105) return "watch";
    return "hold";
}
