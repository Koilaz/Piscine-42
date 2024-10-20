int ft_ten_queens_puzzle(void)
{	
	int i;
	int d;
	int board[10][10]= {{0}};

	i = 0;
	d = 1;

}

int *ft_rec(int **board, int d)
{
	int l;
	int c;

	l = 0;
	c = 0;
	while (l <= 9)
	{
		while(c <= 9)
		{
			if(!board[l][c])
				board[l][c] = d;
			c++;
		}
		l++;
	}
	while(i <= 9)
	{
		write(1, ft_rec(board, d)[i] + '47', 1);
		write(1, "\n", 1)
	}
	ft_rec(board, d + 1);
	
	return(board[0]);
}

int main()
{

}