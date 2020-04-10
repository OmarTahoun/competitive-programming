N = 8
ans = 100
def checkRow(chessBoard, row, currentCol):
	for col in range(currentCol):
		if chessBoard[row][col]:
			return False
	return True

def checkLdiag(chessBoard, row, currentCol):
	for r, c in zip(range(row, -1, -1), range(currentCol, -1, -1)):
		if chessBoard[r][c]:
			return False
	return True

def checkRdiag(chessBoard, row, currentCol):
	for r, c in zip(range(row, N, 1), range(currentCol, -1, -1)):
		if chessBoard[r][c]:
			return False
	return True

def safe(chessBoard, row, currentCol):
	return checkRow(chessBoard, row, currentCol) and checkLdiag(chessBoard, row, currentCol) and checkRdiag(chessBoard, row, currentCol)


def solve(chessBoard, currentCol, base):
	if currentCol >= N:
		newBoard = [0,0,0,0,0,0,0,0]
		for j in range(N):
			for i in range(N):
				if chessBoard[i][j] ==1 : newBoard[j] = i+1
		tmp = sum([1 for i in range(N) if base[i] != newBoard[i]])
		ans = min(ans, tmp)
		return True

	for row in range(N):
		if(safe(chessBoard, row, currentCol)):
			chessBoard[row][currentCol] = 1
			solve(chessBoard, currentCol+1, base)
			chessBoard[row][currentCol] = 0
	return False
while(True):
	base = list(map(int, input().split()))
	if len(base) < 8:
		exit()
	board = [	[0, 0, 0, 0, 0, 0, 0, 0],
				[0, 0, 0, 0, 0, 0, 0, 0],
				[0, 0, 0, 0, 0, 0, 0, 0],
				[0, 0, 0, 0, 0, 0, 0, 0],
				[0, 0, 0, 0, 0, 0, 0, 0],
				[0, 0, 0, 0, 0, 0, 0, 0],
				[0, 0, 0, 0, 0, 0, 0, 0],
				[0, 0, 0, 0, 0, 0, 0, 0]]

	solve(board, 0, base)
	print(ans)