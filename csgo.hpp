#pragma once
#include <cstdint>

// 2018-10-24 06:36:06.870036800 UTC

namespace hazedumper {
constexpr ::std::int64_t timestamp = 1540362966;
namespace netvars {
constexpr ::std::ptrdiff_t m_ArmorValue = 0xB270;
constexpr ::std::ptrdiff_t m_Collision = 0x318;
constexpr ::std::ptrdiff_t m_CollisionGroup = 0x470;
constexpr ::std::ptrdiff_t m_Local = 0x2FAC;
constexpr ::std::ptrdiff_t m_MoveType = 0x258;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31A4;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31A0;
constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x301C;
constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3028;
constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x38C0;
constexpr ::std::ptrdiff_t m_bHasDefuser = 0xB280;
constexpr ::std::ptrdiff_t m_bHasHelmet = 0xB264;
constexpr ::std::ptrdiff_t m_bInReload = 0x3275;
constexpr ::std::ptrdiff_t m_bIsDefusing = 0x38B4;
constexpr ::std::ptrdiff_t m_bIsScoped = 0x38AA;
constexpr ::std::ptrdiff_t m_bSpotted = 0x939;
constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x97C;
constexpr ::std::ptrdiff_t m_clrRender = 0x70;
constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x2698;
constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x32E0;
constexpr ::std::ptrdiff_t m_fFlags = 0x100;
constexpr ::std::ptrdiff_t m_flC4Blow = 0x2980;
constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x2998;
constexpr ::std::ptrdiff_t m_flDefuseLength = 0x2994;
constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31B0;
constexpr ::std::ptrdiff_t m_flFlashDuration = 0xA32C;
constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0xA328;
constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3208;
constexpr ::std::ptrdiff_t m_flTimerLength = 0x2984;
constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2EE8;
constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2DE8;
constexpr ::std::ptrdiff_t m_hObserverTarget = 0x3360;
constexpr ::std::ptrdiff_t m_hOwner = 0x29BC;
constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x148;
constexpr ::std::ptrdiff_t m_iAccountID = 0x2FB8;
constexpr ::std::ptrdiff_t m_iClip1 = 0x3234;
constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
constexpr ::std::ptrdiff_t m_iCrosshairId = 0xB2DC;
constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2F9C;
constexpr ::std::ptrdiff_t m_iFOVStart = 0x31D8;
constexpr ::std::ptrdiff_t m_iGlowIndex = 0xA344;
constexpr ::std::ptrdiff_t m_iHealth = 0xFC;
constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2F9A;
constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FB0;
constexpr ::std::ptrdiff_t m_iObserverMode = 0x334C;
constexpr ::std::ptrdiff_t m_iShotsFired = 0xA2E0;
constexpr ::std::ptrdiff_t m_iState = 0x3228;
constexpr ::std::ptrdiff_t m_iTeamNum = 0xF0;
constexpr ::std::ptrdiff_t m_lifeState = 0x25B;
constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31A8;
constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31AC;
constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31B4;
constexpr ::std::ptrdiff_t m_nForceBone = 0x267C;
constexpr ::std::ptrdiff_t m_nTickBase = 0x3404;
constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x440;
constexpr ::std::ptrdiff_t m_szCustomName = 0x302C;
constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x3588;
constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31C8;
constexpr ::std::ptrdiff_t m_vecOrigin = 0x134;
constexpr ::std::ptrdiff_t m_vecVelocity = 0x110;
constexpr ::std::ptrdiff_t m_vecViewOffset = 0x104;
constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3010;
} // namespace netvars
namespace signatures {
constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4CB0;
constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4CAC;
constexpr ::std::ptrdiff_t convar_name_hash_table = 0x2F0F8;
constexpr ::std::ptrdiff_t dwClientState = 0x588B34;
constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4CC8;
constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x310;
constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x5240;
constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D10;
constexpr ::std::ptrdiff_t dwEntityList = 0x4C3E624;
constexpr ::std::ptrdiff_t dwForceAttack = 0x307FCF4;
constexpr ::std::ptrdiff_t dwForceAttack2 = 0x307FD00;
constexpr ::std::ptrdiff_t dwForceBackward = 0x307FD48;
constexpr ::std::ptrdiff_t dwForceForward = 0x307FD54;
constexpr ::std::ptrdiff_t dwForceJump = 0x50E136C;
constexpr ::std::ptrdiff_t dwForceLeft = 0x307FD6C;
constexpr ::std::ptrdiff_t dwForceRight = 0x307FD60;
constexpr ::std::ptrdiff_t dwGameDir = 0x626C70;
constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x5153694;
constexpr ::std::ptrdiff_t dwGetAllClasses = 0xC834E4;
constexpr ::std::ptrdiff_t dwGlobalVars = 0x588838;
constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x517D8A0;
constexpr ::std::ptrdiff_t dwInput = 0x50892E0;
constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x85A704;
constexpr ::std::ptrdiff_t dwLocalPlayer = 0xC618AC;
constexpr ::std::ptrdiff_t dwMouseEnable = 0xC67278;
constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0xC67248;
constexpr ::std::ptrdiff_t dwPlayerResource = 0x307E09C;
constexpr ::std::ptrdiff_t dwRadarBase = 0x507330C;
constexpr ::std::ptrdiff_t dwSensitivity = 0xC67114;
constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xC670E8;
constexpr ::std::ptrdiff_t dwSetClanTag = 0x88AD0;
constexpr ::std::ptrdiff_t dwViewMatrix = 0x4C30054;
constexpr ::std::ptrdiff_t dwWeaponTable = 0x5089D7C;
constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x322C;
constexpr ::std::ptrdiff_t dwYawPtr = 0xC66ED8;
constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xC6BF98;
constexpr ::std::ptrdiff_t dwbSendPackets = 0xD0FDA;
constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA2F20;
constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3E9EC;
constexpr ::std::ptrdiff_t m_pStudioHdr = 0x293C;
constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x50735B8;
constexpr ::std::ptrdiff_t m_yawClassPtr = 0xC66ED8;
} // namespace signatures
} // namespace hazedumper
