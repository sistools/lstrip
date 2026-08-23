# lstrip <!-- omit in toc -->

Strips leading whitespace from all input lines


![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)
[![License](https://img.shields.io/badge/License-BSD_3--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
[![GitHub release](https://img.shields.io/github/v/release/sistools/lstrip.svg)](https://github.com/sistools/lstrip/releases/latest)
[![Last Commit](https://img.shields.io/github/last-commit/sistools/lstrip)](https://github.com/sistools/lstrip/commits/master)
[![CI](https://github.com/sistools/lstrip/actions/workflows/ci.yml/badge.svg)](https://github.com/sistools/lstrip/actions/workflows/ci.yml)


## Table of Contents <!-- omit in toc -->

- [Introduction](#introduction)
- [Installation](#installation)
- [Components](#components)
- [Examples](#examples)
- [Project Information](#project-information)
  - [Where to get help](#where-to-get-help)
  - [Contribution guidelines](#contribution-guidelines)
  - [Dependencies](#dependencies)
    - [Tests-only Dependencies](#tests-only-dependencies)
  - [Related projects](#related-projects)
  - [License](#license)


## Introduction

**lstrip** is a small, standalone utility program that **strips leading whitespace from lines in its input**.


## Installation

Detailed instructions - via **CMake**, via bundling, via custom makefile
parameters - are provided in the accompanying [INSTALL.md](./INSTALL.md)
file.


## Components

The project creates a single executable program, **lstrip**.


## Examples

```bash
$ echo "abc" | lstrip
abc
$ echo "  def" | lstrip
def
$ echo -e "abc\n  def\n\tghi" | lstrip
abc
def
ghi
```


## Project Information


### Where to get help

[GitHub Page](https://github.com/sistools/lstrip "GitHub Page")


### Contribution guidelines

Defect reports, feature requests, and pull requests are welcome on [the **lstrip** GitHub page](https://github.com/sistools/lstrip).


### Dependencies

**lstrip** depends on:

* [**CLASP**](https://github.com/synesissoftware/CLASP);
* [**STLSoft**](https://github.com/synesissoftware/STLSoft);


#### Tests-only Dependencies

For unit-testing, **lstrip** depends additionally on:

* [**Catch2**](https://github.com/catchorg/catch2) - for the unit-test specification and results assessment;
* [**xTests**](https://github.com/synesissoftware/xTests) - for utility components (such as `xtests::cpp::util::temp_file`);


### Related projects

Other **sistools** projects include:

* [**chomp**](https://github.com/sistools/chomp);
* [**errni**](https://github.com/sistools/errni) (errno on all platforms, and also GetLastError codes on Windows);
* [**lnunique**](https://github.com/sistools/lnunique);
* [**lslocales**](https://github.com/sistools/lslocales);
* [**mksock**](https://github.com/sistools/mksock) (Unix-only);
* [**ReadDebugString**](https://github.com/sistools/ReadDebugString) (Windows-only);
* [**realpath**](https://github.com/sistools/realpath) (Windows-only);
* [**rstrip**](https://github.com/sistools/rstrip);
* [**WriteDebugString**](https://github.com/sistools/WriteDebugString) (Windows-only);


### License

**lstrip** is released under the 3-clause BSD license. See [LICENSE](./LICENSE) for details.


<!-- ########################### end of file ########################### -->

