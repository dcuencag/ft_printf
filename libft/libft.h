/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:24:52 by dancuenc          #+#    #+#             */
/*   Updated: 2025/03/12 15:34:34 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <aio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>
/// @brief The type of a linked list element
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/**
 * Check if the character is an alphabetic character
 * @param c The character to check
 * @return 1 if the character is an alphabetic character, 0 otherwise
 */
int		ft_isalpha(int c);

/**
 * Check if the character is a digit
 * @param c The character to check
 * @return 1 if the character is a digit, 0 otherwise
 */
int		ft_isdigit(int c);

/**
 * Check if the character is an alphabetic or numeric character
 * @param c The character to check
 * @return 1 if the character is an alphabetic or numeric character, 0 otherwise
 */
int		ft_isalnum(int c);

/**
 * Check if the character is a valid ASCII character
 * @param c The character to check
 * @return 1 if the character is a valid ASCII character, 0 otherwise
 */
int		ft_isascii(int c);

/**
 * Check if the character is a printable character
 * @param c The character to check
 * @return 1 if the character is a printable character, 0 otherwise
 */
int		ft_isprint(int c);

/**
 * Calculate the length of a string
 * @param str The string to calculate the length of
 * @return The length of the string
 */
int	ft_strlen(const char *str);

/**
 * Fill a block of memory with a specified value
 * @param pointer The pointer to the block of memory
 * @param value The value to fill the memory with
 * @param size The size of the memory block
 * @return A pointer to the memory block
 */
void	*ft_memset(void *pointer, int value, int size);

/**
 * Set a block of memory to zero
 * @param pointer The pointer to the block of memory
 * @param size The size of the memory block
 */
void	ft_bzero(void *pointer, int size);

/**
 * Copy a block of memory from source to destination
 * @param dest The destination memory block
 * @param src The source memory block
 * @param n The number of bytes to copy
 * @return A pointer to the destination memory block
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * Copy a block of memory from source to destination, handling overlapping memory
 * @param dest The destination memory block
 * @param src The source memory block
 * @param n The number of bytes to copy
 * @return A pointer to the destination memory block
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * Copy a string from source to destination, with a specified size
 * @param dst The destination string
 * @param src The source string
 * @param size The size of the destination string
 * @return The length of the source string
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * Concatenate a string from source to destination, with a specified size
 * @param dst The destination string
 * @param src The source string
 * @param size The size of the destination string
 * @return The length of the concatenated string
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * Convert a character to uppercase
 * @param c The character to convert
 * @return The uppercase character
 */
int		ft_toupper(int c);

/**
 * Convert a character to lowercase
 * @param c The character to convert
 * @return The lowercase character
 */
int		ft_tolower(int c);

/**
 * Find the first occurrence of a character in a string
 * @param s The string to search
 * @param c The character to find
 * @return A pointer to the first occurrence of the character in the string,
 *  or NULL if not found
 */
char	*ft_strchr(const char *s, int c);

/**
 * Find the last occurrence of a character in a string
 * @param s The string to search
 * @param c The character to find
 * @return A pointer to the last occurrence of the character in the string,
 *  or NULL if not found
 */
char	*ft_strrchr(const char *s, int c);

/**
 * Compare two strings up to a specified number of characters
 * @param s1 The first string to compare
 * @param s2 The second string to compare
 * @param n The maximum number of characters to compare
 * @return An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * Find the first occurrence of a character in a block of memory
 * @param s The block of memory to search
 * @param c The character to find
 * @param n The number of bytes to search
 * @return A pointer to the first occurrence of the character
 *  in the block of memory, or NULL if not found
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * Compare two blocks of memory up to a specified number of bytes
 * @param s1 The first block of memory to compare
 * @param s2 The second block of memory to compare
 * @param n The maximum number of bytes to compare
 * @return An integer less than, equal to, or greater than zero if s1 is found,
 *  respectively, to be less than, to match, or be greater than s2
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * Find the first occurrence of a substring in a string
 * @param big The string to search
 * @param little The substring to find
 * @param len The maximum number of characters to search
 * @return A pointer to the first occurrence of the substring in the string,
 *  or NULL if not found
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * Convert a string to an integer
 * @param nptr The string to convert
 * @return The converted integer
 */
int		ft_atoi(const char *nptr);

/**
 * Allocate and zero-initialize a block of memory
 * @param count The number of elements to allocate
 * @param size The size of each element
 * @return A pointer to the allocated memory block
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * Duplicate a string
 * @param s1 The string to duplicate
 * @return A pointer to the duplicated string
 */
char	*ft_strdup(const char *s1);

/**
 * Extract a substring from a string
 * @param s The string to extract from
 * @param start The starting index of the substring
 * @param len The length of the substring
 * @return A pointer to the extracted substring
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * Concatenate two strings
 * @param s1 The first string
 * @param s2 The second string
 * @return A pointer to the concatenated string
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * Trim characters from the beginning and end of a string
 * @param s1 The string to trim
 * @param set The set of characters to trim
 * @return A pointer to the trimmed string
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * Split a string into an array of substrings based on a delimiter
 * @param s The string to split
 * @param c The delimiter character
 * @return An array of pointers to the substrings
 */
char	**ft_split(char const *s, char c);

/**
 * Convert an integer to a string
 * @param n The integer to convert
 * @return A pointer to the converted string
 */
char	*ft_itoa(int n);

/**
 * Apply a function to each character of a string
 * @param s The string to apply the function to
 * @param f The function to apply
 * @return A pointer to the modified string
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * Apply a function to each character of a string, with the index
 * @param s The string to apply the function to
 * @param f The function to apply
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * Write a character to a file descriptor
 * @param c The character to write
 * @param fd The file descriptor
 */
void	ft_putchar_fd(char c, int fd);

/**
 * Write a string to a file descriptor
 * @param s The string to write
 * @param fd The file descriptor
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * Write a string followed by a newline to a file descriptor
 * @param s The string to write
 * @param fd The file descriptor
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * Write an integer to a file descriptor
 * @param nb The integer to write
 * @param fd The file descriptor
 */
int	ft_putnbr_fd(int nb, int fd);

/**
 * Create a new element for a linked list
 * @param content The content of the element
 * @return A pointer to the new element
 */
t_list	*ft_lstnew(void *content);

/**
 * Add an element to the beginning of a linked list
 * @param lst The linked list
 * @param new The new element to add
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * Get the number of elements in a linked list
 * @param lst The linked list
 * @return The number of elements in the linked list
 */
int		ft_lstsize(t_list *lst);

/**
 * Get the last element of a linked list
 * @param lst The linked list
 * @return A pointer to the last element of the linked list
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * Add an element to the end of a linked list
 * @param lst The linked list
 * @param new The new element to add
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * Delete a single element from a linked list
 * @param lst The element to delete
 * @param del The function to delete the content of the element
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * Delete all elements from a linked list
 * @param lst The linked list
 * @param del The function to delete the content of each element
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * Apply a function to each element of a linked list
 * @param lst The linked list
 * @param f The function to apply
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * Create a new linked list by applying a function
 * to each element of a linked list
 * @param lst The linked list
 * @param f The function to apply
 * @param del The function to delete the content of each element
 * @return A pointer to the new linked list
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/**
 * Convert an integer to a string in a specified base
 * @param nbr The integer to convert
 * @param base The base to convert to
 * @return A pointer to the converted string
 * @note The base must be between 2 and 16
 */
void	ft_putnbr_base(long int nbr, char *base);

#endif
