// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TL_StealthGame/TL_StealthGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTL_StealthGameGameMode() {}
// Cross Module References
	TL_STEALTHGAME_API UClass* Z_Construct_UClass_ATL_StealthGameGameMode_NoRegister();
	TL_STEALTHGAME_API UClass* Z_Construct_UClass_ATL_StealthGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TL_StealthGame();
// End Cross Module References
	void ATL_StealthGameGameMode::StaticRegisterNativesATL_StealthGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATL_StealthGameGameMode_NoRegister()
	{
		return ATL_StealthGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATL_StealthGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATL_StealthGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TL_StealthGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATL_StealthGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TL_StealthGameGameMode.h" },
		{ "ModuleRelativePath", "TL_StealthGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATL_StealthGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATL_StealthGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATL_StealthGameGameMode_Statics::ClassParams = {
		&ATL_StealthGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATL_StealthGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATL_StealthGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATL_StealthGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATL_StealthGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATL_StealthGameGameMode, 819813905);
	template<> TL_STEALTHGAME_API UClass* StaticClass<ATL_StealthGameGameMode>()
	{
		return ATL_StealthGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATL_StealthGameGameMode(Z_Construct_UClass_ATL_StealthGameGameMode, &ATL_StealthGameGameMode::StaticClass, TEXT("/Script/TL_StealthGame"), TEXT("ATL_StealthGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATL_StealthGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
