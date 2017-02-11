/*
	THIS FILE IS A PART OF GTA V SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2015
*/

#pragma once

enum eBlipColor
{
	BlipColorWhite = 0,
	BlipColorRed = 1,
	BlipColorGreen = 2,
	BlipColorBlue = 3,
	BlipColorYellow = 66,
};

enum eBlipSprite
{
	BlipSpriteStandard = 1,
	BlipSpriteBigBlip = 2,
	BlipSpritePoliceOfficer = 3,
	BlipSpritePoliceArea = 4,
	BlipSpriteSquare = 5,
	BlipSpritePlayer = 6,
	BlipSpriteNorth = 7,
	BlipSpriteWaypoint = 8,
	BlipSpriteBigCircle = 9,
	BlipSpriteBigCircleOutline = 10,
	BlipSpriteArrowUpOutlined = 11,
	BlipSpriteArrowDownOutlined = 12,
	BlipSpriteArrowUp = 13,
	BlipSpriteArrowDown = 14,
	BlipSpritePoliceHelicopterAnimated = 15,
	BlipSpriteJet = 16,
	BlipSpriteNumber1 = 17,
	BlipSpriteNumber2 = 18,
	BlipSpriteNumber3 = 19,
	BlipSpriteNumber4 = 20,
	BlipSpriteNumber5 = 21,
	BlipSpriteNumber6 = 22,
	BlipSpriteNumber7 = 23,
	BlipSpriteNumber8 = 24,
	BlipSpriteNumber9 = 25,
	BlipSpriteNumber10 = 26,
	BlipSpriteGTAOCrew = 27,
	BlipSpriteGTAOFriendly = 28,
	BlipSpriteLift = 36,
	BlipSpriteRaceFinish = 38,
	BlipSpriteSafehouse = 40,
	BlipSpritePoliceOfficer2 = 41,
	BlipSpritePoliceCarDot = 42,
	BlipSpritePoliceHelicopter = 43,
	BlipSpriteChatBubble = 47,
	BlipSpriteGarage2 = 50,
	BlipSpriteDrugs = 51,
	BlipSpriteStore = 52,
	BlipSpritePoliceCar = 56,
	BlipSpritePolicePlayer = 58,
	BlipSpritePoliceStation = 60,
	BlipSpriteHospital = 61,
	BlipSpriteHelicopter = 64,
	BlipSpriteStrangersAndFreaks = 65,
	BlipSpriteArmoredTruck = 66,
	BlipSpriteTowTruck = 68,
	BlipSpriteBarber = 71,
	BlipSpriteLosSantosCustoms = 72,
	BlipSpriteClothes = 73,
	BlipSpriteTattooParlor = 75,
	BlipSpriteSimeon = 76,
	BlipSpriteLester = 77,
	BlipSpriteMichael = 78,
	BlipSpriteTrevor = 79,
	BlipSpriteRampage = 84,
	BlipSpriteVinewoodTours = 85,
	BlipSpriteLamar = 86,
	BlipSpriteFranklin = 88,
	BlipSpriteChinese = 89,
	BlipSpriteAirport = 90,
	BlipSpriteBar = 93,
	BlipSpriteBaseJump = 94,
	BlipSpriteCarWash = 100,
	BlipSpriteComedyClub = 102,
	BlipSpriteDart = 103,
	BlipSpriteFIB = 106,
	BlipSpriteDollarSign = 108,
	BlipSpriteGolf = 109,
	BlipSpriteAmmuNation = 110,
	BlipSpriteExile = 112,
	BlipSpriteShootingRange = 119,
	BlipSpriteSolomon = 120,
	BlipSpriteStripClub = 121,
	BlipSpriteTennis = 122,
	BlipSpriteTriathlon = 126,
	BlipSpriteOffRoadRaceFinish = 127,
	BlipSpriteKey = 134,
	BlipSpriteMovieTheater = 135,
	BlipSpriteMusic = 136,
	BlipSpriteMarijuana = 140,
	BlipSpriteHunting = 141,
	BlipSpriteArmsTraffickingGround = 147,
	BlipSpriteNigel = 149,
	BlipSpriteAssaultRifle = 150,
	BlipSpriteBat = 151,
	BlipSpriteGrenade = 152,
	BlipSpriteHealth = 153,
	BlipSpriteKnife = 154,
	BlipSpriteMolotov = 155,
	BlipSpritePistol = 156,
	BlipSpriteRPG = 157,
	BlipSpriteShotgun = 158,
	BlipSpriteSMG = 159,
	BlipSpriteSniper = 160,
	BlipSpriteSonicWave = 161,
	BlipSpritePointOfInterest = 162,
	BlipSpriteGTAOPassive = 163,
	BlipSpriteGTAOUsingMenu = 164,
	BlipSpriteLink = 171,
	BlipSpriteMinigun = 173,
	BlipSpriteGrenadeLauncher = 174,
	BlipSpriteArmor = 175,
	BlipSpriteCastle = 176,
	BlipSpriteCamera = 184,
	BlipSpriteHandcuffs = 188,
	BlipSpriteYoga = 197,
	BlipSpriteCab = 198,
	BlipSpriteNumber11 = 199,
	BlipSpriteNumber12 = 200,
	BlipSpriteNumber13 = 201,
	BlipSpriteNumber14 = 202,
	BlipSpriteNumber15 = 203,
	BlipSpriteNumber16 = 204,
	BlipSpriteShrink = 205,
	BlipSpriteEpsilon = 206,
	BlipSpritePersonalVehicleCar = 225,
	BlipSpritePersonalVehicleBike = 226,
	BlipSpriteCustody = 237,
	BlipSpriteArmsTraffickingAir = 251,
	BlipSpriteFairground = 266,
	BlipSpritePropertyManagement = 267,
	BlipSpriteAltruist = 269,
	BlipSpriteEnemy = 270,
	BlipSpriteChop = 273,
	BlipSpriteDead = 274,
	BlipSpriteHooker = 279,
	BlipSpriteFriend = 280,
	BlipSpriteBountyHit = 303,
	BlipSpriteGTAOMission = 304,
	BlipSpriteGTAOSurvival = 305,
	BlipSpriteCrateDrop = 306,
	BlipSpritePlaneDrop = 307,
	BlipSpriteSub = 308,
	BlipSpriteRace = 309,
	BlipSpriteDeathmatch = 310,
	BlipSpriteArmWrestling = 311,
	BlipSpriteAmmuNationShootingRange = 313,
	BlipSpriteRaceAir = 314,
	BlipSpriteRaceCar = 315,
	BlipSpriteRaceSea = 316,
	BlipSpriteGarbageTruck = 318,
	BlipSpriteSafehouseForSale = 350,
	BlipSpritePackage = 351,
	BlipSpriteMartinMadrazo = 352,
	BlipSpriteEnemyHelicopter = 353,
	BlipSpriteBoost = 354,
	BlipSpriteDevin = 355,
	BlipSpriteMarina = 356,
	BlipSpriteGarage = 357,
	BlipSpriteGolfFlag = 358,
	BlipSpriteHangar = 359,
	BlipSpriteHelipad = 360,
	BlipSpriteJerryCan = 361,
	BlipSpriteMasks = 362,
	BlipSpriteHeistSetup = 363,
	BlipSpriteIncapacitated = 364,
	BlipSpritePickupSpawn = 365,
	BlipSpriteBoilerSuit = 366,
	BlipSpriteCompleted = 367,
	BlipSpriteRockets = 368,
	BlipSpriteGarageForSale = 369,
	BlipSpriteHelipadForSale = 370,
	BlipSpriteMarinaForSale = 371,
	BlipSpriteHangarForSale = 372,
	BlipSpriteBusiness = 374,
	BlipSpriteBusinessForSale = 375,
	BlipSpriteRaceBike = 376,
	BlipSpriteParachute = 377,
	BlipSpriteTeamDeathmatch = 378,
	BlipSpriteRaceFoot = 379,
	BlipSpriteVehicleDeathmatch = 380,
	BlipSpriteBarry = 381,
	BlipSpriteDom = 382,
	BlipSpriteMaryAnn = 383,
	BlipSpriteCletus = 384,
	BlipSpriteJosh = 385,
	BlipSpriteMinute = 386,
	BlipSpriteOmega = 387,
	BlipSpriteTonya = 388,
	BlipSpritePaparazzo = 389,
	BlipSpriteCrosshair = 390,
	BlipSpriteCreator = 398,
	BlipSpriteCreatorDirection = 399,
	BlipSpriteAbigail = 400,
	BlipSpriteBlimp = 401,
	BlipSpriteRepair = 402,
	BlipSpriteTestosterone = 403,
	BlipSpriteDinghy = 404,
	BlipSpriteFanatic = 405,
	BlipSpriteInformation = 407,
	BlipSpriteCaptureBriefcase = 408,
	BlipSpriteLastTeamStanding = 409,
	BlipSpriteBoat = 410,
	BlipSpriteCaptureHouse = 411,
	BlipSpriteJerryCan2 = 415,
	BlipSpriteRP = 416,
	BlipSpriteGTAOPlayerSafehouse = 417,
	BlipSpriteGTAOPlayerSafehouseDead = 418,
	BlipSpriteCaptureAmericanFlag = 419,
	BlipSpriteCaptureFlag = 420,
	BlipSpriteTank = 421,
	BlipSpriteHelicopterAnimated = 422,
	BlipSpritePlane = 423,
	BlipSpritePlayerNoColor = 425,
	BlipSpriteGunCar = 426,
	BlipSpriteSpeedboat = 427,
	BlipSpriteHeist = 428,
	BlipSpriteStopwatch = 430,
	BlipSpriteDollarSignCircled = 431,
	BlipSpriteCrosshair2 = 432,
	BlipSpriteDollarSignSquared = 434,
};

