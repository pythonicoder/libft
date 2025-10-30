#include "ft_printf.h"

static int	ft_putptr_rec(unsigned long ptr)
{
	int	len;
	char	*base;

	base = "0123456789abcdef";
	len = 0;
	if (ptr >= 16)
		len += ft_putptr_rec(ptr / 16);
	len += ft_putchar(base[ptr % 16]);
	return (len);
}

int ft_puthex(unsigned int n, char format)
{
	char *base;
	int len;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	len = 0;
	if (n >= 16)
		len += ft_puthex(n / 16, format);
	len += ft_putchar(base[n % 16]);
	return (len);
}

int ft_putptr(unsigned long ptr)
{
	int len;

	if (ptr == 0)
		return (ft_putstr("(nil)"));
	len = 0;
	len += ft_putstr("0x");
	len += ft_putptr_rec(ptr);
	return (len);
}
