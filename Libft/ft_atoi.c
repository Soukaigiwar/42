int	ft_atoi(const char *nptr)
{
	int	result;
	int	is_negative;

	result = 0;
	is_negative = 1;
	while (*nptr == ' ')
		*nptr++;
	if (*nptr == '-')
	{
		is_negative = -1;
		*nptr++;
	}
	while (*nptr && (*nptr >= 48 && *nptr <= 57))
	{
		result = result * 10 + (*nptr - '0');
		*nptr++;
	}
	return (result * is_negative);
}
