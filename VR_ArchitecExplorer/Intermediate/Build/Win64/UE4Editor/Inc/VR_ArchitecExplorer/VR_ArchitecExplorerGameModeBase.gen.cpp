// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VR_ArchitecExplorer/VR_ArchitecExplorerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVR_ArchitecExplorerGameModeBase() {}
// Cross Module References
	VR_ARCHITECEXPLORER_API UClass* Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase_NoRegister();
	VR_ARCHITECEXPLORER_API UClass* Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VR_ArchitecExplorer();
// End Cross Module References
	void AVR_ArchitecExplorerGameModeBase::StaticRegisterNativesAVR_ArchitecExplorerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase_NoRegister()
	{
		return AVR_ArchitecExplorerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VR_ArchitecExplorer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VR_ArchitecExplorerGameModeBase.h" },
		{ "ModuleRelativePath", "VR_ArchitecExplorerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVR_ArchitecExplorerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase_Statics::ClassParams = {
		&AVR_ArchitecExplorerGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVR_ArchitecExplorerGameModeBase, 1282331884);
	template<> VR_ARCHITECEXPLORER_API UClass* StaticClass<AVR_ArchitecExplorerGameModeBase>()
	{
		return AVR_ArchitecExplorerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVR_ArchitecExplorerGameModeBase(Z_Construct_UClass_AVR_ArchitecExplorerGameModeBase, &AVR_ArchitecExplorerGameModeBase::StaticClass, TEXT("/Script/VR_ArchitecExplorer"), TEXT("AVR_ArchitecExplorerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVR_ArchitecExplorerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