enum eCameraShake
{
	CameraShakeHand = 0,
	CameraShakeSmallExplosion,
	CameraShakeMediumExplosion,
	CameraShakeLargeExplosion,
	CameraShakeJolt,
	CameraShakeVibrate,
	CameraShakeRoadVibration,
	CameraShakeDrunk,
	CameraShakeSkyDiving,
	CameraShakeFamilyDrugTrip,
	CameraShakeDeathFail
};

enum eControl
{
	ControlNextCamera = 0,
	ControlLookLeftRight = 1,
	ControlLookUpDown = 2,
	ControlLookUpOnly = 3,
	ControlLookDownOnly = 4,
	ControlLookLeftOnly = 5,
	ControlLookRightOnly = 6,
	ControlCinematicSlowMo = 7,
	ControlFlyUpDown = 8,
	ControlFlyLeftRight = 9,
	ControlScriptedFlyZUp = 10,
	ControlScriptedFlyZDown = 11,
	ControlWeaponWheelUpDown = 12,
	ControlWeaponWheelLeftRight = 13,
	ControlWeaponWheelNext = 14,
	ControlWeaponWheelPrev = 15,
	ControlSelectNextWeapon = 16,
	ControlSelectPrevWeapon = 17,
	ControlSkipCutscene = 18,
	ControlCharacterWheel = 19,
	ControlMultiplayerInfo = 20,
	ControlSprint = 21,
	ControlJump = 22,
	ControlEnter = 23,
	ControlAttack = 24,
	ControlAim = 25,
	ControlLookBehind = 26,
	ControlPhone = 27,
	ControlSpecialAbility = 28,
	ControlSpecialAbilitySecondary = 29,
	ControlMoveLeftRight = 30,
	ControlMoveUpDown = 31,
	ControlMoveUpOnly = 32,
	ControlMoveDownOnly = 33,
	ControlMoveLeftOnly = 34,
	ControlMoveRightOnly = 35,
	ControlDuck = 36,
	ControlSelectWeapon = 37,
	ControlPickup = 38,
	ControlSniperZoom = 39,
	ControlSniperZoomInOnly = 40,
	ControlSniperZoomOutOnly = 41,
	ControlSniperZoomInSecondary = 42,
	ControlSniperZoomOutSecondary = 43,
	ControlCover = 44,
	ControlReload = 45,
	ControlTalk = 46,
	ControlDetonate = 47,
	ControlHUDSpecial = 48,
	ControlArrest = 49,
	ControlAccurateAim = 50,
	ControlContext = 51,
	ControlContextSecondary = 52,
	ControlWeaponSpecial = 53,
	ControlWeaponSpecial2 = 54,
	ControlDive = 55,
	ControlDropWeapon = 56,
	ControlDropAmmo = 57,
	ControlThrowGrenade = 58,
	ControlVehicleMoveLeftRight = 59,
	ControlVehicleMoveUpDown = 60,
	ControlVehicleMoveUpOnly = 61,
	ControlVehicleMoveDownOnly = 62,
	ControlVehicleMoveLeftOnly = 63,
	ControlVehicleMoveRightOnly = 64,
	ControlVehicleSpecial = 65,
	ControlVehicleGunLeftRight = 66,
	ControlVehicleGunUpDown = 67,
	ControlVehicleAim = 68,
	ControlVehicleAttack = 69,
	ControlVehicleAttack2 = 70,
	ControlVehicleAccelerate = 71,
	ControlVehicleBrake = 72,
	ControlVehicleDuck = 73,
	ControlVehicleHeadlight = 74,
	ControlVehicleExit = 75,
	ControlVehicleHandbrake = 76,
	ControlVehicleHotwireLeft = 77,
	ControlVehicleHotwireRight = 78,
	ControlVehicleLookBehind = 79,
	ControlVehicleCinCam = 80,
	ControlVehicleNextRadio = 81,
	ControlVehiclePrevRadio = 82,
	ControlVehicleNextRadioTrack = 83,
	ControlVehiclePrevRadioTrack = 84,
	ControlVehicleRadioWheel = 85,
	ControlVehicleHorn = 86,
	ControlVehicleFlyThrottleUp = 87,
	ControlVehicleFlyThrottleDown = 88,
	ControlVehicleFlyYawLeft = 89,
	ControlVehicleFlyYawRight = 90,
	ControlVehiclePassengerAim = 91,
	ControlVehiclePassengerAttack = 92,
	ControlVehicleSpecialAbilityFranklin = 93,
	ControlVehicleStuntUpDown = 94,
	ControlVehicleCinematicUpDown = 95,
	ControlVehicleCinematicUpOnly = 96,
	ControlVehicleCinematicDownOnly = 97,
	ControlVehicleCinematicLeftRight = 98,
	ControlVehicleSelectNextWeapon = 99,
	ControlVehicleSelectPrevWeapon = 100,
	ControlVehicleRoof = 101,
	ControlVehicleJump = 102,
	ControlVehicleGrapplingHook = 103,
	ControlVehicleShuffle = 104,
	ControlVehicleDropProjectile = 105,
	ControlVehicleMouseControlOverride = 106,
	ControlVehicleFlyRollLeftRight = 107,
	ControlVehicleFlyRollLeftOnly = 108,
	ControlVehicleFlyRollRightOnly = 109,
	ControlVehicleFlyPitchUpDown = 110,
	ControlVehicleFlyPitchUpOnly = 111,
	ControlVehicleFlyPitchDownOnly = 112,
	ControlVehicleFlyUnderCarriage = 113,
	ControlVehicleFlyAttack = 114,
	ControlVehicleFlySelectNextWeapon = 115,
	ControlVehicleFlySelectPrevWeapon = 116,
	ControlVehicleFlySelectTargetLeft = 117,
	ControlVehicleFlySelectTargetRight = 118,
	ControlVehicleFlyVerticalFlightMode = 119,
	ControlVehicleFlyDuck = 120,
	ControlVehicleFlyAttackCamera = 121,
	ControlVehicleFlyMouseControlOverride = 122,
	ControlVehicleSubTurnLeftRight = 123,
	ControlVehicleSubTurnLeftOnly = 124,
	ControlVehicleSubTurnRightOnly = 125,
	ControlVehicleSubPitchUpDown = 126,
	ControlVehicleSubPitchUpOnly = 127,
	ControlVehicleSubPitchDownOnly = 128,
	ControlVehicleSubThrottleUp = 129,
	ControlVehicleSubThrottleDown = 130,
	ControlVehicleSubAscend = 131,
	ControlVehicleSubDescend = 132,
	ControlVehicleSubTurnHardLeft = 133,
	ControlVehicleSubTurnHardRight = 134,
	ControlVehicleSubMouseControlOverride = 135,
	ControlVehiclePushbikePedal = 136,
	ControlVehiclePushbikeSprint = 137,
	ControlVehiclePushbikeFrontBrake = 138,
	ControlVehiclePushbikeRearBrake = 139,
	ControlMeleeAttackLight = 140,
	ControlMeleeAttackHeavy = 141,
	ControlMeleeAttackAlternate = 142,
	ControlMeleeBlock = 143,
	ControlParachuteDeploy = 144,
	ControlParachuteDetach = 145,
	ControlParachuteTurnLeftRight = 146,
	ControlParachuteTurnLeftOnly = 147,
	ControlParachuteTurnRightOnly = 148,
	ControlParachutePitchUpDown = 149,
	ControlParachutePitchUpOnly = 150,
	ControlParachutePitchDownOnly = 151,
	ControlParachuteBrakeLeft = 152,
	ControlParachuteBrakeRight = 153,
	ControlParachuteSmoke = 154,
	ControlParachutePrecisionLanding = 155,
	ControlMap = 156,
	ControlSelectWeaponUnarmed = 157,
	ControlSelectWeaponMelee = 158,
	ControlSelectWeaponHandgun = 159,
	ControlSelectWeaponShotgun = 160,
	ControlSelectWeaponSmg = 161,
	ControlSelectWeaponAutoRifle = 162,
	ControlSelectWeaponSniper = 163,
	ControlSelectWeaponHeavy = 164,
	ControlSelectWeaponSpecial = 165,
	ControlSelectCharacterMichael = 166,
	ControlSelectCharacterFranklin = 167,
	ControlSelectCharacterTrevor = 168,
	ControlSelectCharacterMultiplayer = 169,
	ControlSaveReplayClip = 170,
	ControlSpecialAbilityPC = 171,
	ControlPhoneUp = 172,
	ControlPhoneDown = 173,
	ControlPhoneLeft = 174,
	ControlPhoneRight = 175,
	ControlPhoneSelect = 176,
	ControlPhoneCancel = 177,
	ControlPhoneOption = 178,
	ControlPhoneExtraOption = 179,
	ControlPhoneScrollForward = 180,
	ControlPhoneScrollBackward = 181,
	ControlPhoneCameraFocusLock = 182,
	ControlPhoneCameraGrid = 183,
	ControlPhoneCameraSelfie = 184,
	ControlPhoneCameraDOF = 185,
	ControlPhoneCameraExpression = 186,
	ControlFrontendDown = 187,
	ControlFrontendUp = 188,
	ControlFrontendLeft = 189,
	ControlFrontendRight = 190,
	ControlFrontendRdown = 191,
	ControlFrontendRup = 192,
	ControlFrontendRleft = 193,
	ControlFrontendRright = 194,
	ControlFrontendAxisX = 195,
	ControlFrontendAxisY = 196,
	ControlFrontendRightAxisX = 197,
	ControlFrontendRightAxisY = 198,
	ControlFrontendPause = 199,
	ControlFrontendPauseAlternate = 200,
	ControlFrontendAccept = 201,
	ControlFrontendCancel = 202,
	ControlFrontendX = 203,
	ControlFrontendY = 204,
	ControlFrontendLb = 205,
	ControlFrontendRb = 206,
	ControlFrontendLt = 207,
	ControlFrontendRt = 208,
	ControlFrontendLs = 209,
	ControlFrontendRs = 210,
	ControlFrontendLeaderboard = 211,
	ControlFrontendSocialClub = 212,
	ControlFrontendSocialClubSecondary = 213,
	ControlFrontendDelete = 214,
	ControlFrontendEndscreenAccept = 215,
	ControlFrontendEndscreenExpand = 216,
	ControlFrontendSelect = 217,
	ControlScriptLeftAxisX = 218,
	ControlScriptLeftAxisY = 219,
	ControlScriptRightAxisX = 220,
	ControlScriptRightAxisY = 221,
	ControlScriptRUp = 222,
	ControlScriptRDown = 223,
	ControlScriptRLeft = 224,
	ControlScriptRRight = 225,
	ControlScriptLB = 226,
	ControlScriptRB = 227,
	ControlScriptLT = 228,
	ControlScriptRT = 229,
	ControlScriptLS = 230,
	ControlScriptRS = 231,
	ControlScriptPadUp = 232,
	ControlScriptPadDown = 233,
	ControlScriptPadLeft = 234,
	ControlScriptPadRight = 235,
	ControlScriptSelect = 236,
	ControlCursorAccept = 237,
	ControlCursorCancel = 238,
	ControlCursorX = 239,
	ControlCursorY = 240,
	ControlCursorScrollUp = 241,
	ControlCursorScrollDown = 242,
	ControlEnterCheatCode = 243,
	ControlInteractionMenu = 244,
	ControlMpTextChatAll = 245,
	ControlMpTextChatTeam = 246,
	ControlMpTextChatFriends = 247,
	ControlMpTextChatCrew = 248,
	ControlPushToTalk = 249,
	ControlCreatorLS = 250,
	ControlCreatorRS = 251,
	ControlCreatorLT = 252,
	ControlCreatorRT = 253,
	ControlCreatorMenuToggle = 254,
	ControlCreatorAccept = 255,
	ControlCreatorDelete = 256,
	ControlAttack2 = 257,
	ControlRappelJump = 258,
	ControlRappelLongJump = 259,
	ControlRappelSmashWindow = 260,
	ControlPrevWeapon = 261,
	ControlNextWeapon = 262,
	ControlMeleeAttack1 = 263,
	ControlMeleeAttack2 = 264,
	ControlWhistle = 265,
	ControlMoveLeft = 266,
	ControlMoveRight = 267,
	ControlMoveUp = 268,
	ControlMoveDown = 269,
	ControlLookLeft = 270,
	ControlLookRight = 271,
	ControlLookUp = 272,
	ControlLookDown = 273,
	ControlSniperZoomIn = 274,
	ControlSniperZoomOut = 275,
	ControlSniperZoomInAlternate = 276,
	ControlSniperZoomOutAlternate = 277,
	ControlVehicleMoveLeft = 278,
	ControlVehicleMoveRight = 279,
	ControlVehicleMoveUp = 280,
	ControlVehicleMoveDown = 281,
	ControlVehicleGunLeft = 282,
	ControlVehicleGunRight = 283,
	ControlVehicleGunUp = 284,
	ControlVehicleGunDown = 285,
	ControlVehicleLookLeft = 286,
	ControlVehicleLookRight = 287,
	ControlReplayStartStopRecording = 288,
	ControlReplayStartStopRecordingSecondary = 289,
	ControlScaledLookLeftRight = 290,
	ControlScaledLookUpDown = 291,
	ControlScaledLookUpOnly = 292,
	ControlScaledLookDownOnly = 293,
	ControlScaledLookLeftOnly = 294,
	ControlScaledLookRightOnly = 295,
	ControlReplayMarkerDelete = 296,
	ControlReplayClipDelete = 297,
	ControlReplayPause = 298,
	ControlReplayRewind = 299,
	ControlReplayFfwd = 300,
	ControlReplayNewmarker = 301,
	ControlReplayRecord = 302,
	ControlReplayScreenshot = 303,
	ControlReplayHidehud = 304,
	ControlReplayStartpoint = 305,
	ControlReplayEndpoint = 306,
	ControlReplayAdvance = 307,
	ControlReplayBack = 308,
	ControlReplayTools = 309,
	ControlReplayRestart = 310,
	ControlReplayShowhotkey = 311,
	ControlReplayCycleMarkerLeft = 312,
	ControlReplayCycleMarkerRight = 313,
	ControlReplayFOVIncrease = 314,
	ControlReplayFOVDecrease = 315,
	ControlReplayCameraUp = 316,
	ControlReplayCameraDown = 317,
	ControlReplaySave = 318,
	ControlReplayToggletime = 319,
	ControlReplayToggletips = 320,
	ControlReplayPreview = 321,
	ControlReplayToggleTimeline = 322,
	ControlReplayTimelinePickupClip = 323,
	ControlReplayTimelineDuplicateClip = 324,
	ControlReplayTimelinePlaceClip = 325,
	ControlReplayCtrl = 326,
	ControlReplayTimelineSave = 327,
	ControlReplayPreviewAudio = 328,
	ControlVehicleDriveLook = 329,
	ControlVehicleDriveLook2 = 330,
	ControlVehicleFlyAttack2 = 331,
	ControlRadioWheelUpDown = 332,
	ControlRadioWheelLeftRight = 333,
	ControlVehicleSlowMoUpDown = 334,
	ControlVehicleSlowMoUpOnly = 335,
	ControlVehicleSlowMoDownOnly = 336,
	ControlMapPointOfInterest = 337,
};

