// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef TL_STEALTHGAME_TL_StealthGameProjectile_generated_h
#error "TL_StealthGameProjectile.generated.h already included, missing '#pragma once' in TL_StealthGameProjectile.h"
#endif
#define TL_STEALTHGAME_TL_StealthGameProjectile_generated_h

#define TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_SPARSE_DATA
#define TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATL_StealthGameProjectile(); \
	friend struct Z_Construct_UClass_ATL_StealthGameProjectile_Statics; \
public: \
	DECLARE_CLASS(ATL_StealthGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TL_StealthGame"), NO_API) \
	DECLARE_SERIALIZER(ATL_StealthGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATL_StealthGameProjectile(); \
	friend struct Z_Construct_UClass_ATL_StealthGameProjectile_Statics; \
public: \
	DECLARE_CLASS(ATL_StealthGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TL_StealthGame"), NO_API) \
	DECLARE_SERIALIZER(ATL_StealthGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATL_StealthGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATL_StealthGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATL_StealthGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATL_StealthGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATL_StealthGameProjectile(ATL_StealthGameProjectile&&); \
	NO_API ATL_StealthGameProjectile(const ATL_StealthGameProjectile&); \
public:


#define TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATL_StealthGameProjectile(ATL_StealthGameProjectile&&); \
	NO_API ATL_StealthGameProjectile(const ATL_StealthGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATL_StealthGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATL_StealthGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATL_StealthGameProjectile)


#define TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATL_StealthGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATL_StealthGameProjectile, ProjectileMovement); }


#define TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_9_PROLOG
#define TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_SPARSE_DATA \
	TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_RPC_WRAPPERS \
	TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_INCLASS \
	TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_SPARSE_DATA \
	TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_INCLASS_NO_PURE_DECLS \
	TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TL_STEALTHGAME_API UClass* StaticClass<class ATL_StealthGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TL_StealthGame_Source_TL_StealthGame_TL_StealthGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
