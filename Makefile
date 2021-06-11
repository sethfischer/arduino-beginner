.PHONY: lint
lint: lint-c lint-svg

.PHONY: lint-c lint-svg
lint-c lint-svg:
	./$@.sh
