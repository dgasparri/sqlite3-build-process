print("""
clean_c_source.py

This script reads the C source file

../build/sqlite3.c

parses it and strips the constants SQLITE_NOINLINE,
SQLITE_PRIVATE whose use is incompatible with
the pycparser library.

It ignores the preprocessor directives (such as #define)
as that would break structures such as #ifdef

The parsed output is written to the destination file:

./sqlite3_clean.c

That file can be modified, and later preprocessed with:

  gcc -nostdinc -E -I../build -I../../pycparser/utils/fake_libc_include \\
  sqlite3_clean.c > sqlite3_pp.c

The sqlite3_pp.c resulting file can then be parsed with Python.

""")



import re

C_PREPROCESSOR_DIRECTIVES = (
        'define',
        'include',
        'ifdef',
        'endif',
        'if',
        'else'
        'ifndef',
        'undef',
        'pragma'
)

SEARCHED_CONSTANTS = (
        'SQLITE_NOINLINE',
        'SQLITE_PRIVATE'
)

line_n = 0
constants_n = {c:0 for c in SEARCHED_CONSTANTS}

try:
    f = open('../build/sqlite3.c','r', encoding='latin-1')
    sqlite3_c = f.read()
    f.close()
except Exception:
    print('Unable to open input file sqlite3.c, aborting')
    exit(1)



# Multiline regex had limitation in its ability to correctly
# ignore the directives
c_code_parts = re.split("\n",sqlite3_c)
for index, line in enumerate(c_code_parts):
    line_n += 1
    if '#' in line:
        has_directive = False
        sharp_pos = line.find('#')
        for pd in C_PREPROCESSOR_DIRECTIVES:
            pd_pos = line.find(pd)
            if sharp_pos < pd_pos:
                # probably a directive, skipping row
                has_directive = True
                break
        if has_directive:
            continue

    for constant in SEARCHED_CONSTANTS:
        pos = line.find(constant)
        if pos != -1:
            line = line[:pos] + line[pos + len(constant):]
            c_code_parts[index] = line
            constants_n[constant] += 1


try:
    f = open('./sqlite3_clean.c','w', encoding='latin-1')
    f.write("\n".join(c_code_parts))
    f.close()
except Exception:
    print('Unable to write output file sqlie3_clean.c, aborting')
    exit(1)


print("{} lines parsed".format(line_n))
for constant in constants_n:
    print("{}: deleted in {} lines".format(constant, constants_n[constant]))

 