# Review Journal

This journal records the domain cases that matter before widening the public API.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 160, lane `ship`
- `stress`: `nonce pressure`, score 199, lane `ship`
- `edge`: `settlement risk`, score 189, lane `ship`
- `recovery`: `proof depth`, score 165, lane `ship`
- `stale`: `event finality`, score 207, lane `ship`

## Note

A future change should add new cases before it changes the scoring rule.
