#ifndef RESULT_H
# define RESULT_H

/*
 *	Structure To Define An Arbitrary Point In Space
 */
typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

/*
 *	Following the AABB naming structure
 *		A is the first point of a square
 *		B is the second opposite point of a square
 *		TotalSize is the cached value of the size of the square
 */
typedef struct s_result
{
	t_point a;
	t_point b;
	int totalsize;
}	t_result;

#endif
