#ifndef RT_MEMMOVE_H
# define RT_MEMMOVE_H

# include "../../libunit/libunit.h"
# include "../../flamework/libft/libft.h"
# include <stddef.h>

void	*test_memmove(void *dst, const void *src, unsigned int count);
int		basic_memmove_ok(void);
int		basic_memmove_ko(void);
int		basic_memmove_segv(void);
int		basic_memmove_bus(void);
int		basic_memmove_launcher(void);

#endif // RT_MEMMOVE_H
