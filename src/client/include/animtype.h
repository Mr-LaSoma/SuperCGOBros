#pragma once

//* +-----------------------------+
//* |       Animation Types       |
//* +-----------------------------+


typedef enum { CHAR_MARIO, CHAR_LUIGI, } CharacterType; // Enum used to divide every animation infos by characters

typedef enum { FORM_NORMAL, FORM_SUPER, FORM_FAIRY, } CharacterForm; // Enum used to divide every animation by character form

typedef enum { ANIM_IDLE, ANIM_WALK, ANIM_JUMP, ANIM_CLIMB, ANIM_SWIM, ANIM_DUCK, } AnimationType; // Enum used to divide every animation by Type 