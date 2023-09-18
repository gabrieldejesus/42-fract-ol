# Libft

This project is your very first project as a student at 42. You will need to recode a few functions of the C standard library as well as some other utility functions that you will use during your whole cursus.

## Skills

- Algorithms & AI
- Imperative programming

### Mandatory part

| Program name | Turn in files               | Makefile                     | External functs. | Libft authorized | Description                                                                                   |
| ------------ | --------------------------- | ---------------------------- | ---------------- | ---------------- | --------------------------------------------------------------------------------------------- |
| libft.a      | Makefile, libft.h, ft\_\*.c | NAME, all, clean, fclean, re | Detailed below   | n/a              | Write your own library: a collection of functions that will be a useful tool for your cursus. |

#### Technical considerations

- Declaring global variables is forbidden.
- If you need helper functions to split a more complex function, define them as static functions. This way, their scope will be limited to the appropriate file.
- Place all your files at the root of your repository.
- Turning in unused files is forbidden.
- Every .c files must compile with the flags -Wall -Wextra -Werror.
- You must use the command ar to create your library. Using the libtool command is forbidden.
- Your libft.a has to be created at the root of your repository

#### Part 1 - Libc functions

To begin, you must redo a set of functions from the libc. Your functions will have the
same prototypes and implement the same behaviors as the originals. They must comply
with the way they are defined in their man. The only difference will be their names. They
will begin with the ’ft\_’ prefix. For instance, strlen becomes ft_strlen.

> Some of the functions’ prototypes you have to redo use the ’restrict’ qualifier. This keyword is part of the c99 standard. It is therefore forbidden to include it in your own prototypes and to compile your code with the -std=c99 flag.

You must write your own function implementing the following original ones. They do not require any external functions:

- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi

In order to implement the two following functions, you will use **malloc()**:

- calloc
- strdup

#### Part 2 - Additional functions

In this second part, you must develop a set of functions that are either not in the libc,
or that are part of it but in a different form.

> Some of the following functions can be useful for writing the functions of Part 1.

| Program name | Prototype                                                       | Turn in files | Parameters                                                                                                                                                   | Return value                                     | External functs. | Description                                                                                                                                    |
| ------------ | --------------------------------------------------------------- | ------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------ | ---------------- | ---------------------------------------------------------------------------------------------------------------------------------------------- |
| ft_substr    | char *ft_substr(char const *s, unsigned int start, size_t len); | -             | s: The string from which to create the substring.<br>start: The start index of the substring in the string ’s’.<br>len: The maximum length of the substring. | The substring.<br/>NULL if the allocation fails. | malloc           | Allocates (with malloc(3)) and returns a substring from the string ’s’.<br>The substring begins at index ’start’ and is of maximum size ’len’. |

| Program name | Prototype                                          | Turn in files | Parameters                                       | Return value                                     | External functs. | Description                                                                                                     |
| ------------ | -------------------------------------------------- | ------------- | ------------------------------------------------ | ------------------------------------------------ | ---------------- | --------------------------------------------------------------------------------------------------------------- |
| ft_strjoin   | char *ft_strjoin(char const *s1, char const \*s2); | -             | s1: The prefix string.<br>s2: The suffix string. | The new string.<br>NULL if the allocation fails. | malloc           | Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |

| Program name | Prototype                                           | Turn in files | Parameters                                                                     | Return value                                         | External functs. | Description                                                                                                                                        |
| ------------ | --------------------------------------------------- | ------------- | ------------------------------------------------------------------------------ | ---------------------------------------------------- | ---------------- | -------------------------------------------------------------------------------------------------------------------------------------------------- |
| ft_strtrim   | char *ft_strtrim(char const *s1, char const \*set); | -             | s1: The string to be trimmed.<br>set: The reference set of characters to trim. | The trimmed string.<br>NULL if the allocation fails. | malloc           | Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |

| Program name | Prototype                                | Turn in files | Parameters                                                | Return value                                                                        | External functs. | Description                                                                                                                                                          |
| ------------ | ---------------------------------------- | ------------- | --------------------------------------------------------- | ----------------------------------------------------------------------------------- | ---------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ft_split     | char \**ft_split(char const *s, char c); | -             | s: The string to be split.<br>c: The delimiter character. | The array of new strings resulting from the split.<br>NULL if the allocation fails. | malloc, free     | Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer. |

