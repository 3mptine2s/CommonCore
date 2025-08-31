#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function declarations for libft functions
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *str);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);

// Test functions
void test_isalpha() {
    printf("Testing ft_isalpha:\n");
    printf("ft_isalpha('a') = %d (expected: 1)\n", ft_isalpha('a'));
    printf("ft_isalpha('Z') = %d (expected: 1)\n", ft_isalpha('Z'));
    printf("ft_isalpha('5') = %d (expected: 0)\n", ft_isalpha('5'));
    printf("ft_isalpha('@') = %d (expected: 0)\n", ft_isalpha('@'));
    printf("\n");
}

void test_isdigit() {
    printf("Testing ft_isdigit:\n");
    printf("ft_isdigit('5') = %d (expected: 1)\n", ft_isdigit('5'));
    printf("ft_isdigit('0') = %d (expected: 1)\n", ft_isdigit('0'));
    printf("ft_isdigit('9') = %d (expected: 1)\n", ft_isdigit('9'));
    printf("ft_isdigit('a') = %d (expected: 0)\n", ft_isdigit('a'));
    printf("ft_isdigit('@') = %d (expected: 0)\n", ft_isdigit('@'));
    printf("\n");
}

void test_isalnum() {
    printf("Testing ft_isalnum:\n");
    printf("ft_isalnum('a') = %d (expected: 1)\n", ft_isalnum('a'));
    printf("ft_isalnum('Z') = %d (expected: 1)\n", ft_isalnum('Z'));
    printf("ft_isalnum('5') = %d (expected: 1)\n", ft_isalnum('5'));
    printf("ft_isalnum('@') = %d (expected: 0)\n", ft_isalnum('@'));
    printf("ft_isalnum(' ') = %d (expected: 0)\n", ft_isalnum(' '));
    printf("\n");
}

void test_isascii() {
    printf("Testing ft_isascii:\n");
    printf("ft_isascii('a') = %d (expected: 1)\n", ft_isascii('a'));
    printf("ft_isascii(0) = %d (expected: 1)\n", ft_isascii(0));
    printf("ft_isascii(127) = %d (expected: 1)\n", ft_isascii(127));
    printf("ft_isascii(128) = %d (expected: 0)\n", ft_isascii(128));
    printf("ft_isascii(-1) = %d (expected: 0)\n", ft_isascii(-1));
    printf("\n");
}

void test_isprint() {
    printf("Testing ft_isprint:\n");
    printf("ft_isprint('a') = %d (expected: 1)\n", ft_isprint('a'));
    printf("ft_isprint(' ') = %d (expected: 1)\n", ft_isprint(' '));
    printf("ft_isprint(31) = %d (expected: 0)\n", ft_isprint(31));
    printf("ft_isprint(127) = %d (expected: 0)\n", ft_isprint(127));
    printf("ft_isprint(32) = %d (expected: 1)\n", ft_isprint(32));
    printf("\n");
}

void test_strlen() {
    printf("Testing ft_strlen:\n");
    printf("ft_strlen(\"hello\") = %zu (expected: 5)\n", ft_strlen("hello"));
    printf("ft_strlen(\"\") = %zu (expected: 0)\n", ft_strlen(""));
    printf("ft_strlen(\"a\") = %zu (expected: 1)\n", ft_strlen("a"));
    printf("\n");
}

void test_memset() {
    printf("Testing ft_memset:\n");
    char str[10] = "hello";
    ft_memset(str, 'x', 3);
    printf("ft_memset result: %s (expected: xxxlo)\n", str);
    printf("\n");
}

void test_bzero() {
    printf("Testing ft_bzero:\n");
    char str[10] = "hello";
    ft_bzero(str, 3);
    printf("ft_bzero result: %s (first 3 chars should be null)\n", str);
    printf("\n");
}

void test_strcpy() {
    printf("Testing ft_strcpy:\n");
    char dst[10];
    char *result = ft_strcpy(dst, "hello");
    printf("ft_strcpy result: %s (expected: hello)\n", result);
    printf("\n");
}

void test_strncpy() {
    printf("Testing ft_strncpy:\n");
    char dst[10] = "abcdef";
    char *result = ft_strncpy(dst, "xyz", 2);
    printf("ft_strncpy result: %s (expected: xydef)\n", result);
    printf("\n");
}

void test_strcmp() {
    printf("Testing ft_strcmp:\n");
    printf("ft_strcmp(\"abc\", \"abc\") = %d (expected: 0)\n", ft_strcmp("abc", "abc"));
    printf("ft_strcmp(\"abc\", \"abd\") = %d (expected: negative)\n", ft_strcmp("abc", "abd"));
    printf("ft_strcmp(\"abd\", \"abc\") = %d (expected: positive)\n", ft_strcmp("abd", "abc"));
    printf("\n");
}

void test_strncmp() {
    printf("Testing ft_strncmp:\n");
    printf("ft_strncmp(\"abc\", \"abd\", 2) = %d (expected: 0)\n", ft_strncmp("abc", "abd", 2));
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d (expected: negative)\n", ft_strncmp("abc", "abd", 3));
    printf("\n");
}

void test_strcat() {
    printf("Testing ft_strcat:\n");
    char dst[20] = "hello";
    char *result = ft_strcat(dst, "world");
    printf("ft_strcat result: %s (expected: helloworld)\n", result);
    printf("\n");
}

void test_strncat() {
    printf("Testing ft_strncat:\n");
    char dst[20] = "hello";
    char *result = ft_strncat(dst, "world", 3);
    printf("ft_strncat result: %s (expected: hellowor)\n", result);
    printf("\n");
}

