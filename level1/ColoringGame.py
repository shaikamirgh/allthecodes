t = int(input("no.of test cases: "))
for i in range(t):
    count=0
    n = int(input())
    for j in range(0,n,5):
        count+=1
    print("Case #",i+1,": ",count)








'''
3
1
3
6

Problem solved!!!
John loves to play computer games. He recently discovered an interesting game. In the game there are N cells, which are aligned in a row from left to right and are numbered with consecutive integers starting from 1. Initially, all cells are coloured white. A cell is valid if it has white color and it does not have any adjacent red colored cell. On each turn, a player paints any valid cell with the red color. The game ends when no valid cells are present. The score of the player is equal to the number of cells they paint.

To master the game, John is practicing against a bot. The bot is poorly trained and it always paints the first valid cell from the left. John on the other hand is playing the game very carefully and he can choose any valid cell. The bot makes the first move and the players take turns alternately.

Find the maximum achievable score by the bot, assuming that John is playing optimally to minimize the score of his opponent.

Input
The first line of the input gives the number of test cases, T. T test cases follow.
The only line of each test case contains an integer N representing the number of cells in the game.
Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum achievable score by the bot given that John is playing optimally.

Limits
Time limit: 20 seconds.
Memory limit: 1 GB.
Test Set 1
1≤T≤6.
1≤N≤6.
Test Set 2
1≤T≤100.
1≤N≤106.
Sample
Sample Input
save_alt
content_copy
3
1
3
6
Sample Output
save_alt
content_copy
Case #1: 1
Case #2: 1
Case #3: 2
In Sample Case #1, there is N=1 cell. The maximum achievable score by the bot is 1.

First move: The bot paints the first cell with red color.
Since there are no more possible moves, so the game ends. Thus, the answer is 1.

In Sample Case #2, there are N=3 cells. The maximum achievable score by the bot is 1.

Explanation for sample testcase 2

First move: The bot paints the first cell with red color.
Second move: John paints the third cell with red color.
Since there are no more possible moves, so the game ends. Thus, the answer is 1.


'''