typedef struct s_unit_test {
	char	*test_name;
	// test function to call
	t_unit_test	*next;
} t_unit_test	

void	load_test(t_unit_test *test_list, char *test_name, /* function proto */ );
int		launch_test(t_unit_test *test_list);