void test_strchr() {
    printf("Testing ft_strchr:\n");
    char *result = ft_strchr("hello", 'l');
    printf("ft_strchr(\"hello\", 'l') = %s (expected: llo)\n", result);
    result = ft_strchr("hello", 'x');
    printf("ft_strchr(\"hello\", 'x') = %s (expected: NULL)\n", result ? result : "NULL");
    printf("\n");
}

void test_strrchr() {
    printf("Testing ft_strrchr:\n");
    char *result = ft_strrchr("hello", 'l');
    printf("ft_strrchr(\"hello\", 'l') = %s (expected: lo)\n", result);
    printf("\n");
}

void test_strstr() {
    printf("Testing ft_strstr:\n");
    char *result = ft_strstr("hello world", "world");
    printf("ft_strstr(\"hello world\", \"world\") = %s (expected: world)\n", result);
    result = ft_strstr("hello world", "xyz");
    printf("ft_strstr(\"hello world\", \"xyz\") = %s (expected: NULL)\n", result ? result : "NULL");
    printf("\n");
}

void test_strnstr() {
    printf("Testing ft_strnstr:\n");
    char *result = ft_strnstr("hello world", "world", 11);
    printf("ft_strnstr(\"hello world\", \"world\", 11) = %s (expected: world)\n", result);
    result = ft_strnstr("hello world", "world", 5);
    printf("ft_strnstr(\"hello world\", \"world\", 5) = %s (expected: NULL)\n", result ? result : "NULL");
    printf("\n");
}

void test_atoi() {
    printf("Testing ft_atoi:\n");
    printf("ft_atoi(\"123\") = %d (expected: 123)\n", ft_atoi("123"));
    printf("ft_atoi(\"-123\") = %d (expected: -123)\n", ft_atoi("-123"));
    printf("ft_atoi(\"  123\") = %d (expected: 123)\n", ft_atoi("  123"));
    printf("ft_atoi(\"abc\") = %d (expected: 0)\n", ft_atoi("abc"));
    printf("\n");
}

void test_toupper() {
    printf("Testing ft_toupper:\n");
    printf("ft_toupper('a') = %c (expected: A)\n", ft_toupper('a'));
    printf("ft_toupper('A') = %c (expected: A)\n", ft_toupper('A'));
    printf("ft_toupper('5') = %c (expected: 5)\n", ft_toupper('5'));
    printf("\n");
}

void test_tolower() {
    printf("Testing ft_tolower:\n");
    printf("ft_tolower('A') = %c (expected: a)\n", ft_tolower('A'));
    printf("ft_tolower('a') = %c (expected: a)\n", ft_tolower('a'));
    printf("ft_tolower('5') = %c (expected: 5)\n", ft_tolower('5'));
    printf("\n");
}

void test_strdup() {
    printf("Testing ft_strdup:\n");
    char *result = ft_strdup("hello");
    printf("ft_strdup(\"hello\") = %s (expected: hello)\n", result);
    free(result);
    printf("\n");
}

void test_memcpy() {
    printf("Testing ft_memcpy:\n");
    char src[] = "hello";
    char dst[10];
    void *result = ft_memcpy(dst, src, 6);
    printf("ft_memcpy result: %s (expected: hello)\n", (char*)result);
    printf("\n");
}

void test_memmove() {
    printf("Testing ft_memmove:\n");
    char str[] = "hello";
    void *result = ft_memmove(str + 1, str, 4);
    printf("ft_memmove result: %s (expected: hhllo)\n", str);
    printf("\n");
}

void test_memchr() {
    printf("Testing ft_memchr:\n");
    char str[] = "hello";
    void *result = ft_memchr(str, 'l', 5);
    printf("ft_memchr(\"hello\", 'l', 5) = %s (expected: llo)\n", (char*)result);
    printf("\n");
}

void test_memcmp() {
    printf("Testing ft_memcmp:\n");
    printf("ft_memcmp(\"abc\", \"abc\", 3) = %d (expected: 0)\n", ft_memcmp("abc", "abc", 3));
    printf("ft_memcmp(\"abc\", \"abd\", 3) = %d (expected: negative)\n", ft_memcmp("abc", "abd", 3));
    printf("\n");
}

void test_strlcpy() {
    printf("Testing ft_strlcpy:\n");
    char dst[10];
    size_t result = ft_strlcpy(dst, "hello", 10);
    printf("ft_strlcpy result: %s, length: %zu (expected: hello, 5)\n", dst, result);
    printf("\n");
}

void test_strlcat() {
    printf("Testing ft_strlcat:\n");
    char dst[20] = "hello";
    size_t result = ft_strlcat(dst, "world", 20);
    printf("ft_strlcat result: %s, length: %zu (expected: helloworld, 10)\n", dst, result);
    printf("\n");
}

int main() {
    printf("=== LIBFT FUNCTION TESTS ===\n\n");
    
    test_isalpha();
    test_isdigit();
    test_isalnum();
    test_isascii();
    test_isprint();
    test_strlen();
    test_memset();
    test_bzero();
    test_strcpy();
    test_strncpy();
    test_strcmp();
    test_strncmp();
    test_strcat();
    test_strncat();
    test_strchr();
    test_strrchr();
    test_strstr();
    test_strnstr();
    test_atoi();
    test_toupper();
    test_tolower();
    test_strdup();
    test_memcpy();
    test_memmove();
    test_memchr();
    test_memcmp();
    test_strlcpy();
    test_strlcat();
    
    printf("=== TESTS COMPLETED ===\n");
    return 0;
} 