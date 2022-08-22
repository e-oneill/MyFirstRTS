// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFIRSTRTS_UnitStructs_generated_h
#error "UnitStructs.generated.h already included, missing '#pragma once' in UnitStructs.h"
#endif
#define MYFIRSTRTS_UnitStructs_generated_h

#define FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_UnitStructs_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMission_Statics; \
	MYFIRSTRTS_API static class UScriptStruct* StaticStruct();


template<> MYFIRSTRTS_API UScriptStruct* StaticStruct<struct FMission>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyFirstRTS_Source_MyFirstRTS_Public_Structs_UnitStructs_h


#define FOREACH_ENUM_EBOTSTATUS(op) \
	op(Idle) \
	op(Moving) \
	op(MovingToExtract) \
	op(MovingToConstruct) \
	op(MovingToDeposit) \
	op(MovingToAttack) \
	op(Extracting) \
	op(Depositing) \
	op(Collecting) \
	op(Constructing) \
	op(Attacking) 
#define FOREACH_ENUM_EMISSIONTYPE(op) \
	op(Nothing) \
	op(FindFood) \
	op(FindWater) \
	op(AttendServices) \
	op(Sleep) \
	op(Guard) \
	op(MoveToLocation) \
	op(AttackMoveToLocation) \
	op(MoveToAndBuild) \
	op(ExtractAndDeposit) \
	op(Transport) \
	op(AttackTarget) 
#define FOREACH_ENUM_EJOBTYPE(op) \
	op(Unemployed) \
	op(Builder) \
	op(Woodcutter) \
	op(Miner) \
	op(Farmer) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
