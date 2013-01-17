typedef __builtin_va_list va_list;
#define va_start(_a, _x) __builtin_va_start ((_a), (_x))
#define va_arg(_a, _t) __builtin_va_arg ((_a), (_t))
#define va_end(_a) __builtin_va_end (_a)
