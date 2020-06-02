// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TL_StealthGame/TL_StealthGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTL_StealthGameHUD() {}
// Cross Module References
	TL_STEALTHGAME_API UClass* Z_Construct_UClass_ATL_StealthGameHUD_NoRegister();
	TL_STEALTHGAME_API UClass* Z_Construct_UClass_ATL_StealthGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TL_StealthGame();
// End Cross Module References
	void ATL_StealthGameHUD::StaticRegisterNativesATL_StealthGameHUD()
	{
	}
	UClass* Z_Construct_UClass_ATL_StealthGameHUD_NoRegister()
	{
		return ATL_StealthGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATL_StealthGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATL_StealthGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TL_StealthGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATL_StealthGameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TL_StealthGameHUD.h" },
		{ "ModuleRelativePath", "TL_StealthGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATL_StealthGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATL_StealthGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATL_StealthGameHUD_Statics::ClassParams = {
		&ATL_StealthGameHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATL_StealthGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATL_StealthGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATL_StealthGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATL_StealthGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATL_StealthGameHUD, 3955770958);
	template<> TL_STEALTHGAME_API UClass* StaticClass<ATL_StealthGameHUD>()
	{
		return ATL_StealthGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATL_StealthGameHUD(Z_Construct_UClass_ATL_StealthGameHUD, &ATL_StealthGameHUD::StaticClass, TEXT("/Script/TL_StealthGame"), TEXT("ATL_StealthGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATL_StealthGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
