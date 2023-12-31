/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:27:27 by deryacar          #+#    #+#             */
/*   Updated: 2023/12/04 14:39:13 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
	char	**av;
}	t_stack;

char	*get_next_line(int fd);

void	ft_get_checker(t_stack *stack, int control);
void	ft_checker(char **av, int control);

void	bubble_sort(int *tmp_stack, int size);
void	push_swap(char **av, int control);
void	recheck(t_stack *stack, int size, char **av, int control);

void	free_error(t_stack *stack, int num, int control);
void	ft_free_av(char **av, t_stack *stack, int control);
void	ft_error(t_stack *stack);

void	pa(t_stack *s, int print);
void	sa(t_stack *s, int print);
void	ra(t_stack *s, int print);
void	rra(t_stack *s, int print);

void	pb(t_stack *s, int print);
void	sb(t_stack	*s, int print);
void	rb(t_stack	*s, int print);
void	rrb(t_stack *s, int print);

void	ss(t_stack	*s, int print);
void	rr(t_stack	*s, int print);
void	rrr(t_stack *s, int print);

int		ft_push(t_stack *stack, int len, int flag);
int		ft_get_middle(int *pivot, int *stack_a, int size);
int		ft_sort_three(t_stack *s);

int		small_sort_a(t_stack *s);
int		small_sort_a2(t_stack *s, int len);
int		small_sort_b(t_stack *s, int len);
int		ft_first_separation(t_stack *stack, int len);

int		ps_strlen(char **str);
int		ps_atoi(char *str, t_stack *stack, char **av, int control);
int		ps_atoi2(char *str, int *sign);

int		ft_sort(t_stack *stack, int size);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_is_num(char *s);
int		ft_sorted_control(int *stack_a, int size, int flag);

int		ft_first_separation(t_stack *stack, int len);
int		ft_quicksort_a(t_stack *stack, int len, int count);
int		ft_quicksort_b(t_stack *stack, int len, int count);

int		singular_exec(t_stack *stack, char *instruction, int control);
int		doubles_exec(t_stack *stack, char *instruction);

#endif