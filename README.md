# Libft

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
Allocates and returns a “fresh” memory area. The memory allocated is initialized to 0. Returns the allocated memory area. If the allocation fails, the function returns NULL. 
- Uses ft_bzero
```c
void	*ft_memalloc(size_t size);
```

### ft_memdel
Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.
```c
void	ft_memdel(void **ap);
```

### ft_strnew
Allocates and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at ’\0’. If the allocation fails the function returns NULL. Returns the string allocated and initialized to 0. 
- Uses ft_memalloc
```c
char	*ft_strnew(size_t size);
```

### ft_strdel
Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL. 
- Uses ft_memdel
```c
void	ft_strdel(char **as);
```

### ft_strclr
Sets every character of the string to the value ’\0’.
```c
void	ft_strclr(char *s);
```

### ft_striter
Applies the function “f” to each character of the string passed as argument. Each character is passed by address to “f” to be modified if necessary.
```c
void	ft_striter(char *s, void (*f)(char *));
```

### ft_striteri
Applies the function “f” to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to "f" to be modified if necessary.
```c
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
```

### ft_strmap
Applies the function “f” to each character of the string given as argument to create a “fresh” new string resulting from the successive applications of “f”. Uses ft_strnew and ft_strlen. Returns the “fresh” string created from the successive applications of “f”.
```c
char	*ft_strmap(char const *s, char (*f)(char));
```

