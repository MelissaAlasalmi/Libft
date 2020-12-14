# libft

✅ Project score: 122/100 ✅  
C programming usually allows you to access highly useful standard functions - Hive, on the other hand, does not.  
During this project, we took the time to re-write standard functions on our own and added them to our personal library. Throughout my studies at Hive, none of the projects I have completed would have been possible without this library! And over time, I have expanded this list of functions as I have added useful additions for more complex projects.  

## How to use it:
- There is a pre-compiled library, libft.a, at the root of the repo. You can add it to your project, and kickstart it by adding it into your includes!
- Feel free to also add or edit functions to meet your own needs, just don't forget to re-compile the library (via Makefile) to make it your own.

# So what's inside?

## Libc functions:

### ft_memset
Writes “len” bytes of value “c” (converted to an unsigned char) to the string “b”. Returns its first argument.
```c
void	*ft_memset(void *b, int c, size_t len);
```

### ft_bzero
Writes “n” zeroed bytes to the string “s”.  If “n” is zero, bzero() does nothing. 
- Uses ft_memset
```c
void	ft_bzero(void *s, size_t n);
```

### ft_memcpy
Copies “n” bytes from memory area “src” to memory area “dst”.  If “dst” and “src” overlap, behavior is undefined. Returns the original value of “dst”.
```c
void	*ft_memcpy(void *dst, const void *src, size_t n);
```

### ft_memccpy
Copies bytes from string “src” to string “dst”. If the character “c” (as converted to an unsigned char) occurs in the string “src”, the copy stops and a pointer to the byte after the copy of “c” in the string “dst” is returned.  Otherwise, “n” bytes are copied, and a NULL pointer is returned.
```c
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
```

### ft_memmove
Copies “len” bytes from string “src” to string “dst”. The two strings may overlap; the copy is always done in a non-destructive manner. Returns the original value of “dst”.
```c
void	*ft_memmove(void *dst, const void *src, size_t len);
```

### ft_memchr
Locates the first occurrence of “c” (converted to an unsigned char) in string “s”. Returns a pointer to the byte located, or NULL if no such byte exists within “n” bytes.
```c
void	*ft_memchr(const void *s, int c, size_t n);
```

### ft_memcmp
Compares byte string “s1” against byte string “s2”.  Both strings are assumed to be “n” bytes long. Returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes (treated as unsigned char values, so that '\200' is greater than '\0', for example).  Zero-length strings are always identical.
```c
int	ft_memcmp(const void *s1, const void *s2, size_t n);
```

### ft_strlen
Calculates the length of the string s, excluding the terminating null byte. Returns the number of characters that precede the terminating NULL character.
```c
size_t	ft_strlen(const char *s);
```

### ft_strdup
Allocates sufficient memory for a copy of the string “s1”, does the copy, and returns a pointer to it. The pointer may subsequently be used as an argument to the function free(3). If insufficient memory is available, NULL is returned and errno is set to ENOMEM. 
- Uses ft_strcpy
```c
char	*ft_strdup(const char *s1);
```

### ft_strcpy
Copies the string “src” to “dst” including the terminating '\0' character. Returns “dst”.
```c
char	*ft_strcpy(char *dst, const char *src);
```

### ft_strncpy
Copies at most “len” characters from “src” into “dst”.  If “src” is less than “len” characters long, the remainder of “dst” is filled with '\0' characters. Otherwise, “dst” is not terminated. Returns “dst”. 
- Uses ft_memset 
- Uses ft_memcpy
```c
char	*ft_strncpy(char *dst, const char *src, size_t len);
```

### ft_strcat
Appends a copy of the null-terminated string “s2” to the end of the null-terminated string “s1”, then adds a terminating '\0'.  The string “s1” must have sufficient space to hold the result. The source and destination strings should not overlap, as the behavior is undefined. Returns the pointer “s1”. 
- Uses ft_strlen
- Uses ft_strcpy
```c
char	*ft_strcat(char *s1, const char *s2);
```

### ft_strncat
Appends a copy of the null-terminated string “s2”, but not more than “n” characters from “s2”, to the end of the null-terminated string “s1”, then adds a terminating '\0'.  The string “s1” must have sufficient space to hold the result. The source and destination strings should not overlap, as the behavior is undefined. Returns the pointer “s1”. 
- Uses ft_strlen
- Uses ft_strcpy
- Uses ft_strncpy
```c
char	*ft_strncat(char *s1, const char *s2, size_t n);
```

### ft_strlcat
Copies and concatenates strings with the same input parameters and output result as snprintf(3). designed to be a safer, more consistent, and less error prone replacement for the easily misused functions strncpy(3) and strncat(3). strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room.  Note that room for the NUL should be included in “dstsize”. strlcpy() copies up to “dstsize” - 1 characters from the string “src” to “dst”, NUL-terminating the result if dstsize is not 0. strlcat() appends string src to the end of dst. It will append at most “dstsize” - strlen(dst) - 1 characters. It will then NUL-terminate, unless “dstsize” is 0 or the original “dst” string was longer than “dstsize” (in practice this should not happen as it means that either “dstsize” is incorrect or that “dst” is not a proper string). If the “src” and “dst” strings overlap, the behavior is undefined. 
- Uses ft_strlen 
- Uses ft_memcpy
```c
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
```

