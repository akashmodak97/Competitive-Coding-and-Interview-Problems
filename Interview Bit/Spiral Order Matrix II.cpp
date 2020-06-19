/* Interview Bit */
/* Title - Spiral Order Matrix II */

// Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.



// Input Format:

// The first and the only argument contains an integer, A.
// Output Format:

// Return a 2-d matrix of size A x A satisfying the spiral order.
// Constraints:

// 1 <= A <= 1000
// Examples:

// Input 1:
//     A = 3

// Output 1:
//     [   [ 1, 2, 3 ],
//         [ 8, 9, 4 ],
//         [ 7, 6, 5 ]   ]

// Input 2:
//     4

// Output 2:
//     [   [1, 2, 3, 4],
//         [12, 13, 14, 5],
//         [11, 16, 15, 6],
//         [10, 9, 8, 7]   ]


vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> a(A,vector<int>(A,0));
    if(A==0)
        return a;
    if(A==1){
        a[0][0]=1;
        return a;
    }
    int count = 1;
    int sr=0;
    int sc=0;
    int er=A-1;
    int ec=A-1;
    int i;
    while(sr<=er && sc<=ec ){
        for(i=sc;i<=ec;i++)
        a[sr][i]=count++;
        for(i=sr+1;i<=er;i++)
        a[i][ec]=count++;
        if(sr<er && sc<ec){
            for(i=ec-1;i>=sc;i--)
            a[er][i]=count++;
            for(i=er-1;i>sr;i--)
            a[i][sc]=count++;
        }
        sr++;
        er--;
        sc++;
        ec--;
    }
    return a;
}