enum eRadioStation
{
	RadioStationLosSantosRockRadio,
	RadioStationNonStopPopFM,
	RadioStationLosSantos,
	RadioStationChannelX,
	RadioStationWestCoastTalkRadio,
	RadioStationRebelRadio,
	RadioStationSoulwaxFM,
	RadioStationEastLosFM,
	RadioStationWestCoastClassics,
	RadioStationTheBlueArk,
	RadioStationWorldWideFM,
	RadioStationFlyloFM,
	RadioStationTheLowdown,
	RadioStationTheLab,
	RadioStationMirrorPark,
	RadioStationSpace,
	RadioStationVinewoodBoulevardRadio,
};

enum eWindowTitle
{
	CELL_EMAIL_BOD,
	CELL_EMAIL_BODE,
	CELL_EMAIL_BODF,
	CELL_EMAIL_SOD,
	CELL_EMAIL_SODE,
	CELL_EMAIL_SODF,
	CELL_EMASH_BOD,
	CELL_EMASH_BODE,
	CELL_EMASH_BODF,
	CELL_EMASH_SOD,
	CELL_EMASH_SODE,
	CELL_EMASH_SODF,
	FMMC_KEY_TIP10,
	FMMC_KEY_TIP12,
	FMMC_KEY_TIP12F,
	FMMC_KEY_TIP12N,
	FMMC_KEY_TIP8,
	FMMC_KEY_TIP8F,
	FMMC_KEY_TIP8FS,
	FMMC_KEY_TIP8S,
	FMMC_KEY_TIP9,
	FMMC_KEY_TIP9F,
	FMMC_KEY_TIP9N,
	PM_NAME_CHALL,
};