### ft_strchr
Locates the first occurrence of “c” (converted to a char) in the string pointed to by “s”.  The terminating null character is considered to be part of the string; therefore if “c” is '\0', the function locates the terminating '\0'. Returns a pointer to the located character, or NULL if the character does not appear in the string.
```c
char	*ft_strchr(const char *s, int c);
```

### ft_strrchr
Is identical to strchr, except it locates the last occurrence of “c”. Returns a pointer to the located character, or NULL if the character does not appear in the string. 
- Uses ft_strlen
```c
char	*ft_strrchr(const char *s, int c);
```

### ft_strstr
Locates the first occurrence of the null-terminated string “needle” in the null-terminated string “haystack”.  If “needle” is an empty string, “haystack” is returned; if needle occurs nowhere in “haystack”, NULL is returned; otherwise a pointer to the first character of the first occurrence of “needle” is returned.
```c
char	*ft_strstr(const char *haystack, const char *needle);
```

### ft_strnstr
Locates the first occurrence of the null-terminated string “needle” in the string “haystack”, where not more than “len” characters are searched. Characters that appear after a '\0' character are not searched. It should only be used when portability is not a concern. If “needle” is an empty string, “haystack” is returned; if “needle” occurs nowhere in “haystack”, NULL is returned; otherwise a pointer to the first character of the first occurrence of “needle” is returned. 
- Uses ft_strlen
- Uses ft_memcmp
```c
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
```

### ft_strcmp
Lexicographically compares the null-terminated strings “s1” and “s2”. Returns an integer greater than, equal to, or less than 0, according as the string “s1” is greater than, equal to, or less than the string “s2”. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.
```c
int	ft_strcmp(const char *s1, const char *s2);
```

### ft_strncmp
Lexicographically compares the null-terminated strings “s1” and “s2”, but not more than “n” characters. Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a '\0' character are not compared. Returns an integer greater than, equal to, or less than 0, according as the string “s1” is greater than, equal to, or less than the string “s2”. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.
```c
int	ft_strncmp(const char *s1, const char *s2, size_t n);
```

### ft_atoi
Converts the initial portion of the string pointed to by “str” to “int” representation. Returns the result.
```c
int		ft_atoi(const char *str);
```

### ft_isalpha
Tests for any character for which isupper(3) or islower(3) is true. The value of the argument must be representable as an unsigned char or the value of EOF. In the ASCII character set, this includes characters preceded by their numeric values, in octal. Returns zero if the character tests false and returns non-zero if the character tests true."
```c
int	ft_isalpha(int c);
```

### ft_isdigit
Tests for a decimal digit character. Regardless of locale, this includes the following characters only: 0123456789. The isnumber() function behaves similarly to isdigit(), but may recognize additional characters, depending on the current locale setting. The value of the argument must be representable as an unsigned char or the value of EOF. Returns zero if the character tests false and return non-zero if the character tests true.
*/
```c
int	ft_isdigit(int c);
```

### ft_isalnum
Tests for any character for which isalpha(3) or isdigit(3) is true. The value of the argument must be representable as an unsigned char or the value of EOF. In the ASCII character set, this characters preceded by their numeric values, in octal. Returns zero if the character tests false and returns non-zero if the character tests true.
```c
int	ft_isalnum(int c);
```

### ft_isascii
Tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.
```c
int	ft_isascii(int c);
```

### ft_isprint
Tests for any printing character, including space (' ').  The value of the argument must be representable as an unsigned char or the value of EOF. In the ASCII character set, this includes characters preceded by their numeric values, in octal. Returns zero if the character tests false and returns non-zero if the character tests true.
```c
int	ft_isprint(int c);
```

### ft_toupper
Converts a lower-case letter to the corresponding upper-case letter. The argument must be representable as an unsigned char or the value of EOF. If the argument is a lower-case letter, the toupper() function returns the corresponding upper-case letter if there is one; otherwise, the argument is returned unchanged.
```c
int	ft_toupper(int c);
```

### ft_tolower
Converts an upper-case letter to the corresponding lower-case letter. The argument must be representable as an unsigned char or the value of EOF. If the argument is an upper-case letter, the tolower() function returns the corresponding lower-case letter if there is one; otherwise, the argument is returned unchanged.
```c
int	ft_tolower(int c);
```


## Additional functions:

### ft_memalloc

```c

```

### ft_memdel

```c

```

### ft_strnew

```c

```

### ft_strdel

```c

```

### ft_strclr

```c

```

### ft_striter

```c

```

### ft_striteri

```c

```

### ft_strmap

```c

```

### ft_strmapi

```c

```

### ft_strequ

```c

```

### ft_strnequ

```c

```

### ft_strsub

```c

```

### ft_strjoin

```c

```

### ft_strtrim

```c

```

### ft_strsplit

```c

```

### ft_itoa

```c

```

### ft_putchar

```c

```

### ft_putstr

```c

```

### ft_putendl

```c

```

### ft_putnbr

```c

```

### ft_putchar_fd

```c

```

### ft_putstr_fd

```c

```

### ft_putendl_fd

```c

```

### ft_putnbr_fd

```c

```


## Functions that manipulate lists:

### ft_lstnew

```c

```

### ft_lstdelone

```c

```

### ft_lstdel

```c

```

### ft_lstadd

```c

```

### ft_lstiter

```c

```

### ft_lstmap

```c

```


## My custom functions:

