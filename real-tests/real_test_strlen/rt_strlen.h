#ifndef RT_STRLEN_H
# define RT_STRLEN_H

# include "libunit.h"

int	basic_strlen_launcher(void);
int	basic_strlen_test_ok(void);
int	basic_strlen_test_ko(void);
int	basic_strlen_test_segv(void);
int	basic_strlen_test_buse(void);

#endif // RT_STRLEN_H