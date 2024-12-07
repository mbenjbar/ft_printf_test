#include "ft_printf.h"

int	main()
{
	ft_printf("salam %s ana jbt %u w sahbe jab %d w dek zaml jab %i fl math f merican kay9ololiha %c w be hexadecimal hia %x aw %X w 25%% jabo 3\n", "cava", 30, 15, -2, 'A', 30, 30);
	printf("salam %s ana jbt %u w sahbe jab %d w dek zaml jab %i fl math f merican kay9ololiha %c w be hexadecimal hia %x aw %X w 25%% jabo 3\n", "cava", 30, 15, -2, 'A', 30, 30);
	int i = 5;
	ft_printf("%p\n", &i);
	printf("%p\n", &i);
}
