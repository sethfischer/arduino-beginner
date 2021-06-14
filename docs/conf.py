import subprocess
import sys

import sphinx_rtd_theme  # noqa: F401


def make_latex_logo():

    command = subprocess.run(["make", "latex-logo"], capture_output=True)

    sys.stdout.buffer.write(command.stdout)
    sys.stderr.buffer.write(command.stderr)


make_latex_logo()

project = "Beginning Arduino with PlatformIO"
copyright = "2021, Seth Fischer"
author = "Seth Fischer"

version = "0.1.0"
release = version


extensions = [
    "sphinx_rtd_theme",
    "sphinxcontrib.rsvgconverter",
]

templates_path = ["_templates"]

exclude_patterns = ["_build", ".venv"]


html_theme = "sphinx_rtd_theme"
html_static_path = ["_static"]

latex_elements = {
    "papersize": "a4paper",
}
latex_logo = "latex-logo.pdf"