### ft_strmapi
Applies the function “f” to each character of the string passed as argument by giving its index as first argument to create a “fresh” new string resulting from the successive applications of “f”. Returns the “fresh” string created from the successive applications of “f”. 
- Uses ft_strnew
- Uses ft_strlen
- Uses ft_striteri
```c
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

### ft_strequ
Lexicographical comparison between “s1” and “s2”. If the 2 strings are identical the function returns 1, or 0 otherwise. 
- Uses ft_strcmp
```c
int	ft_strequ(char const *s1, char const *s2);
```

### ft_strnequ
Lexicographical comparison between “s1” and “s2” up to “n” characters or until a ’\0’ is reached. If the 2 strings are identical, the function returns 1, or 0 otherwise. 
- Uses ft_strncmp
```c
int	ft_strnequ(char const *s1, char const *s2, size_t n);
```

### ft_strsub
Allocates and returns a “fresh” substring from the string given as argument. The substring begins at index “start” and is of size “len”. If “start” and “len” aren’t referring to a valid substring, the behavior is undefined. Returns the value of the substring. If the allocation fails, the function returns NULL.
- Uses ft_strlen
```c
char	*ft_strsub(char const *s, unsigned int start, size_t len);
```

### ft_strjoin
Allocates and returns a “fresh” string ending with ’\0’, the result of the concatenation of s1 and s2. If the allocation fails the function returns NULL. 
- Uses ft_strlen
```c
char		*ft_strjoin(char const *s1, char const *s2);
```

### ft_strtrim
Allocates and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. Will be considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a copy of “s”. If the allocation fails the function returns NULL. 
- Uses ft_strlen
- Uses ft_strnew
- Uses ft_strsub
```c
char	*ft_strtrim(char const *s);
```

### ft_strsplit
Allocates and returns an array of “fresh” strings (all ending with ’\0’, including the array itself) obtained by splitting s using the character c as a delimiter. If the allocation fails the function returns NULL. Example: ft_strsplit("*hello*fellow*students*", ’*’) returns the array ["hello", "fellow", "students"]. 
- Uses ft_wordcount
- Uses ft_strsub
```c
char	**ft_strsplit(char const *s, char c);
```

### ft_itoa
Allocates and returns a “fresh” string ending with ’\0’ representing the integer "n" given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL. 
- Uses ft_intlen
```c
char	*ft_itoa(long long n);
```

### ft_putchar
Outputs the character “c” to the standard output.
```c
void	ft_putchar(char c);
```

### ft_putstr
Outputs the string “s” to the standard output. 
- Uses ft_putchar
```c
void	ft_putstr(char const *s);
```

### ft_putendl
Outputs the string “s” to the standard output followed by a ’\n’. 
- Uses ft_putstr
```c
void	ft_putendl(char const *s);
```

### ft_putnbr
Outputs the integer “n” to the standard output. 
- Uses ft_putchar
- Uses ft_putnbr(recursively)
```c
void	ft_putnbr(int x);
```

### ft_putchar_fd
Outputs the char “c” to the file descriptor “fd”.
```c
void	ft_putchar_fd(char c, int fd);
```

### ft_putstr_fd
Outputs the string “s” to the file descriptor “fd”. 
- Uses ft_putchar_fd
```c
void	ft_putstr_fd(char const *s, int fd);
```

### ft_putendl_fd
Outputs the string “s” to the file descriptor “fd” followed by a ’\n’.
- Uses ft_putstr_fd
```c
void	ft_putendl_fd(char const *s, int fd);
```

### ft_putnbr_fd
Outputs the integer “n” to the file descriptor “fd”. 
- Uses ft_putchar_fd
- Uses ft_putnbr_fd(recursively)
```c
void	ft_putnbr_fd(int n, int fd);
```

## Functions that manipulate lists:

### ft_lstnew
Allocates and returns a “fresh” link. The variables content and content_size of the new link are initialized by copy of the parameters of the function. If the parameter content is nul, the variable content is initialized to NULL and the variable content_size is initialized to 0 even if the parameter content_size isn’t. The variable next is initialized to  NULL. If the allocation fails, the function returns NULL. Return value is the new link.
```c
t_list	*ft_lstnew(void const *content, size_t content_size);
```

### ft_lstdelone
Takes as a parameter a link’s pointer address and frees the memory of the link’s content using the function "del" given as a parameter, then frees the link’s memory using free(3). The memory of next must not be freed under any circumstance. Finally, the pointer to the link that was just freed must be set to NULL.
```c
void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
```

### ft_lstdel
Takes as a parameter the adress of a pointer to a link and frees the memory of this link and every successors of that link using the functions del and free(3). Finally the pointer to the link that was just freed must be set to NULL.
```c
void	ft_lstdel(t_list **alst, void (*del)(void*, size_t));
```

### ft_lstadd
Adds the element "new" at the beginning of the list.
```c
void	ft_lstadd(t_list **alst, t_list *new);
```

### ft_lstiter
Iterates the list "lst" and applies the function "f" to each link.
```c
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
```

### ft_lstmap
Iterates the list "lst" and applies the function "f" to each link.
```c
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
```

## My custom functions:

### ft_abs
Finds the absolute value of "n".
```c
int		ft_abs(int n);
```

### ft_intlen
Finds the length (in characters) of "num". Example, ft_intlen(100) will return 3, while ft_intlen(-2345) returns 4.
```c
int	ft_intlen(long long num);
```

### ft_itoabase
Works the same way as ft_itoa, but it also takes "base" as a paramater, allowing you to carry out the conversion for any base. Made custome for ft_printf.
- Uses ft_strnew
- Uses ft_strcpy
```c
char		*ft_itoabase(long long value, int base);
```

### ft_uitoabase
Works the same way as ft_itoabase, but it returns its value as unsigned. Made custome for ft_printf.
- Uses ft_strnew
```c
char		*ft_uitoabase(unsigned long long value, int base);
```

### ft_lstaddend
Adds the element "new" at the end of the list.
```c
void	ft_lstaddend(t_list **alst, t_list *new);
```

### ft_strnlen
Returns the number of bytes in the string pointed to by “s”, excluding the terminating null bye ('\0'), but at most “maxlen.” Returns either the same result as strlen() or maxlen, whichever is smaller.
```c
size_t	ft_strnlen(const char *s, size_t maxlen);
```

### ft_wordcount
Counts and returns the number of words in a string. Made custom for ft_strsplit.
```c
int		ft_wordcount(const char *s, char c);
```

### get_next_line
✅ Project score: 123/100 ✅  
Returns a line read from a file descriptor
```c
int get_next_line(const int fd, char **line);
```

## Coming soon:
### ft_printf
✅ Project score: 109/100 ✅  
A recoded version of libc’s printf function
```c
int		ft_printf(const char *format, ...);
```

