//
// Created by koncord on 05.01.16.
//

#ifndef OPENMW_NETWORKMESSAGES_HPP
#define OPENMW_NETWORKMESSAGES_HPP

#include <MessageIdentifiers.h>

enum GameMessages
{
    ID_GAME_BASE_INFO = ID_USER_PACKET_ENUM+1,
    ID_GAME_CHARGEN,
    ID_GAME_UPDATE_POS,
    ID_GAME_DYNAMICSTATS_BASE,
    ID_GAME_DYNAMICSTATS_CURRENT,
    ID_GAME_ATTACK,
    ID_USER_MYID,
    ID_GAME_UPDATE_EQUIPED,
    ID_USER_DISCONNECTED,
    ID_GAME_CREATE_PROJECTILE,
    ID_GAME_CAST,
    ID_GAME_DIE,
    ID_GAME_RESURRECT,
    ID_CHAT_MESSAGE,
    ID_GAME_CELL,
    ID_GAME_DRAWSTATE,

    ID_GAME_STATS,
    ID_GAME_ATTRIBUTE,
    ID_GAME_SKILL,
    ID_GAME_LEVEL,
    ID_GAME_CHARCLASS,
    ID_GAME_SKILLPRIORITY,
    ID_HANDSHAKE,
    ID_LOADED,
    ID_GUI_MESSAGEBOX,
    ID_GAME_TIME
};


#endif //OPENMW_NETWORKMESSAGES_HPP
