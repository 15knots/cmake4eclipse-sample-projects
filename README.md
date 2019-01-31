# Abstract
Example Eclipse projects demonstrating CDT project settings for using [cmake4eclipse](https://github.com/15knots/cmake4eclipse).
# Usage
Just clone this repository and import the projects of your interest into your Eclipse workbench.
With [cmake4eclipse  install](https://marketplace.eclipse.org/content/cmake4eclipse)ed, each of the projects should build out of the box (except C-in-docker, cuda, gnucash).

**NOTE / WTF**: Due to a [regression bug in CDT](https://bugs.eclipse.org/bugs/show_bug.cgi?id=530708), the _Preprocessor Include Path and Macros_ provider settings of a project get reset when it is imported.
Additionally, the bug will cause CDT to persist the modified project settings on project import.
Feel free to vote for that bug!

As a consequence, cmake4eclipse`s claim _Co-workers can just check out the source and and build_ does no longer hold; co-workers (You) will have to manually re-enable the CMAKE_EXPORT_COMPILE_COMMANDS parsers to see all Macros and Include paths in your workbench. (It is safe to disable any other provider.)
