// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetExpCpp/NetExpCppGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetExpCppGameMode() {}
// Cross Module References
	NETEXPCPP_API UClass* Z_Construct_UClass_ANetExpCppGameMode_NoRegister();
	NETEXPCPP_API UClass* Z_Construct_UClass_ANetExpCppGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NetExpCpp();
// End Cross Module References
	void ANetExpCppGameMode::StaticRegisterNativesANetExpCppGameMode()
	{
	}
	UClass* Z_Construct_UClass_ANetExpCppGameMode_NoRegister()
	{
		return ANetExpCppGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANetExpCppGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetExpCppGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NetExpCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetExpCppGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NetExpCppGameMode.h" },
		{ "ModuleRelativePath", "NetExpCppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetExpCppGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetExpCppGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetExpCppGameMode_Statics::ClassParams = {
		&ANetExpCppGameMode::StaticClass,
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
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ANetExpCppGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANetExpCppGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetExpCppGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetExpCppGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetExpCppGameMode, 3284790195);
	template<> NETEXPCPP_API UClass* StaticClass<ANetExpCppGameMode>()
	{
		return ANetExpCppGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetExpCppGameMode(Z_Construct_UClass_ANetExpCppGameMode, &ANetExpCppGameMode::StaticClass, TEXT("/Script/NetExpCpp"), TEXT("ANetExpCppGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetExpCppGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
