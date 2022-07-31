#include "../shell.h"

struct builtin_s builtins[] =
    {
        {"ver", ver},
};

int builtins_count = sizeof(builtins) / sizeof(struct builtin_s);