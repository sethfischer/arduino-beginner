============
Contributing
============

|commitizen-friendly| |code-style-black|


Code style
----------

:Python:
    `Black`_
:SVG:
    `Scour`_
:Cpp:
    `clang-format`_
:Prose:
    `semantic linefeeds`_ (also `sembr.org`_)
:Commit:
    `Commitizen`_


Commit message guidelines
-------------------------

The `Conventional Commits`_ specification is used when formatting commit messages which are used to automatically generate the changelog.
In addition, following the specification results in readable messages that are easy to follow when looking through the project history.


Commit message format
~~~~~~~~~~~~~~~~~~~~~~

Each commit message consists of a header, a body and a footer.
The header has a special format that includes a type, a scope and a subject:

.. code-block:: text

    <type>(<scope>): <subject>
    <BLANK LINE>
    <body>
    <BLANK LINE>
    <footer>


The header is mandatory and the scope of the header is optional.

The footer should contain a `closing reference to an issue`_ if any.

See the `project history`_ for examples.


Revert
~~~~~~

If the commit reverts a previous commit, it should begin with ``revert:``, followed by the header of the reverted commit.
In the body it should say: ``This reverts commit <hash>.``, where the hash is the SHA of the commit being reverted.


Type
~~~~

Must be one of the following:

:build:
    Changes that affect the build system or external dependencies.
:ci:
    Changes to CI configuration files and scripts.
:docs:
    Developer documentation changes such as ``README.rst`` and ``CONTRIBUTING.rst``.
    **This doesn't include changes to the Sphinx documentation**.
:feat:
    A new feature.
:fix:
    A bug fix.
:perf:
    A code change that improves performance.
:refactor:
    A code change that neither fixes a bug nor adds a feature.
:style:
    Changes that do not affect the meaning of the code.
:test:
    Adding missing tests or correcting existing tests.


This documentation project and the changelog is intended for users of the documentation.
Hence, the types ``feat``, ``fix``, ``refactor``, and ``style`` are used in almost all situations where Conventional Commits would recommend the used of ``docs``.
The type ``docs`` is reserved for developer docs such as ``README.rst`` and ``CONTRIBUTING.rst``.


Scope
~~~~~

The following is the list of supported scopes:

:code:
    Arduino project code.
:docs:
    Documentation. Don't use with the ``docs`` type.


Subject
~~~~~~~

The subject contains a succinct description of the change:

* use the imperative, present tense: "change" not "changed" nor "changes"
* don't capitalise the first letter
* no dot (.) at the end


Body
~~~~

Just as in the subject, use the imperative, present tense: "change" not "changed" nor "changes".
The body should include the motivation for the change and contrast this with previous behaviour.


Footer
~~~~~~

The footer should contain any information about breaking changes and is also the place to reference GitHub issues that the commit closes.

Breaking changes should start with ``BREAKING CHANGE:`` followed by a space or two newlines.

.. _`Black`: https://github.com/psf/black
.. _`Scour`: https://github.com/scour-project/scour
.. _`clang-format`: https://clang.llvm.org/docs/ClangFormat.html
.. _`semantic linefeeds`: https://rhodesmill.org/brandon/2012/one-sentence-per-line/
.. _`sembr.org`: https://sembr.org/
.. _`Commitizen`: https://github.com/commitizen-tools/commitizen
.. _`Conventional Commits`: https://www.conventionalcommits.org/
.. _`closing reference to an issue`: https://docs.github.com/en/issues/tracking-your-work-with-issues/creating-issues/linking-a-pull-request-to-an-issue
.. _`project history`: https://github.com/sethfischer/arduino-pio/commits/main


.. |conventional-commits| image:: https://img.shields.io/badge/Conventional%20Commits-1.0.0-yellow.svg
    :target: https://conventionalcommits.org/
    :alt: Conventional Commits
.. |commitizen-friendly| image:: https://img.shields.io/badge/commitizen-friendly-brightgreen.svg
    :target: https://github.com/commitizen-tools/commitizen
    :alt: Commitizen friendly
.. |code-style-black| image:: https://img.shields.io/badge/code%20style-black-000000.svg
    :target: https://github.com/psf/black
    :alt: Code-style: black
