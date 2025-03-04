#include "push_swap.h"

void	sort_two(t_stack **a)
{
	if ((*a)->num > (*a)->next->num)
		swap_a(*a);
}

void	sort_three(t_stack **a)
{
	int a;
	int b;
	int c;
	
	a = (*a)->num;
	b = (*a)->next->num;
	c = (*a)->next->next->num;
	if (b > c && c > a && b > a)
	{
		swap_a(*a);
		rotate_a(*a);
	}
	else if (c > a && a > b && c > b)
		swap_a(*a);
	else if (b > a && b > c && a > c)
		rrotate_a(*a);
	else if (a > b && c > b && a > c)
		rotate_a(*a);
	else if (a > b && b > c && a > c)
	{
		swap_a(*a);
		rrotate_a(*a);
	}
}
/*abc
132 b > c && c > a && b > a 312 123
213	c > a && a > b && c > b 123
231 b > a && b > c && a > c 123
312	a > b && c > b && a > c 123
321	a > b && b > c && a > c	231 123*/

void	sort_four_five(t_stack **a)
{
	
}
