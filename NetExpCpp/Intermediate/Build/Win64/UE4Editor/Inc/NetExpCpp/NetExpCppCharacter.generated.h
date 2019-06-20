// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETEXPCPP_NetExpCppCharacter_generated_h
#error "NetExpCppCharacter.generated.h already included, missing '#pragma once' in NetExpCppCharacter.h"
#endif
#define NETEXPCPP_NetExpCppCharacter_generated_h

#define NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_RPC_WRAPPERS
#define NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetExpCppCharacter(); \
	friend struct Z_Construct_UClass_ANetExpCppCharacter_Statics; \
public: \
	DECLARE_CLASS(ANetExpCppCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetExpCpp"), NO_API) \
	DECLARE_SERIALIZER(ANetExpCppCharacter)


#define NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesANetExpCppCharacter(); \
	friend struct Z_Construct_UClass_ANetExpCppCharacter_Statics; \
public: \
	DECLARE_CLASS(ANetExpCppCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetExpCpp"), NO_API) \
	DECLARE_SERIALIZER(ANetExpCppCharacter)


#define NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetExpCppCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetExpCppCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetExpCppCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetExpCppCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetExpCppCharacter(ANetExpCppCharacter&&); \
	NO_API ANetExpCppCharacter(const ANetExpCppCharacter&); \
public:


#define NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetExpCppCharacter(ANetExpCppCharacter&&); \
	NO_API ANetExpCppCharacter(const ANetExpCppCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetExpCppCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetExpCppCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetExpCppCharacter)


#define NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ANetExpCppCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ANetExpCppCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ANetExpCppCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ANetExpCppCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ANetExpCppCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ANetExpCppCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ANetExpCppCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ANetExpCppCharacter, L_MotionController); }


#define NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_11_PROLOG
#define NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_RPC_WRAPPERS \
	NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_INCLASS \
	NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_INCLASS_NO_PURE_DECLS \
	NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETEXPCPP_API UClass* StaticClass<class ANetExpCppCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetExpCpp_Source_NetExpCpp_NetExpCppCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
