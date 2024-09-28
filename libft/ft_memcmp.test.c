void test_memcmp_identical_memory_blocks(void)
{
	char	str1[] = "Hello, World!";
	char	str2[] = "Hello, World!";
	size_t	n = sizeof(str1);

	mu_assert("memcmp: identical memory blocks should return 0", memcmp(str1, str2, n) == 0);
}