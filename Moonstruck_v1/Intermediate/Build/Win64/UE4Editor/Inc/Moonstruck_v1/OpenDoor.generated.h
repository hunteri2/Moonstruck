// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOONSTRUCK_V1_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define MOONSTRUCK_V1_OpenDoor_generated_h

#define Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_RPC_WRAPPERS
#define Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Moonstruck_v1"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Moonstruck_v1"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DoorAngle() { return STRUCT_OFFSET(UOpenDoor, DoorAngle); } \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UOpenDoor, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__DoorCloseDelay() { return STRUCT_OFFSET(UOpenDoor, DoorCloseDelay); }


#define Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_12_PROLOG
#define Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_RPC_WRAPPERS \
	Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_INCLASS \
	Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_INCLASS_NO_PURE_DECLS \
	Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONSTRUCK_V1_API UClass* StaticClass<class UOpenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Moonstruck_v1_Source_Moonstruck_v1_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
