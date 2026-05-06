# Cobalt Chain Finality Scope Walkthrough

This walk-through keeps the domain vocabulary close to the data instead of burying it in prose.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 160 | ship |
| stress | nonce pressure | 199 | ship |
| edge | settlement risk | 189 | ship |
| recovery | proof depth | 165 | ship |
| stale | event finality | 207 | ship |

Start with `stale` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The useful comparison is `event finality` against `event finality`, not the raw score alone.
