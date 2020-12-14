# libft
C programming usually allows you to access highly useful standard functions - Hive, on the other hand, does not.  
During this project, we took the time to re-write standard functions on our own and added them to our personal library. Throughout my studies at Hive, none of the projects I have completed would have been possible without this library! And over time, I have expanded this list of functions as I have added useful additions for more complex projects.  

## How to use it:
- There is a pre-compiled library, libft.a, at the root of the repo. You can add it to your repo, and kickstart it by adding it into your includes!
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
Compares byte string “s1” against byte string “s2”.  Both strings are assumed to be “n” bytes long. Returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes (treated as unsigned char values, so that `\200' is greater than `\0', for example).  Zero-length strings are always identical.
```c
int	ft_memcmp(const void *s1, const void *s2, size_t n)
```

### ft_strlen
Calculates the length of the string s, excluding the terminating null byte. Returns the number of characters that precede the terminating NULL character.
```c
size_t	ft_strlen(const char *s)
```

### ft_strdup
Allocates sufficient memory for a copy of the string “s1”, does the copy, and returns a pointer to it. The pointer may subsequently be used as an argument to the function free(3). If insufficient memory is available, NULL is returned and errno is set to ENOMEM. 
- Uses ft_strcpy.
```c
char	*ft_strdup(const char *s1)
```

### ft_strcpy
Copies the string “src” to “dst” including the terminating `\0' character. Returns “dst”.
```c
char	*ft_strcpy(char *dst, const char *src)
```

### ft_strncpy
Copies at most “len” characters from “src” into “dst”.  If “src” is less than “len” characters long, the remainder of “dst” is filled with `\0' characters. Otherwise, “dst” is not terminated. Returns “dst”. 
- Uses ft_memset 
- Uses ft_memcpy
```c
char	*ft_strncpy(char *dst, const char *src, size_t len)
```

### ft_strcat
Appends a copy of the null-terminated string “s2” to the end of the null-terminated string “s1”, then adds a terminating `\0'.  The string “s1” must have sufficient space to hold the result. The source and destination strings should not overlap, as the behavior is undefined. Returns the pointer “s1”. 
- Uses ft_strlen
- Uses ft_strcpy
```c
char	*ft_strcat(char *s1, const char *s2)
```

### ft_strncat
Appends a copy of the null-terminated string “s2”, but not more than “n” characters from “s2”, to the end of the null-terminated string “s1”, then adds a terminating `\0'.  The string “s1” must have sufficient space to hold the result. The source and destination strings should not overlap, as the behavior is undefined. Returns the pointer “s1”. 
- Uses ft_strlen
- Uses ft_strcpy
- Uses ft_strncpy
```c
char	*ft_strncat(char *s1, const char *s2, size_t n)
```

### ft_strlcat

```c

```

### ft_strchr

```c

```

### ft_strrchr

```c

```

### ft_strstr

```c

```

### ft_strnstr

```c

```

### ft_strcmp

```c

```

### ft_strncmp

```c

```

### ft_atoi

```c

```

### ft_isalpha

```c

```

### ft_isdigit

```c

```

### ft_isalnum

```c

```

### ft_isascii

```c

```

### ft_isprint

```c

```

### ft_toupper

```c

```

### ft_tolower

```c

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

