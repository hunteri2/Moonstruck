// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOONSTRUCK_V1_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define MOONSTRUCK_V1_Pickup_generated_h

#define Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_RPC_WRAPPERS
#define Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPickup(); \
	friend struct Z_Construct_UClass_UPickup_Statics; \
public: \
	DECLARE_CLASS(UPickup, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Moonstruck_v1"), NO_API) \
	DECLARE_SERIALIZER(UPickup)


#define Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPickup(); \
	friend struct Z_Construct_UClass_UPickup_Statics; \
public: \
	DECLARE_CLASS(UPickup, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Moonstruck_v1"), NO_API) \
	DECLARE_SERIALIZER(UPickup)


#define Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPickup(UPickup&&); \
	NO_API UPickup(const UPickup&); \
public:


#define Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPickup(UPickup&&); \
	NO_API UPickup(const UPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPickup)


#define Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_PRIVATE_PROPERTY_OFFSET
#define Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_13_PROLOG
#define Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_PRIVATE_PROPERTY_OFFSET \
	Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_RPC_WRAPPERS \
	Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_INCLASS \
	Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_PRIVATE_PROPERTY_OFFSET \
	Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_INCLASS_NO_PURE_DECLS \
	Moonstruck_v1_Source_Moonstruck_v1_Pickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOONSTRUCK_V1_API UClass* StaticClass<class UPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Moonstruck_v1_Source_Moonstruck_v1_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
