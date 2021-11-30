def matrixReshape(mat, r, c):
    m = len(mat)
    n = len(mat[0])

    if (n*m != r*c):
        #print(m,n)
        #print(r,c)
        return mat

    reshapeMat = [[0 for _ in range(c)] for _ in range(r)]
    x=y=0
    for i in range(0,r):
        for j in range(0,c):
            print(i,j)
            #print(x,y)
            reshapeMat[i][j]=mat[x][y]
            y+=1
            if y==n:
                y%=n
                x+=1
    return reshapeMat


mat = [[1,2,3],[3,4,3]]
print(matrixReshape(mat, 3,2))
