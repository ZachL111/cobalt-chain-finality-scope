#ifndef DOMAIN_REVIEW_H
#define DOMAIN_REVIEW_H

typedef struct {
    int signal;
    int slack;
    int drag;
    int confidence;
} DomainReview;

int domain_review_score(DomainReview item);
const char *domain_review_lane(DomainReview item);

#endif
