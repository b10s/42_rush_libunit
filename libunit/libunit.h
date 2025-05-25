typedef struct s_unit_test {
	char	*name;
	int	(*test_f)(void);
	struct s_unit_test	*next;
} t_unit_test	;

void	load_test(t_unit_test *test_list, char *test_name, int (*test_f)(void));
int		launch_test(t_unit_test *test_list, char *test_func_name);

