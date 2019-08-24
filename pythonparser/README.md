# Python parsing of the sqlite3.c file

This section is designed to prepare the amalgamation file sqlite3.c to be used with the Python [pycparser library](https://github.com/eliben/pycparser). 

The pycparser library is able to parse C source code so as to be able to perform any kind of automatic analysis on it

However, the pycparser library has difficulties in interpreting some C preprocessor directives. Specifically, the function-modifying SQLITE_PRIVATE and SQLITE_NOINLINE constants are not accepted by pycparser.

To make the source code parseable, it must be first cleaned with the script clean_c_source.py.

clean_c_source.py reads the file ../build/sqlite3.c, strips the undesired constants.

clean_c_source.py ignores the preprocessor directives (such as #define) as that would break structures such as #ifdef

The cleaned output is written to the destination file:

./sqlite3_clean.c

That file can be modified, and later preprocessed with:

  gcc -nostdinc -E -I../build -I../pycparser/utils/fake_libc_include \\
  sqlite3_clean.c > sqlite3_pp.c

The sqlite3_pp.c resulting file can then be parsed with Python.

# How to obtain a parseable copy of the sqlite3.c file

The first preprequisite is that you have a compiled amalgamation file at

\[root directory\]/build/sqlite3.c

That can be obtained with the normal procedures to compile and build sqlite3.

The second prerequisite is that you have a copy of the pycparser library in the pycparser directory. More specifically, the following file is needed:

\[root directory\]/pycparser/utils/fake_libc_include

The pycparser library can be downloaded or cloned from the official repository at https://github.com/eliben/pycparser

From the root directory,

```
cd pythonparser
python3 clean_c_source.py  ## it will output /pythonparser/sqlite3_clean.c
gcc -nostdinc -E -I../build -I../pycparser/utils/fake_libc_include \\
sqlite3_clean.c > sqlite3_pp.c  ## it will precompile the sqlite3.c file 
```

# How to parse the sqlite3_pp.c with Python

A prerequisite is that you have the precompiled sqlite3_pp.c file and the pycparser Python library installed.

A simple script would be:

```
import pycparser
ast = pycparser.parse_file('./sqlite3_pp.c')
```

The ast variable contains the parsed code of Sqlite amalgamation file sqlite3.c.

