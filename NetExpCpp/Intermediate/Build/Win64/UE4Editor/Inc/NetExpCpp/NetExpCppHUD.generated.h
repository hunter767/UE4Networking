// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETEXPCPP_NetExpCppHUD_generated_h
#error "NetExpCppHUD.generated.h already included, missing '#pragma once' in NetExpCppHUD.h"
#endif
#define NETEXPCPP_NetExpCppHUD_generated_h

#define NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_RPC_WRAPPERS
#define NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetExpCppHUD(); \
	friend struct Z_Construct_UClass_ANetExpCppHUD_Statics; \
public: \
	DECLARE_CLASS(ANetExpCppHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetExpCpp"), NO_API) \
	DECLARE_SERIALIZER(ANetExpCppHUD)


#define NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANetExpCppHUD(); \
	friend struct Z_Construct_UClass_ANetExpCppHUD_Statics; \
public: \
	DECLARE_CLASS(ANetExpCppHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetExpCpp"), NO_API) \
	DECLARE_SERIALIZER(ANetExpCppHUD)


#define NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetExpCppHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetExpCppHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetExpCppHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetExpCppHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetExpCppHUD(ANetExpCppHUD&&); \
	NO_API ANetExpCppHUD(const ANetExpCppHUD&); \
public:


#define NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetExpCppHUD(ANetExpCppHUD&&); \
	NO_API ANetExpCppHUD(const ANetExpCppHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetExpCppHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetExpCppHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetExpCppHUD)


#define NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_9_PROLOG
#define NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_RPC_WRAPPERS \
	NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_INCLASS \
	NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_INCLASS_NO_PURE_DECLS \
	NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETEXPCPP_API UClass* StaticClass<class ANetExpCppHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetExpCpp_Source_NetExpCpp_NetExpCppHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
