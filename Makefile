.PHONY: git-hooks
git-hooks: .git/hooks/pre-commit .git/hooks/commit-msg

.git/hooks/%: git-hooks/%.sh
	install --mode=700 $< $@

.PHONY: lint
lint: lint-c lint-python lint-shell lint-svg

.PHONY: lint-c lint-python lint-shell lint-svg
lint-c lint-python lint-shell lint-svg:
	./$@.sh
