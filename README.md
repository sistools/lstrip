# lstrip <!-- omit in toc -->

Strips leading whitespace from all input lines


## Table of Contents

- [Table of Contents](#table-of-contents)
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

Defect reports, feature requests, and pull requests are welcome on [the **cstring** GitHub page](https://github.com/sistools/lstrip).

### Dependencies

**lstrip** depends on:

* [**CLASP**](https://github.com/synesissoftware/CLASP);
* [**STLSoft 1.10**](https://github.com/synesissoftware/STLSoft-1.10);


#### Tests-only Dependencies

For unit-testing, **lstrip** depends additionally on:

* [**Catch2**](https://github.com/catchorg/catch2) - for the unit-test specification and results assessment;
* [**xTests**](https://github.com/synesissoftware/xTests) - for utility components (such as `xtests::cpp::util::temp_file`);


### Related projects

Other (similar) project include:

* [**chomp**](https://github.com/sistools/chomp)
* [**rstrip**](https://github.com/sistools/rstrip)


### License

**lstrip** is released under the 3-clause BSD license. See [LICENSE](./LICENSE) for details.


<!-- ########################### end of file ########################### -->

