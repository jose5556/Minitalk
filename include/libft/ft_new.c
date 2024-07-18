#include "libft.h"
#include "stdio.h"

void	converting(t_list **list, int fd);
void	delete(void *c);

void	ft_putnbr_hexa_fd(int n, int fd)
{
	t_list	*result;
	int		num;
	int		*ptr;

	result = NULL;
	ptr = NULL;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	while (n > 0)
	{
		num = n % 16;
		ptr = ft_calloc(sizeof(int), 1);
		*ptr = num;
		n /= 16;
		ft_lstadd_front(&result, ft_lstnew(ptr));
	}
	converting(&result, fd);
	free(ptr);
}

void	converting(t_list **list, int fd)
{
	while (*list)
	{
		int digit = *(int *)(*list)->content;
        if (digit < 10)
            ft_putnbr_fd(digit, fd);
        else if (digit == 10)
            ft_putchar_fd('a', fd);
        else if (digit == 11)
            ft_putchar_fd('b', fd);
        else if (digit == 12)
            ft_putchar_fd('c', fd);
        else if (digit == 13)
            ft_putchar_fd('d', fd);
        else if (digit == 14)
            ft_putchar_fd('e', fd);
        else
            ft_putchar_fd('f', fd);
		*list = (*list)->next;
	}
	ft_lstclear(list, delete);
}

void	delete(void *c)
{
	char *s;

	s = (char *)c;
	free(s);
}

/* int	main(void)
{
	ft_putnbr_hexa_fd(0, 1);
} */
