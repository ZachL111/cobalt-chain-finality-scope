#ifndef POLICY_H
#define POLICY_H

typedef struct {
    int demand;
    int capacity;
    int latency;
    int risk;
    int weight;
} Signal;

int score_signal(Signal signal);
const char *classify_signal(Signal signal);

#endif