enum eGender
{
	GenderMale,
	GenderFemale
};

enum eDrivingStyle
{
	DrivingStyleNormal = 0xC00AB,
	DrivingStyleIgnoreLights = 0x2C0025,
	DrivingStyleSometimesOvertakeTraffic = 5,
	DrivingStyleRushed = 0x400C0025,
	DrivingStyleAvoidTraffic = 0xC0024,
	DrivingStyleAvoidTrafficExtremely = 6,
};

enum eBone
{
	SKEL_ROOT = 0x0,
	SKEL_Pelvis = 0x2e28,
	SKEL_L_Thigh = 0xe39f,
	SKEL_L_Calf = 0xf9bb,
	SKEL_L_Foot = 0x3779,
	SKEL_L_Toe0 = 0x83c,
	IK_L_Foot = 0xfedd,
	PH_L_Foot = 0xe175,
	MH_L_Knee = 0xb3fe,
	SKEL_R_Thigh = 0xca72,
	SKEL_R_Calf = 0x9000,
	SKEL_R_Foot = 0xcc4d,
	SKEL_R_Toe0 = 0x512d,
	IK_R_Foot = 0x8aae,
	PH_R_Foot = 0x60e6,
	MH_R_Knee = 0x3fcf,
	RB_L_ThighRoll = 0x5c57,
	RB_R_ThighRoll = 0x192a,
	SKEL_Spine_Root = 0xe0fd,
	SKEL_Spine0 = 0x5c01,
	SKEL_Spine1 = 0x60f0,
	SKEL_Spine2 = 0x60f1,
	SKEL_Spine3 = 0x60f2,
	SKEL_L_Clavicle = 0xfcd9,
	SKEL_L_UpperArm = 0xb1c5,
	SKEL_L_Forearm = 0xeeeb,
	SKEL_L_Hand = 0x49d9,
	SKEL_L_Finger00 = 0x67f2,
	SKEL_L_Finger01 = 0xff9,
	SKEL_L_Finger02 = 0xffa,
	SKEL_L_Finger10 = 0x67f3,
	SKEL_L_Finger11 = 0x1049,
	SKEL_L_Finger12 = 0x104a,
	SKEL_L_Finger20 = 0x67f4,
	SKEL_L_Finger21 = 0x1059,
	SKEL_L_Finger22 = 0x105a,
	SKEL_L_Finger30 = 0x67f5,
	SKEL_L_Finger31 = 0x1029,
	SKEL_L_Finger32 = 0x102a,
	SKEL_L_Finger40 = 0x67f6,
	SKEL_L_Finger41 = 0x1039,
	SKEL_L_Finger42 = 0x103a,
	PH_L_Hand = 0xeb95,
	IK_L_Hand = 0x8cbd,
	RB_L_ForeArmRoll = 0xee4f,
	RB_L_ArmRoll = 0x1470,
	MH_L_Elbow = 0x58b7,
	SKEL_R_Clavicle = 0x29d2,
	SKEL_R_UpperArm = 0x9d4d,
	SKEL_R_Forearm = 0x6e5c,
	SKEL_R_Hand = 0xdead,
	SKEL_R_Finger00 = 0xe5f2,
	SKEL_R_Finger01 = 0xfa10,
	SKEL_R_Finger02 = 0xfa11,
	SKEL_R_Finger10 = 0xe5f3,
	SKEL_R_Finger11 = 0xfa60,
	SKEL_R_Finger12 = 0xfa61,
	SKEL_R_Finger20 = 0xe5f4,
	SKEL_R_Finger21 = 0xfa70,
	SKEL_R_Finger22 = 0xfa71,
	SKEL_R_Finger30 = 0xe5f5,
	SKEL_R_Finger31 = 0xfa40,
	SKEL_R_Finger32 = 0xfa41,
	SKEL_R_Finger40 = 0xe5f6,
	SKEL_R_Finger41 = 0xfa50,
	SKEL_R_Finger42 = 0xfa51,
	PH_R_Hand = 0x6f06,
	IK_R_Hand = 0x188e,
	RB_R_ForeArmRoll = 0xab22,
	RB_R_ArmRoll = 0x90ff,
	MH_R_Elbow = 0xbb0,
	SKEL_Neck_1 = 0x9995,
	SKEL_Head = 0x796e,
	IK_Head = 0x322c,
	FACIAL_facialRoot = 0xfe2c,
	FB_L_Brow_Out_000 = 0xe3db,
	FB_L_Lid_Upper_000 = 0xb2b6,
	FB_L_Eye_000 = 0x62ac,
	FB_L_CheekBone_000 = 0x542e,
	FB_L_Lip_Corner_000 = 0x74ac,
	FB_R_Lid_Upper_000 = 0xaa10,
	FB_R_Eye_000 = 0x6b52,
	FB_R_CheekBone_000 = 0x4b88,
	FB_R_Brow_Out_000 = 0x54c,
	FB_R_Lip_Corner_000 = 0x2ba6,
	FB_Brow_Centre_000 = 0x9149,
	FB_UpperLipRoot_000 = 0x4ed2,
	FB_UpperLip_000 = 0xf18f,
	FB_L_Lip_Top_000 = 0x4f37,
	FB_R_Lip_Top_000 = 0x4537,
	FB_Jaw_000 = 0xb4a0,
	FB_LowerLipRoot_000 = 0x4324,
	FB_LowerLip_000 = 0x508f,
	FB_L_Lip_Bot_000 = 0xb93b,
	FB_R_Lip_Bot_000 = 0xc33b,
	FB_Tongue_000 = 0xb987,
	RB_Neck_1 = 0x8b93,
	IK_Root = 0xdd1c
};