| Program name | Prototype              | Turn in files | Parameters                 | Return value                                                          | External functs. | Description                                                                                                                            |
| ------------ | ---------------------- | ------------- | -------------------------- | --------------------------------------------------------------------- | ---------------- | -------------------------------------------------------------------------------------------------------------------------------------- |
| ft_itoa      | char \*ft_itoa(int n); | -             | n: the integer to convert. | The string representing the integer.<br>NULL if the allocation fails. | malloc           | Allocates (with malloc(3)) and returns a string representing the integer received as an argument.<br>Negative numbers must be handled. |

| Program name | Prototype                                                        | Turn in files | Parameters                                                                        | Return value                                                                                         | External functs. | Description                                                                                                                                                                                  |
| ------------ | ---------------------------------------------------------------- | ------------- | --------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------- | ---------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ft_strmapi   | char *ft_strmapi(char const *s, char (\*f)(unsigned int, char)); | -             | s: The string on which to iterate.<br>f: The function to apply to each character. | The string created from the successive applications of ’f’.<br>Returns NULL if the allocation fails. | malloc           | Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’. |

| Program name | Prototype                                                   | Turn in files | Parameters                                                                        | Return value | External functs. | Description                                                                                                                                                                               |
| ------------ | ----------------------------------------------------------- | ------------- | --------------------------------------------------------------------------------- | ------------ | ---------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ft_striteri  | void ft_striteri(char *s, void (*f)(unsigned int, char\*)); | -             | s: The string on which to iterate.<br>f: The function to apply to each character. | None         | None             | Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary. |

| Program name  | Prototype                           | Turn in files | Parameters                                                                | Return value | External functs. | Description                                             |
| ------------- | ----------------------------------- | ------------- | ------------------------------------------------------------------------- | ------------ | ---------------- | ------------------------------------------------------- |
| ft_putchar_fd | void ft_putchar_fd(char c, int fd); | -             | c: The character to output.<br>fd: The file descriptor on which to write. | None         | write            | Outputs the character ’c’ to the given file descriptor. |

| Program name | Prototype                            | Turn in files | Parameters                                                             | Return value | External functs. | Description                                          |
| ------------ | ------------------------------------ | ------------- | ---------------------------------------------------------------------- | ------------ | ---------------- | ---------------------------------------------------- |
| ft_putstr_fd | void ft_putstr_fd(char \*s, int fd); | -             | s: The string to output.<br>fd: The file descriptor on which to write. | None         | write            | Outputs the string ’s’ to the given file descriptor. |

| Program name  | Prototype                             | Turn in files | Parameters                                                             | Return value | External functs. | Description                                                                |
| ------------- | ------------------------------------- | ------------- | ---------------------------------------------------------------------- | ------------ | ---------------- | -------------------------------------------------------------------------- |
| ft_putendl_fd | void ft_putendl_fd(char \*s, int fd); | -             | s: The string to output.<br>fd: The file descriptor on which to write. | None         | write            | Outputs the string ’s’ to the given file descriptor followed by a newline. |

| Program name | Prototype                         | Turn in files | Parameters                                                                                                                                     | Return value | External functs. | Description                                           |
| ------------ | --------------------------------- | ------------- | ---------------------------------------------------------------------------------------------------------------------------------------------- | ------------ | ---------------- | ----------------------------------------------------- |
| ft_putnbr_fd | void ft_putnbr_fd(int n, int fd); | -             | n: The integer to output.<br>fd: The file descriptor on which to write.n: The integer to output.<br>fd: The file descriptor on which to write. | None         | write            | Outputs the integer ’n’ to the given file descriptor. |

### Bonus part

If you completed the mandatory part, do not hesitate to go further by doing this extra
one. It will bring bonus points if passed successfully.

Functions to manipulate memory and strings is very useful. But you will soon discover
that manipulating lists is even more useful.

You have to use the following structure to represent a node of your list. Add its
declaration to your libft.h file:

```c
typedef struct  s_list
{
  void          *content;
  struct s_list *next;
}               t_list;
```

The members of the **t_list** struct are:

- content: The data contained in the node.<br>
  - **void \*** allows to store any kind of data.
- next: The address of the next node, or NULL if the next node is the last one.

In your Makefile, add a make bonus rule to add the bonus functions to your libft.a.

> The bonus part will only be assessed if the mandatory part is PERFECT. Perfect means the mandatory part has been integrally done and works without malfunctioning. If you have not passed ALL the mandatory requirements, your bonus part will not be evaluated at all.

