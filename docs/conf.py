import sphinx_rtd_theme


project = "Beginning Arduino with PlatformIO"
copyright = "2021, Seth Fischer"
author = "Seth Fischer"

release = "0.1.0"

extensions = [
    "sphinx_rtd_theme",
]

templates_path = ["_templates"]

exclude_patterns = ["_build"]


html_theme = "sphinx_rtd_theme"
html_static_path = ["_static"]
