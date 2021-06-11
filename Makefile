.PHONY: lint
lint: lint-c lint-shell lint-svg

.PHONY: lint-c lint-shell lint-svg
lint-c lint-shell lint-svg:
	./$@.sh
