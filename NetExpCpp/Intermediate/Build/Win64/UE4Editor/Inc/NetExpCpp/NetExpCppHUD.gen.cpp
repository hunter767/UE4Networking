// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetExpCpp/NetExpCppHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetExpCppHUD() {}
// Cross Module References
	NETEXPCPP_API UClass* Z_Construct_UClass_ANetExpCppHUD_NoRegister();
	NETEXPCPP_API UClass* Z_Construct_UClass_ANetExpCppHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_NetExpCpp();
// End Cross Module References
	void ANetExpCppHUD::StaticRegisterNativesANetExpCppHUD()
	{
	}
	UClass* Z_Construct_UClass_ANetExpCppHUD_NoRegister()
	{
		return ANetExpCppHUD::StaticClass();
	}
	struct Z_Construct_UClass_ANetExpCppHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetExpCppHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_NetExpCpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetExpCppHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "NetExpCppHUD.h" },
		{ "ModuleRelativePath", "NetExpCppHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetExpCppHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetExpCppHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetExpCppHUD_Statics::ClassParams = {
		&ANetExpCppHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANetExpCppHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANetExpCppHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetExpCppHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetExpCppHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetExpCppHUD, 685743012);
	template<> NETEXPCPP_API UClass* StaticClass<ANetExpCppHUD>()
	{
		return ANetExpCppHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetExpCppHUD(Z_Construct_UClass_ANetExpCppHUD, &ANetExpCppHUD::StaticClass, TEXT("/Script/NetExpCpp"), TEXT("ANetExpCppHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetExpCppHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
