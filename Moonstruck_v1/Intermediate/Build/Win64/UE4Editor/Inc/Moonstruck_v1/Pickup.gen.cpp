// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Moonstruck_v1/Pickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}
// Cross Module References
	MOONSTRUCK_V1_API UClass* Z_Construct_UClass_UPickup_NoRegister();
	MOONSTRUCK_V1_API UClass* Z_Construct_UClass_UPickup();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Moonstruck_v1();
// End Cross Module References
	void UPickup::StaticRegisterNativesUPickup()
	{
	}
	UClass* Z_Construct_UClass_UPickup_NoRegister()
	{
		return UPickup::StaticClass();
	}
	struct Z_Construct_UClass_UPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Moonstruck_v1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPickup_Statics::ClassParams = {
		&UPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPickup, 2704456724);
	template<> MOONSTRUCK_V1_API UClass* StaticClass<UPickup>()
	{
		return UPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPickup(Z_Construct_UClass_UPickup, &UPickup::StaticClass, TEXT("/Script/Moonstruck_v1"), TEXT("UPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
