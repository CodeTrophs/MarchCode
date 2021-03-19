# To print a the upper triangle matrix.
def upper_triangle_matrix(mat,row,col):
	for i in range(row):
		for j in range(col):
			if i>j:
				print("0" , end = " ")
			else:
				print(mat[i][j] , end =" ")
		print(" ")
		
mat = [[1,2,3],
	  [4,5,6],
	  [7,8,9]]
row = 3
col = 3
upper_triangle_matrix(mat,row,col)
		