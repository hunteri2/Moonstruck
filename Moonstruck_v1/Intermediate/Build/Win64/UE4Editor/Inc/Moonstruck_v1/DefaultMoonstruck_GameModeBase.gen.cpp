// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Moonstruck_v1/DefaultMoonstruck_GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultMoonstruck_GameModeBase() {}
// Cross Module References
	MOONSTRUCK_V1_API UClass* Z_Construct_UClass_ADefaultMoonstruck_GameModeBase_NoRegister();
	MOONSTRUCK_V1_API UClass* Z_Construct_UClass_ADefaultMoonstruck_GameModeBase();
	MOONSTRUCK_V1_API UClass* Z_Construct_UClass_AMoonstruck_v1GameModeBase();
	UPackage* Z_Construct_UPackage__Script_Moonstruck_v1();
// End Cross Module References
	void ADefaultMoonstruck_GameModeBase::StaticRegisterNativesADefaultMoonstruck_GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADefaultMoonstruck_GameModeBase_NoRegister()
	{
		return ADefaultMoonstruck_GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultMoonstruck_GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultMoonstruck_GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMoonstruck_v1GameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Moonstruck_v1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultMoonstruck_GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DefaultMoonstruck_GameModeBase.h" },
		{ "ModuleRelativePath", "DefaultMoonstruck_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultMoonstruck_GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultMoonstruck_GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultMoonstruck_GameModeBase_Statics::ClassParams = {
		&ADefaultMoonstruck_GameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultMoonstruck_GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADefaultMoonstruck_GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultMoonstruck_GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultMoonstruck_GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultMoonstruck_GameModeBase, 2606739263);
	template<> MOONSTRUCK_V1_API UClass* StaticClass<ADefaultMoonstruck_GameModeBase>()
	{
		return ADefaultMoonstruck_GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultMoonstruck_GameModeBase(Z_Construct_UClass_ADefaultMoonstruck_GameModeBase, &ADefaultMoonstruck_GameModeBase::StaticClass, TEXT("/Script/Moonstruck_v1"), TEXT("ADefaultMoonstruck_GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultMoonstruck_GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
