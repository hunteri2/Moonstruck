// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Moonstruck_v1/Moonstruck_v1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoonstruck_v1GameModeBase() {}
// Cross Module References
	MOONSTRUCK_V1_API UClass* Z_Construct_UClass_AMoonstruck_v1GameModeBase_NoRegister();
	MOONSTRUCK_V1_API UClass* Z_Construct_UClass_AMoonstruck_v1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Moonstruck_v1();
// End Cross Module References
	void AMoonstruck_v1GameModeBase::StaticRegisterNativesAMoonstruck_v1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMoonstruck_v1GameModeBase_NoRegister()
	{
		return AMoonstruck_v1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMoonstruck_v1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoonstruck_v1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Moonstruck_v1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoonstruck_v1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Moonstruck_v1GameModeBase.h" },
		{ "ModuleRelativePath", "Moonstruck_v1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoonstruck_v1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoonstruck_v1GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoonstruck_v1GameModeBase_Statics::ClassParams = {
		&AMoonstruck_v1GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMoonstruck_v1GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMoonstruck_v1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoonstruck_v1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoonstruck_v1GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoonstruck_v1GameModeBase, 3252879699);
	template<> MOONSTRUCK_V1_API UClass* StaticClass<AMoonstruck_v1GameModeBase>()
	{
		return AMoonstruck_v1GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoonstruck_v1GameModeBase(Z_Construct_UClass_AMoonstruck_v1GameModeBase, &AMoonstruck_v1GameModeBase::StaticClass, TEXT("/Script/Moonstruck_v1"), TEXT("AMoonstruck_v1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoonstruck_v1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
