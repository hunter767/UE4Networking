// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef NETEXPCPP_NetExpCppProjectile_generated_h
#error "NetExpCppProjectile.generated.h already included, missing '#pragma once' in NetExpCppProjectile.h"
#endif
#define NETEXPCPP_NetExpCppProjectile_generated_h

#define NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetExpCppProjectile(); \
	friend struct Z_Construct_UClass_ANetExpCppProjectile_Statics; \
public: \
	DECLARE_CLASS(ANetExpCppProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetExpCpp"), NO_API) \
	DECLARE_SERIALIZER(ANetExpCppProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANetExpCppProjectile(); \
	friend struct Z_Construct_UClass_ANetExpCppProjectile_Statics; \
public: \
	DECLARE_CLASS(ANetExpCppProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetExpCpp"), NO_API) \
	DECLARE_SERIALIZER(ANetExpCppProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetExpCppProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetExpCppProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetExpCppProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetExpCppProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetExpCppProjectile(ANetExpCppProjectile&&); \
	NO_API ANetExpCppProjectile(const ANetExpCppProjectile&); \
public:


#define NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetExpCppProjectile(ANetExpCppProjectile&&); \
	NO_API ANetExpCppProjectile(const ANetExpCppProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetExpCppProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetExpCppProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetExpCppProjectile)


#define NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ANetExpCppProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ANetExpCppProjectile, ProjectileMovement); }


#define NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_9_PROLOG
#define NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_RPC_WRAPPERS \
	NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_INCLASS \
	NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_INCLASS_NO_PURE_DECLS \
	NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETEXPCPP_API UClass* StaticClass<class ANetExpCppProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetExpCpp_Source_NetExpCpp_NetExpCppProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