Implement the following functions in order to easily use your lists.

| Program name | Prototype                         | Turn in files | Parameters                                    | Return value | External functs. | Description                                                                                                                                                                            |
| ------------ | --------------------------------- | ------------- | --------------------------------------------- | ------------ | ---------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ft_lstnew    | t_list *ft_lstnew(void *content); | -             | content: The content to create the node with. | The new node | malloc           | Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL. |

| Program name    | Prototype                                         | Turn in files | Parameters                                                                                                                       | Return value | External functs. | Description                                       |
| --------------- | ------------------------------------------------- | ------------- | -------------------------------------------------------------------------------------------------------------------------------- | ------------ | ---------------- | ------------------------------------------------- |
| ft_lstadd_front | void ft_lstadd_front(t_list \**lst, t_list *new); | -             | lst: The address of a pointer to the first link of a list.<br>new: The address of a pointer to the node to be added to the list. | None         | None             | Adds the node ’new’ at the beginning of the list. |

| Program name | Prototype                     | Turn in files | Parameters                      | Return value           | External functs. | Description                           |
| ------------ | ----------------------------- | ------------- | ------------------------------- | ---------------------- | ---------------- | ------------------------------------- |
| ft_lstsize   | int ft_lstsize(t_list \*lst); | -             | lst: The beginning of the list. | The length of the list | None             | Counts the number of nodes in a list. |

| Program name | Prototype                        | Turn in files | Parameters                      | Return value          | External functs. | Description                        |
| ------------ | -------------------------------- | ------------- | ------------------------------- | --------------------- | ---------------- | ---------------------------------- |
| ft_lstlast   | t_list *ft_lstlast(t_list *lst); | -             | lst: The beginning of the list. | Last node of the list | None             | Returns the last node of the list. |

| Program name   | Prototype                                        | Turn in files | Parameters                                                                                                                       | Return value | External functs. | Description                                 |
| -------------- | ------------------------------------------------ | ------------- | -------------------------------------------------------------------------------------------------------------------------------- | ------------ | ---------------- | ------------------------------------------- |
| ft_lstadd_back | void ft_lstadd_back(t_list \**lst, t_list *new); | -             | lst: The address of a pointer to the first link of a list.<br>new: The address of a pointer to the node to be added to the list. | None         | None             | Adds the node ’new’ at the end of the list. |

| Program name | Prototype                                             | Turn in files | Parameters                                                                             | Return value | External functs. | Description                                                                                                                                                                     |
| ------------ | ----------------------------------------------------- | ------------- | -------------------------------------------------------------------------------------- | ------------ | ---------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ft_lstdelone | void ft_lstdelone(t_list *lst, void (*del)(void \*)); | -             | lst: The node to free.<br>del: The address of the function used to delete the content. | None         | free             | Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed. |

| Program name | Prototype                                              | Turn in files | Parameters                                                                                                           | Return value | External functs. | Description                                                                                                                                                       |
| ------------ | ------------------------------------------------------ | ------------- | -------------------------------------------------------------------------------------------------------------------- | ------------ | ---------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ft_lstclear  | void ft_lstclear(t_list \**lst, void (*del)(void \*)); | -             | lst: The address of a pointer to a node.<br>del: The address of the function used to delete the content of the node. | None         | free             | Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3).<br>Finally, the pointer to the list must be set to NULL. |

| Program name | Prototype                                         | Turn in files | Parameters                                                                                              | Return value | External functs. | Description                                                                       |
| ------------ | ------------------------------------------------- | ------------- | ------------------------------------------------------------------------------------------------------- | ------------ | ---------------- | --------------------------------------------------------------------------------- |
| ft_lstiter   | void ft_lstiter(t_list *lst, void (*f)(void \*)); | -             | lst: The address of a pointer to a node.<br>f: The address of the function used to iterate on the list. | None         | None             | Iterates the list ’lst’ and applies the function ’f’ on the content of each node. |

| Program name | Prototype                                                                 | Turn in files | Parameters                                                                                                                                                                                  | Return value                                   | External functs. | Description                                                                                                                                                                                                                              |
| ------------ | ------------------------------------------------------------------------- | ------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------- | ---------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ft_lstmap    | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void \*)); | -             | lst: The address of a pointer to a node.<br>f: The address of the function used to iterate on the list.<br>del: The address of the function used to delete the content of a node if needed. | The new list.<br>NULL if the allocation fails. | malloc, free     | Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed. |
