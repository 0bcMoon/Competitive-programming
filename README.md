# Competitive Programming

A collection of C++ practice submissions and work in progress, primarily for Codeforces. Each source file is an independent program that reads problem input from standard input.

## Layout

- `Codeforces/solve/`: practice files grouped under their problem names.
- `Codeforces/`: additional submissions and work in progress.
- `include/debug.hpp`: local debugging helpers.

The collection includes unfinished templates; a file's location does not guarantee an accepted solution.

## Compile one solution

Use a C++ compiler and select the language standard required by the chosen file. For example:

```sh
g++ -std=c++17 -O2 -Wall -Wextra "Codeforces/solve/A. Quintomania.cpp" -o /tmp/quintomania
/tmp/quintomania < /path/to/input.txt
```

Quote filenames because some contain spaces or punctuation. Use the original problem statement for input/output requirements. There is no shared build system or automated judge in the repository.
