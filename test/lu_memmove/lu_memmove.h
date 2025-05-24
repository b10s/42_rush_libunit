#ifndef LU_MEMMOVE_H
# define LU_MEMMOVE_H

# include <stddef.h>
void	*lu_memmove(void *dst, const void *src, unsigned int count);
int		basic_memmove_ok(void);
int		basic_memmove_ko(void);
int		basic_memmove_segv(void);
int		basic_memmove_bus(void);
#endif
