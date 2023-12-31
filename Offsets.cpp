//GameVersion=v3.0.49.31
//LastUpdated=03/11/2023
#pragma once

//core
constexpr long OFF_REGION = 0x140000000;                      //[Static]->Region
constexpr long OFF_LEVEL = 0x16966f0;                         //[Miscellaneous]->LevelName
constexpr long OFF_LOCAL_PLAYER = 0x211fac8;                  //[Miscellaneous]->LocalPlayer
constexpr long OFF_ENTITY_LIST = 0x1d71858;                   //[Miscellaneous]->cl_entitylist
constexpr long OFF_GAMEMODE = 0x02157280;                     // [ConVars]       -> mp_gamemode+0x58 (not sur eif you ened to add 0x58)
    
//buttons
constexpr long OFF_IN_ATTACK = 0x07383af0;                     //[Buttons]->in_attack
constexpr long OFF_IN_JUMP = 0x07383bf0;                       //[Buttons]->in_jump
constexpr long OFF_IN_FORWARD = 0x0738b1d0;                       //[Buttons]->in_forward
constexpr long OFF_IN_BACKWARD = 0x0738b1f8;                       //[Buttons]->in_backward\
constexpr long OFF_IN_DUCK = 0x0738b190;                       //[Buttons]->in_duck

    
// player
constexpr long OFF_ZOOMING = 0x1c01;                          //[RecvTable.DT_Player]->m_bZooming
constexpr long OFF_LOCAL_ORIGIN = 0x0188;                     //[DataMap.CBaseViewModel]->m_localOrigin
constexpr long OFF_TEAM_NUMBER = 0x037c;                      //[RecvTable.DT_BaseEntity]->m_iTeamNum
constexpr long OFF_CURRENT_HEALTH = 0x036c;                   //[RecvTable.DT_BaseEntity]->m_iHealth
constexpr long OFF_CURRENT_SHIELDS = 0x01a0;                  //[RecvTable.DT_BaseEntity]->m_shieldHealth
constexpr long OFF_NAME = 0x04b9;                             //[RecvTable.DT_BaseEntity]->m_iName
constexpr long OFF_SIGNIFIER_NAME = 0x04b0;                   //[RecvTable.DT_BaseEntity]->m_iSignifierName
constexpr long OFF_LIFE_STATE = 0x06c8;                       //[RecvTable.DT_Player]->m_lifeState
constexpr long OFF_BLEEDOUT_STATE = 0x2710;                   //[RecvTable.DT_Player]->m_bleedoutState
constexpr long OFF_LAST_VISIBLE_TIME = 0x19bd + 0x3;          //[RecvTable.DT_BaseCombatCharacter]->m_hudInfo_visibilityTestAlwaysPasses + 0x3
constexpr long OFF_LAST_AIMEDAT_TIME = 0x19bd + 0x3 + 0x8;    //[RecvTable.DT_BaseCombatCharacter]->m_hudInfo_visibilityTestAlwaysPasses + 0x3 + 0x8
constexpr long OFF_TIME = 0x20b8;                             //[DataMap.C_Player]-> m_currentFramePlayer.timeBase
constexpr long OFF_WALLRUNSTART = 0x3594;                     //[DataMap.C_Player]-> m_wallRunStartTime
constexpr long OFF_WALLRUNCLEAR = 0x3598;                     //[DataMap.C_Player]-> m_wallRunClearTime
constexpr long OFF_VIEW_ANGLES = 0x2564 - 0x14;               //[DataMap.C_Player]-> m_ammoPoolCapacity - 0x14
constexpr long OFF_PUNCH_ANGLES = 0x2468;                     //[?]->m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
constexpr long OFF_FLAGS = 0x00c8;                            // [RecvTable.DT_Player]-> m_fFlags
constexpr long OFF_SKYDIVESTATE = 0x4690;                     // [RecvTable.DT_Player]-> m_skydiveState
constexpr long OFF_DUCKSTATE = 0x2a1c;                        // [RecvTable.DT_Player]-> m_duckState
//weapon
constexpr long OFF_WEAPON_HANDLE = 0x1964;                    //[RecvTable.DT_Player]->m_latestPrimaryWeapons
constexpr long OFF_WEAPON_INDEX = 0x17a8;                     //[RecvTable.DT_WeaponX]->m_weaponNameIndex
//glow
constexpr long OFF_GLOW_ENABLE = 0x294;                       //[DT_HighlightSettings].?
constexpr long OFF_GLOW_THROUGH_WALL = 0x278;                 //[DT_HighlightSettings].?
constexpr long OFF_GLOW_FIX = 0x270;
constexpr long OFF_GLOW_HIGHLIGHT_ID = 0x298;                 //[DT_HighlightSettings].m_highlightServerActiveStates
constexpr long OFF_GLOW_HIGHLIGHTS = 0xb5cc530;


