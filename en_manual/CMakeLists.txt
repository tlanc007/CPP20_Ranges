
# fmt hack for now, until more modern cmake style
include_directories (/usr/local/include)

link_directories(/usr/local/lib)

add_exe(predicate_remove predicate_remove.cpp)