enum eFiringPattern : DWORD
{
	FiringPatternFullAuto = 0xC6EE6B4C,
	FiringPatternBurstFire = 0xD6FF6D61,
	FiringPatternBurstInCover = 0x026321F1,
	FiringPatternBurstFireDriveby = 0xD31265F2,
	FiringPatternFromGround = 0x2264E5D6,
	FiringPatternDelayFireByOneSec = 0x7A845691,
	FiringPatternSingleShot = 0x5D60E4E0,
	FiringPatternBurstFirePistol = 0xA018DB8A,
	FiringPatternBurstFireSMG = 0xD10DADEE,
	FiringPatternBurstFireRifle = 0x9C74B406,
	FiringPatternBurstFireMG = 0xB573C5B4,
	FiringPatternBurstFirePumpShotGun = 0x00BAC39B,
	FiringPatternBurstFireHeli = 0x914E786F,
	FiringPatternBurstFireMicro = 0x42EF03FD,
	FiringPatternBurstFireBursts = 0x42EF03FD,
	FiringPatternBurstFireTank = 0xE2CA3A71
};

enum eFont
{
	FontChaletLondon = 0,
	FontHouseScript = 1,
	FontMonospace = 2,
	FontChaletComprimeCologne = 4,
	FontPricedown = 7
};

