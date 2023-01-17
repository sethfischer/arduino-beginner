.PHONY: install-git-hooks
install-git-hooks:
	git config --local core.hooksPath 'git-hooks'

.PHONY: lint
lint: lint-c lint-python lint-shell lint-svg

.PHONY: lint-c lint-python lint-shell lint-svg
lint-c lint-python lint-shell lint-svg:
	./$@.sh
