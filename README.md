# Rock Paper Scissors Game

This is a simple Rock-Paper-Scissors game implemented in C. The game allows you to play either against a computer or in a multiplayer mode with another player.

## Instructions

- **Rock** is represented by `r`.
- **Paper** is represented by `p`.
- **Scissors** is represented by `s`.
- The game can be played by either one or two players.
- The rules are:
  - Rock beats Scissors.
  - Scissors beats Paper.
  - Paper beats Rock.
  - If both players choose the same option, the game is a draw.

## Game Modes

1. **Against Computer Mode**:
   - You play against the computer, which randomly selects Rock, Paper, or Scissors.
   - The game will ask for the number of rounds you want to play.

2. **Multiplayer Mode**:
   - Two players can play against each other by entering their choices in turn.
   - The game will also ask for the number of rounds.

## How to Play

1. The game starts by asking the user to select a mode: Against Computer or Multiplayer.
2. Depending on the mode, you will be prompted to enter the number of rounds.
3. For each round:
   - Enter your choice (`r`, `p`, or `s`).
   - The winner of the round is determined and displayed.
4. After all rounds are completed, the final winner is announced.
5. You can choose to play again or exit the game.

## Example Output

```
*****************************WELCOME TO ROCK PAPER SCISSORS GAME*******************************

Instructions:-
----------------------------------------------------------------------------------------------
1) Rock is represented by r.
2) Scissor is represented by s.
3) Paper is represented by p.
4) Maximum of two players can play this game.
5) If one player picks rock and one scissors, the player who showed rock wins the dispute.
6) If one player picks scissors and the other paper, the player who showed scissors succeeds.
7) If a player shows paper while the other shows rock, the player who picked paper succeeds.
8) If both players show rock/paper/scissor, the game is a draw.
-----------------------------------------------------------------------------------------------

Select the game mode: Against computer (press 1) or Multi-player (press 2): 1
You chose play against computer mode.
Enter the number of rounds: 3

========================================== ROUND 1 =============================================
Enter 'r' for rock, 'p' for paper, 's' for scissors: r
You chose r and computer chose s.
Point goes to you!

========================================== ROUND 2 =============================================
Enter 'r' for rock, 'p' for paper, 's' for scissors: p
You chose p and computer chose r.
Point goes to you!

========================================== ROUND 3 =============================================
Enter 'r' for rock, 'p' for paper, 's' for scissors: s
You chose s and computer chose s.
Game draw!

================================================================================================
Round finish.........
Results:- You win!!

Do you want to play again? (y/n): n
Thanks for playing this game!