enum eVehicleColor
{
	VehicleColorMetallicBlack = 0,
	VehicleColorMetallicGraphiteBlack = 1,
	VehicleColorMetallicBlackSteel = 2,
	VehicleColorMetallicDarkSilver = 3,
	VehicleColorMetallicSilver = 4,
	VehicleColorMetallicBlueSilver = 5,
	VehicleColorMetallicSteelGray = 6,
	VehicleColorMetallicShadowSilver = 7,
	VehicleColorMetallicStoneSilver = 8,
	VehicleColorMetallicMidnightSilver = 9,
	VehicleColorMetallicGunMetal = 10,
	VehicleColorMetallicAnthraciteGray = 11,
	VehicleColorMatteBlack = 12,
	VehicleColorMatteGray = 13,
	VehicleColorMatteLightGray = 14,
	VehicleColorUtilBlack = 15,
	VehicleColorUtilBlackPoly = 16,
	VehicleColorUtilDarksilver = 17,
	VehicleColorUtilSilver = 18,
	VehicleColorUtilGunMetal = 19,
	VehicleColorUtilShadowSilver = 20,
	VehicleColorWornBlack = 21,
	VehicleColorWornGraphite = 22,
	VehicleColorWornSilverGray = 23,
	VehicleColorWornSilver = 24,
	VehicleColorWornBlueSilver = 25,
	VehicleColorWornShadowSilver = 26,
	VehicleColorMetallicRed = 27,
	VehicleColorMetallicTorinoRed = 28,
	VehicleColorMetallicFormulaRed = 29,
	VehicleColorMetallicBlazeRed = 30,
	VehicleColorMetallicGracefulRed = 31,
	VehicleColorMetallicGarnetRed = 32,
	VehicleColorMetallicDesertRed = 33,
	VehicleColorMetallicCabernetRed = 34,
	VehicleColorMetallicCandyRed = 35,
	VehicleColorMetallicSunriseOrange = 36,
	VehicleColorMetallicClassicGold = 37,
	VehicleColorMetallicOrange = 38,
	VehicleColorMatteRed = 39,
	VehicleColorMatteDarkRed = 40,
	VehicleColorMatteOrange = 41,
	VehicleColorMatteYellow = 42,
	VehicleColorUtilRed = 43,
	VehicleColorUtilBrightRed = 44,
	VehicleColorUtilGarnetRed = 45,
	VehicleColorWornRed = 46,
	VehicleColorWornGoldenRed = 47,
	VehicleColorWornDarkRed = 48,
	VehicleColorMetallicDarkGreen = 49,
	VehicleColorMetallicRacingGreen = 50,
	VehicleColorMetallicSeaGreen = 51,
	VehicleColorMetallicOliveGreen = 52,
	VehicleColorMetallicGreen = 53,
	VehicleColorMetallicGasolineBlueGreen = 54,
	VehicleColorMatteLimeGreen = 55,
	VehicleColorUtilDarkGreen = 56,
	VehicleColorUtilGreen = 57,
	VehicleColorWornDarkGreen = 58,
	VehicleColorWornGreen = 59,
	VehicleColorWornSeaWash = 60,
	VehicleColorMetallicMidnightBlue = 61,
	VehicleColorMetallicDarkBlue = 62,
	VehicleColorMetallicSaxonyBlue = 63,
	VehicleColorMetallicBlue = 64,
	VehicleColorMetallicMarinerBlue = 65,
	VehicleColorMetallicHarborBlue = 66,
	VehicleColorMetallicDiamondBlue = 67,
	VehicleColorMetallicSurfBlue = 68,
	VehicleColorMetallicNauticalBlue = 69,
	VehicleColorMetallicBrightBlue = 70,
	VehicleColorMetallicPurpleBlue = 71,
	VehicleColorMetallicSpinnakerBlue = 72,
	VehicleColorMetallicUltraBlue = 73,
	VehicleColorUtilDarkBlue = 75,
	VehicleColorUtilMidnightBlue = 76,
	VehicleColorUtilBlue = 77,
	VehicleColorUtilSeaFoamBlue = 78,
	VehicleColorUtilLightningBlue = 79,
	VehicleColorUtilMauiBluePoly = 80,
	VehicleColorUtilBrightBlue = 81,
	VehicleColorMatteDarkBlue = 82,
	VehicleColorMatteBlue = 83,
	VehicleColorMatteMidnightBlue = 84,
	VehicleColorWornDarkBlue = 85,
	VehicleColorWornBlue = 86,
	VehicleColorWornLightBlue = 87,
	VehicleColorMetallicTaxiYellow = 88,
	VehicleColorMetallicRaceYellow = 89,
	VehicleColorMetallicBronze = 90,
	VehicleColorMetallicYellowBird = 91,
	VehicleColorMetallicLime = 92,
	VehicleColorMetallicChampagne = 93,
	VehicleColorMetallicPuebloBeige = 94,
	VehicleColorMetallicDarkIvory = 95,
	VehicleColorMetallicChocoBrown = 96,
	VehicleColorMetallicGoldenBrown = 97,
	VehicleColorMetallicLightBrown = 98,
	VehicleColorMetallicStrawBeige = 99,
	VehicleColorMetallicMossBrown = 100,
	VehicleColorMetallicBistonBrown = 101,
	VehicleColorMetallicBeechwood = 102,
	VehicleColorMetallicDarkBeechwood = 103,
	VehicleColorMetallicChocoOrange = 104,
	VehicleColorMetallicBeachSand = 105,
	VehicleColorMetallicSunBleechedSand = 106,
	VehicleColorMetallicCream = 107,
	VehicleColorUtilBrown = 108,
	VehicleColorUtilMediumBrown = 109,
	VehicleColorUtilLightBrown = 110,
	VehicleColorMetallicWhite = 111,
	VehicleColorMetallicFrostWhite = 112,
	VehicleColorWornHoneyBeige = 113,
	VehicleColorWornBrown = 114,
	VehicleColorWornDarkBrown = 115,
	VehicleColorWornStrawBeige = 116,
	VehicleColorBrushedSteel = 117,
	VehicleColorBrushedBlackSteel = 118,
	VehicleColorBrushedAluminium = 119,
	VehicleColorChrome = 120,
	VehicleColorWornOffWhite = 121,
	VehicleColorUtilOffWhite = 122,
	VehicleColorWornOrange = 123,
	VehicleColorWornLightOrange = 124,
	VehicleColorMetallicSecuricorGreen = 125,
	VehicleColorWornTaxiYellow = 126,
	VehicleColorPoliceCarBlue = 127,
	VehicleColorMatteGreen = 128,
	VehicleColorMatteBrown = 129,
	VehicleColorMatteWhite = 131,
	VehicleColorWornWhite = 132,
	VehicleColorWornOliveArmyGreen = 133,
	VehicleColorPureWhite = 134,
	VehicleColorHotPink = 135,
	VehicleColorSalmonpink = 136,
	VehicleColorMetallicVermillionPink = 137,
	VehicleColorOrange = 138,
	VehicleColorGreen = 139,
	VehicleColorBlue = 140,
	VehicleColorMettalicBlackBlue = 141,
	VehicleColorMetallicBlackPurple = 142,
	VehicleColorMetallicBlackRed = 143,
	VehicleColorHunterGreen = 144,
	VehicleColorMetallicPurple = 145,
	VehicleColorMetaillicVDarkBlue = 146,
	VehicleColorModshopBlack1 = 147,
	VehicleColorMattePurple = 148,
	VehicleColorMatteDarkPurple = 149,
	VehicleColorMetallicLavaRed = 150,
	VehicleColorMatteForestGreen = 151,
	VehicleColorMatteOliveDrab = 152,
	VehicleColorMatteDesertBrown = 153,
	VehicleColorMatteDesertTan = 154,
	VehicleColorMatteFoliageGreen = 155,
	VehicleColorDefaultAlloyColor = 156,
	VehicleColorEpsilonBlue = 157,
	VehicleColorPureGold = 158,
	VehicleColorBrushedGold = 159,
};

