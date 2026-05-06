# cobalt-chain-finality-scope

`cobalt-chain-finality-scope` is a C project in blockchain tooling. Its focus is to implement a C blockchain tooling project for finality event replay, using fixture event logs and golden state snapshots.

## Why It Exists

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how event finality and settlement risk should influence a review result.

## Cobalt Chain Finality Scope Review Notes

For a quick review, compare `event finality` with `event finality` before reading the middle cases.

## Features

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/cobalt-chain-finality-walkthrough.md` walks through the case spread.
- The C code includes a review path for `event finality` and `event finality`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture Notes

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The added C path is deliberately direct, with fixtures doing most of the explaining.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Tests

The check exercises the source code and the review fixture. `stale` is the high score at 207; `baseline` is the low score at 160.

## Limitations And Roadmap

The fixture set is small enough to audit by hand. The next useful expansion is malformed input coverage, not extra surface area.
