int ft_str_is_printable(char *str)
{
	if (*str == '\0') return 1;
	
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			str++;
		else
			return 0;
	}

	return 1;
}
