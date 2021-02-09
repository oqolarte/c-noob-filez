/* Rock, paper, scissors program */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main () {
	const char hands[3] = "rps";
	char pHand, cHand;
	int pScore = 0, cScore = 0, i;
	time_t t;

	/* init rand num generator */
	srand((unsigned) time(&t));

	printf("This is Rock-Paper-Scissors Game, You vs Computer\n");
	/* rr ss pp rs rp sr sp pr ps */

	while ( pScore + cScore <= 10) {
		printf("(r)ock, (p)aper, or (s)cissors? ");
		scanf("%c", &pHand);

		i = rand() % 3;
		cHand = hands[i];

		if ( pHand == cHand ) {
			printf("\nDraw\nPlayer: \t%d\nComputer: \t%d\n", pScore, cScore);
		} else if ( pHand == hands[0] && cHand == hands[2] ) {
			pScore++;
			printf("\nPlayer wins this round.\nPlayer: \t%d\nComputer: \t%d\n", pScore, cScore);
		} else if ( pHand == hands[0] && cHand == hands[1] ) {
			cScore++;
			printf("\nComputer wins this round.\nPlayer: \t%d\nComputer: \t%d\n", pScore, cScore);
		} else if ( pHand == hands[2] && cHand == hands[0] ) {
			cScore++;
			printf("\nComputer wins this round.\nPlayer: \t%d\nComputer: \t%d\n", pScore, cScore);
		} else if ( pHand == hands[2] && cHand == hands[1] ) {
			pScore++;
			printf("\nPlayer wins this round.\nPlayer: \t%d\nComputer: \t%d\n", pScore, cScore);
		} else if ( pHand == hands[1] && cHand == hands[0] ) {
			pScore++;
			printf("\nPlayer wins this round.\nPlayer: \t%d\nComputer: \t%d\n", pScore, cScore);
		} else if ( pHand == hands[1] && cHand == hands[2] ) {
			cScore++;
			printf("\nComputer wins this round.\nPlayer: \t%d\nComputer: \t%d\n", pScore, cScore);
		} else {
			printf("\nInvalid input.\n");
		}
	}

	if ( pScore > cScore ) {
		printf("\nPlayer wins!!!\n");
	} else if ( pScore < cScore ) {
		printf("\nComputer wins!!!\n");
	} else {
		printf("\nIt's fucking draw!!!\n");
	}

	return 0;
}
