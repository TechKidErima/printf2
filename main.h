#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE  1024

/**
 * struct flags - struct containing flags
 * @plus: flag for + char
 * @space: flag for ' ' char
 * @hash: flag for thr # char
 *
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - chooses the correct function based on format specifier
 * @c: format specifier
 * @f: pointer to correct printing function
 *
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

int print_int(va_list 1, flags_t *f);
int print_hex_big(va_list 1, flags_t *f);
int print_binary(va_list 1, flags_t *f);
int print_octal(va_list 1, flags_t *f);
char *convert(unsigned long int num, int base, int lowercase);
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *str);
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);

#endif
