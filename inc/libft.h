/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 11:31:58 by rhallste          #+#    #+#             */
/*   Updated: 2017/11/03 14:33:14 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

# define MIN(a, b) ((a < b) ? a : b)
# define MAX(a, b) ((a > b) ? a : b)

size_t				ft_arraylen(void *array);
int					ft_atoi(char const *str);
void				ft_bzero(void *s, size_t n);
int					ft_digitcount(unsigned int n);
int					ft_digitcount_base(unsigned int n, int base);
void				ft_free_2d_array(void ***array, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
char				*ft_itoa(int n);
char				*ft_itoa_base(int n, int base);
int					ft_isupper(int c);
t_list				*ft_lst_itemcpy(t_list *item);
t_list				*ft_lst_swap(t_list **lst_start, int fi, int si);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstdup(t_list *item);
void				ft_lstiter(t_list *lst, void (*f)(t_list *));
size_t				ft_lstlen(t_list *item);
void				ft_lst_remove_if(t_list **begin_list, void *data_ref,
						int (*cmp)());
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				*ft_memalloc(size_t len);
void				*ft_memchr(void const *s, int c, size_t n);
void				*ft_memccpy(void *dds, void const *src, int c, size_t n);
int					ft_memcmp(void const *s1, void const *s2, size_t n);
void				*ft_memcpy(void *dst, void const *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, void const *src, size_t n);
void				*ft_memrealloc(void *src, size_t size, size_t old_size);
void				*ft_memset(void *b, int c, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_power(int base, int power);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
char				*ft_strcat(char *s1, char const *s2);
int					ft_strcmp(char const *s1, char const *s2);
char				*ft_strchr(char const *s, int c);
char				*ft_strcpy(char *dst, char const *src);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s1);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *s1, char const *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(char const *big, char const *lit, size_t len);
size_t				ft_strlcat(char *dst, char const *src, size_t size);
size_t				ft_strlen(char const *s);
int					ft_strncmp(char const *s1, char const*s2, size_t n);
char				*ft_strncpy(char *dst, char const *src, size_t len);
char				*ft_strrchr(char const *s, int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(char const *big, char const *little);
char				*ft_strsub(char const *s1, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
void				ft_swap(int *a, int *b);

#endif