enum eVehicleDoor
{
	VehicleDoorFrontRightDoor = 1,
	VehicleDoorFrontLeftDoor = 0,
	VehicleDoorBackRightDoor = 3,
	VehicleDoorBackLeftDoor = 2,
	VehicleDoorHood = 4,
	VehicleDoorTrunk = 5,
	VehicleDoorTrunk2 = 6,
};

enum eVehicleMod
{
	VehicleModSpoilers = 0,
	VehicleModFrontBumper = 1,
	VehicleModRearBumper = 2,
	VehicleModSideSkirt = 3,
	VehicleModExhaust = 4,
	VehicleModFrame = 5,
	VehicleModGrille = 6,
	VehicleModHood = 7,
	VehicleModFender = 8,
	VehicleModRightFender = 9,
	VehicleModRoof = 10,
	VehicleModEngine = 11,
	VehicleModBrakes = 12,
	VehicleModTransmission = 13,
	VehicleModHorns = 14,
	VehicleModSuspension = 15,
	VehicleModArmor = 16,
	VehicleModFrontWheels = 23,
	VehicleModBackWheels = 24 // only for motocycles
};

enum eVehicleNeonLight
{
	VehicleNeonLightLeft = 0,
	VehicleNeonLightRight = 1,
	VehicleNeonLightFront = 2,
	VehicleNeonLightBack = 3,
};

enum eVehicleRoofState
{
	VehicleRoofStateClosed,
	VehicleRoofStateOpening,
	VehicleRoofStateOpened,
	VehicleRoofStateClosing,
};

enum eVehicleSeat
{
	VehicleSeatNone = -3,
	VehicleSeatAny = -2,
	VehicleSeatDriver = -1,
	VehicleSeatPassenger = 0,
	VehicleSeatLeftFront = -1,
	VehicleSeatRightFront = 0,
	VehicleSeatLeftRear = 1,
	VehicleSeatRightRear = 2,
};

enum eVehicleToggleMod
{
	VehicleToggleModTurbo = 18,
	VehicleToggleModTireSmoke = 20,
	VehicleToggleModXenonHeadlights = 22
};

enum eVehicleWheelType
{
	VehicleWheelTypeSport = 0,
	VehicleWheelTypeMuscle = 1,
	VehicleWheelTypeLowrider = 2,
	VehicleWheelTypeSUV = 3,
	VehicleWheelTypeOffroad = 4,
	VehicleWheelTypeTuner = 5,
	VehicleWheelTypeBikeWheels = 6,
	VehicleWheelTypeHighEnd = 7
};

enum eVehicleWindow
{
	VehicleWindowFrontRight = 1,
	VehicleWindowFrontLeft = 0,
	VehicleWindowBackRight = 3,
	VehicleWindowBackLeft = 2
};

enum eVehicleWindowTint
{
	VehicleWindowTintNone = 0,
	VehicleWindowTintPureBlack = 1,
	VehicleWindowTintDarkSmoke = 2,
	VehicleWindowTintLightSmoke = 3,
	VehicleWindowTintStock = 4,
	VehicleWindowTintLimo = 5,
	VehicleWindowTintGreen = 6
};

enum eExplosionType
{
	ExplosionTypeSmallExplosion1 = 1,
	ExplosionTypeSmallExplosion2 = 2,
	ExplosionTypeMolotov1 = 3,
	ExplosionTypeSmallExplosionWithFire1 = 4,
	ExplosionTypeSmallExplosion3 = 5,
	ExplosionTypeSmallExplosionWithFire2 = 6,
	ExplosionTypeSmallExplosion4 = 7,
	ExplosionTypeExplosionWithFire1 = 8,
	ExplosionTypeExplosionWithFire2 = 9,
	ExplosionTypeSmallExplosionWithFire3 = 10,
	ExplosionTypeValveAir1 = 11,
	ExplosionTypeValveFire1 = 12,
	ExplosionTypeValveWater1 = 13,
	ExplosionTypeValveFire2 = 14,
	ExplosionTypeExplosionWithFire3 = 15,
	ExplosionTypeExplosionWithFire4 = 16,
	ExplosionTypeExplosion1 = 17,
	ExplosionTypeSmallExplosion5 = 18,
	ExplosionTypeSmoke1 = 19,
	ExplosionTypeGas1 = 20,
	ExplosionTypeGas2 = 21,
	ExplosionTypeSignalFire = 22,
	ExplosionTypeExplosionWithFire5 = 23,
	ExplosionTypeValveAir2 = 24,
	ExplosionTypeSmallExplosion6 = 25,
	ExplosionTypeExplosion2 = 26,
	ExplosionTypeExplosionWithFire6 = 27,
	ExplosionTypeExplosion3 = 28,
	ExplosionTypeBigExplosion1 = 29,
	ExplosionTypeValveFire3 = 30,
	ExplosionTypeExplosion4 = 31,
	ExplosionTypeExplosion5 = 32,
	ExplosionTypeSmallExplosion7 = 33,
	ExplosionTypeExplosion6 = 34
};

