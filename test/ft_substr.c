char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (NULL);
	if (s_len - start < len)
		len = s_len - start;
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (s[start] && (s_len < len))
	{
		substr[s_len] = s[start];
		s_len++;
		start++;
	}
	substr[s_len] = '\0';
	return (substr);
}