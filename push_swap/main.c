/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 05:07:13 by afatir            #+#    #+#             */
/*   Updated: 2023/02/19 08:39:36 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// t_queue	*create_queue(void)
// {
// 	t_queue	*q;

// 	q = (t_queue *)malloc(sizeof(t_queue));
// 	q->front = NULL;
// 	q->rear = NULL;
// 	return (q);
// }

// int	is_empty(t_queue *q)
// {
// 	return (q->rear == NULL);
// }

// void	enqueue(t_queue *q, int item)
// {
// 	t_node	*temp;

// 	temp = (t_node *)malloc(sizeof(t_node));
// 	temp->data = item;
// 	temp->next = NULL;
// 	if (q->rear == NULL)
// 	{
// 		q->front = temp;
// 		q->rear = temp;
// 		return ;
// 	}
// 	q->rear->next = temp;
// 	q->rear = temp;
// }

// int	dequeue(t_queue *q)
// {
// 	t_node	*temp;
// 	int		item;

// 	if (q->front == NULL)
// 		return (-1);
// 	temp = q->front;
// 	item = temp->data;
// 	q->front = q->front->next;
// 	if (q->front == NULL)
// 		q->rear = NULL;
// 	free(temp);
// 	return (item);
// }
// void v(void)
// {
// 	system("leaks push_swap");
// }
// int	main(void)
// {
// 	t_queue	*q;
// 	atexit(v);
// 	q = create_queue();
// 	enqueue(q, 1);
// 	enqueue(q, 2);
// 	enqueue(q, 3);
// 	enqueue(q, 4);
// 	enqueue(q, 5);
// 	printf("%d ", dequeue(q));
// 	printf("%d ", dequeue(q));
// 	printf("%d ", dequeue(q));
// 	printf("%d ", dequeue(q));
// 	printf("%d ", dequeue(q));
// 	free(q);
// 	return (0);
// }
// int	ft_chek_zero(char *str, int i)
// {
// 	if(str[i] != '0')
// 	{
// 		while (str[i] && !((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
// 		{		
//}
// 		return (0);
// 	}
// 	return (1);
// }
