# lstrip {#mainpage}

**lstrip** is a small, standalone utility that removes leading whitespace
from each input line.


## Components

| Unit | File(s) | Summary |
| ---- | ------- | ------- |
| Public API | `lstrip.h`, `lstrip.c` | Version macros and `sistool_lstrip()` |
| Program entry | `entry.c` | Command-line handling and program lifecycle |


## API

The `sistool_lstrip()` function reads from an input stream, removes leading
whitespace from each line, and writes the result to an output stream.


<!-- ########################### end of file ########################### -->
