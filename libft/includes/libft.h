/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   libft.h											:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: yfrancoi <yfrancoi@student.42lyon.fr>	  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/11/06 13:12:07 by yfrancoi		  #+#	#+#			 */
/*   Updated: 2022/01/22 16:32:25 by yfrancoi		 ###   ########lyon.fr   */
/*																			*/
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int			ft_atoi(char const *str);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t num, size_t size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
char		*ft_itoa(int n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *ptr, int value, size_t num);
void		*ft_memcpy(void *destination, const void *source, size_t num);
void		*ft_memmove(void *dest, const void *src, size_t num);
void		*ft_memset( void *ptr, int value, size_t num );
long		ft_pow(int n, int x);
void		ft_putchar_fd(unsigned char c, int fd);
void		ft_putendl_fd(char *str, int fd);
void		ft_putnbr_fd(int nb, int fd);
void		ft_putstr_fd(char *str, int fd);
char		*ft_strdup(char *str);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dest, char const *src, size_t n);
int			ft_strlcpy(char *dest, char const *src, size_t num);
size_t		ft_strlen(char const *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(char const *s1, char const *s2, int n);
char		*ft_strnstr(char const *str, char const *to_find, size_t n);
char		*ft_strrchr(char *str, int c);
char		*ft_strchr(char *str, int c);
char		**ft_split(char const *s, char c);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **alst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **alst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

int	 	ft_putnbr_base_p(unsigned long long nb, char *base);
int	 	ft_putnbr_base(long long nb, char *base);
int	 	ft_printf(const char *format, ...);
int	 	ft_case(const char c, va_list ag);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_strcpy(char *s1, char *str);
char	*ft_copy(char *s1);
char	*get_next_line(int fd);

#endif
