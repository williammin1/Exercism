#include "queen_attack.h"
attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    if (queen_1.row > 7 || queen_2.row > 7 || queen_1.column > 7 || queen_2.column > 7 || ((queen_1.row == queen_2.row) && (queen_1.column == queen_2.column)))
        return INVALID_POSITION;
    else if (queen_1.row == queen_2.row || queen_1.column == queen_2.column || diagonal(queen_1, queen_2) == 1)
        return CAN_ATTACK;
    else
        return CAN_NOT_ATTACK;
}

int diagonal (position_t a, position_t b) {
    if (abs(a.row - b.row) == abs(a.column - b.column))
        return 1;
    else
        return 0;
}