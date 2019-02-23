# sudoku
case 1:  taking the whole row ( so either 4 5 6 or 7 8 9 on top) now each of it can yield
         6 cases for the last 3 entries for the first row ( 7 8 9 ); second row second block again 6 cases ( 7 8 9 ) and again 6 for the last three. again 6 X 6 for the last ones.
Hence for this one we have 9! * 2 * 6^6

1 2 3  4 5 6 7 8 9
4 5 6  7 8 9 1 2 3
7 8 9  1 2 3 4 5 6

case 2: taking two from one and remaing one from other row ( 4 5 7) . This one has 2* 3*3 possibilities. for last 3 entries in first row - 6 possibilities. For mid row mid entries , we will have 3*6 possibilites ( 8 9 1). last 6. again 6 *6. 
Hence for this one we have 9! * 2*3*3*3*6^6 = 9!*2*6^6 * 27

1 2 3 4 5 7 6 8 9
4 5 6 8 9 1 2 3 7
7 8 9 2 3 6 1 5 4

further for case 1: we come down to fill 4th block.

1 2 3  4 5 6 7 8 9
4 5 6  7 8 9 1 2 3
7 8 9  1 2 3 4 5 6
2 3 1  0 0 0 0 0 0
5 6 4  0 0 0 0 0 0
8 9 7  0 0 0 0 0 0
0 0 0  0 0 0 0 0 0
0 0 0  0 0 0 0 0 0
0 0 0  0 0 0 0 0 0

when we fill the next column as it is - we have 2*6^3 solutions
total solutions for above sudoku = 1116000

when we fill two from one column and two from another 
1 2 3  4 5 6 7 8 9
4 5 6  7 8 9 1 2 3
7 8 9  1 2 3 4 5 6
2 1 5  0 0 0 0 0 0
3 4 8  0 0 0 0 0 0
6 9 7  0 0 0 0 0 0
0 0 0  0 0 0 0 0 0
0 0 0  0 0 0 0 0 0
0 0 0  0 0 0 0 0 0
2*3*3*3*6^3
total solutions = 617016

case 1 total = 9! * 2 * 6^6 * ( 2*6^3*1116000 + 2*6^3*27*617016 )
             = 9! * 2 * 6^6 * 7678986624


for case 2:

1 2 3 4 5 7 6 8 9
4 5 6 8 9 1 2 3 7
7 8 9 2 3 6 1 5 4
2 3 1 0 0 0 0 0 0
5 6 4 0 0 0 0 0 0
8 9 7 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
2*6*6*6
total solutions = 654036

1 2 3 4 5 7 6 8 9
4 5 6 8 9 1 2 3 7
7 8 9 2 3 6 1 5 4
2 1 8 0 0 0 0 0 0
5 6 4 0 0 0 0 0 0
3 9 7 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0
2*3*3*3*6^3
total solutions = 572568

case 2 solutions : 9!*2*6^6 * 27 * ( 2*6^3*654036 + 2*6^3*27*572568)
                    =9!*2*6^6 * 27* 6960976704
                    
6624081690598094929920