enum eIntersectFlags
{
	IntersectFlagsEverything = -1,
	IntersectFlagsMap = 1,
	IntersectFlagsMissionEntities = 2,
	IntersectFlagsPeds1 = 12, // 4 and 8 both seem to be peds
	IntersectFlagsObjects = 16,
	IntersectFlagsUnk1 = 32,
	IntersectFlagsUnk2 = 64,
	IntersectFlagsUnk3 = 128,
	IntersectFlagsVegetation = 256,
	IntersectFlagsUnk4 = 512
};

enum eMarkerType
{
	MarkerTypeUpsideDownCone = 0,
	MarkerTypeVerticalCylinder = 1,
	MarkerTypeThickChevronUp = 2,
	MarkerTypeThinChevronUp = 3,
	MarkerTypeCheckeredFlagRect = 4,
	MarkerTypeCheckeredFlagCircle = 5,
	MarkerTypeVerticleCircle = 6,
	MarkerTypePlaneModel = 7,
	MarkerTypeLostMCDark = 8,
	MarkerTypeLostMCLight = 9,
	MarkerTypeNumber0 = 10,
	MarkerTypeNumber1 = 11,
	MarkerTypeNumber2 = 12,
	MarkerTypeNumber3 = 13,
	MarkerTypeNumber4 = 14,
	MarkerTypeNumber5 = 15,
	MarkerTypeNumber6 = 16,
	MarkerTypeNumber7 = 17,
	MarkerTypeNumber8 = 18,
	MarkerTypeNumber9 = 19,
	MarkerTypeChevronUpx1 = 20,
	MarkerTypeChevronUpx2 = 21,
	MarkerTypeChevronUpx3 = 22,
	MarkerTypeHorizontalCircleFat = 23,
	MarkerTypeReplayIcon = 24,
	MarkerTypeHorizontalCircleSkinny = 25,
	MarkerTypeHorizontalCircleSkinny_Arrow = 26,
	MarkerTypeHorizontalSplitArrowCircle = 27,
	MarkerTypeDebugSphere = 28
};

enum eRelationship
{
	RelationshipHate = 5,
	RelationshipDislike = 4,
	RelationshipNeutral = 3,
	RelationshipLike = 2,
	RelationshipRespect = 1,
	RelationshipCompanion = 0,
	RelationshipPedestrians = 255 // or neutral
};

enum eRopeType
{
	RopeTypeNormal = 4,
};

enum eWeapon : DWORD
{
	WeaponKnife = 0x99B507EA,
	WeaponNightstick = 0x678B81B1,
	WeaponHammer = 0x4E875F73,
	WeaponBat = 0x958A4A8F,
	WeaponGolfClub = 0x440E4788,
	WeaponCrowbar = 0x84BD7BFD,
	WeaponPistol = 0x1B06D571,
	WeaponCombatPistol = 0x5EF9FEC4,
	WeaponAPPistol = 0x22D8FE39,
	WeaponPistol50 = 0x99AEEB3B,
	WeaponMicroSMG = 0x13532244,
	WeaponSMG = 0x2BE6766B,
	WeaponAssaultSMG = 0xEFE7E2DF,
	WeaponCombatPDW = 0x0A3D4D34,
	WeaponAssaultRifle = 0xBFEFFF6D,
	WeaponCarbineRifle = 0x83BF0278,
	WeaponAdvancedRifle = 0xAF113F99,
	WeaponMG = 0x9D07F764,
	WeaponCombatMG = 0x7FD62962,
	WeaponPumpShotgun = 0x1D073A89,
	WeaponSawnOffShotgun = 0x7846A318,
	WeaponAssaultShotgun = 0xE284C527,
	WeaponBullpupShotgun = 0x9D61E50F,
	WeaponStunGun = 0x3656C8C1,
	WeaponSniperRifle = 0x5FC3C11,
	WeaponHeavySniper = 0xC472FE2,
	WeaponGrenadeLauncher = 0xA284510B,
	WeaponGrenadeLauncherSmoke = 0x4DD2DC56,
	WeaponRPG = 0xB1CA77B1,
	WeaponMinigun = 0x42BF8A85,
	WeaponGrenade = 0x93E220BD,
	WeaponStickyBomb = 0x2C3731D9,
	WeaponSmokeGrenade = 0xFDBC8A50,
	WeaponBZGas = 0xA0973D5E,
	WeaponMolotov = 0x24B17070,
	WeaponFireExtinguisher = 0x60EC506,
	WeaponPetrolCan = 0x34A67B97,
	WeaponSNSPistol = 0xBFD21232,
	WeaponSpecialCarbine = 0xC0A3098D,
	WeaponHeavyPistol = 0xD205520E,
	WeaponBullpupRifle = 0x7F229F94,
	WeaponHomingLauncher = 0x63AB0442,
	WeaponProximityMine = 0xAB564B93,
	WeaponSnowball = 0x787F0BB,
	WeaponVintagePistol = 0x83839C4,
	WeaponDagger = 0x92A27487,
	WeaponFirework = 0x7F7497E5,
	WeaponMusket = 0xA89CB99E,
	WeaponMarksmanRifle = 0xC734385A,
	WeaponHeavyShotgun = 0x3AABBBAA,
	WeaponGusenberg = 0x61012683,
	WeaponHatchet = 0xF9DCBF2D,
	WeaponRailgun = 0x6D544C99,
	WeaponUnarmed = 0xA2719263
};

enum eHudComponent
{
	HudComponentMain = 0,
	HudComponentWantedStars,
	HudComponentWeaponIcon,
	HudComponentCash,
	HudComponentMpCash,
	HudComponentMpMessage,
	HudComponentVehicleName,
	HudComponentAreaName,
	HudComponentUnused,
	HudComponentStreetName,
	HudComponentHelpText,
	HudComponentFloatingHelpText1,
	HudComponentFloatingHelpText2,
	HudComponentCashChange,
	HudComponentReticle,
	HudComponentSubtitleText,
	HudComponentRadioStationsWheel,
	HudComponentSaving,
	HudComponentGameStreamUnused,
	HudComponentWeaponWheel,
	HudComponentWeaponWheelStats
};

