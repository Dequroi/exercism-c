#include "queen_attack.h"
#include <stdlib.h> // Includes the abs() function

// Given position of two queens, indicate whether or not they are positioned s.t they can attack each other 
// Queens can attack on same row, columnm, or diagonal
// Chessboard: 8x8 array. 0-7 for indices


// Practice accessing a struct field!! Remember difference between accessing pointer or value
// Note: Each diagonal has 2 diagonals to check
// (4,4) --> (5,5) or (3,3). Check when the diagonal is increasing or decreasing
// Approaches:
// Math: Two difference equalities checked. row +- column is constant
// Geometric: Absolute difference
// Movement: row and column steps should be equal
// Traversal: Loop through the 4 directions and check

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
  // Also check when the pieces poisitions are equal!
  // Use the Logical AND &&, not bitwise AND &
  if ((queen_1.row == queen_2.row) && (queen_1.column == queen_2.column)) {
    return INVALID_POSITION;
  }
    // Check edge cases and validity of position.
    // Only checking numbers above 7 because an unsigned int can never be negative
  if (queen_1.row > 7 || queen_2.row > 7) {
    return INVALID_POSITION;
  }

  if (queen_1.column > 7 || queen_2.column > 7) {
    return INVALID_POSITION;
  }

  if (queen_1.row == queen_2.row) {
    return CAN_ATTACK;
  }

  if (queen_1.column == queen_2.column) {
    return CAN_ATTACK;
  }

  // Diagonal Check -- Compute the difference and then check the absolute value
  int row_diff = queen_1.row - queen_2.row;
  int col_diff = queen_1.column - queen_2.column;
  
  if (abs(row_diff) == abs(col_diff)) {
    return CAN_ATTACK;
  }

  return CAN_NOT_ATTACK;
}
