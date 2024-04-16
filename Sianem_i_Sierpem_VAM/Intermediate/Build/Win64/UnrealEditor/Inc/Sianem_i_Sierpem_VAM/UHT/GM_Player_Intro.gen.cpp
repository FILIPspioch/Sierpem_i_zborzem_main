// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sianem_i_Sierpem_VAM/GM_Player_Intro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_Player_Intro() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SIANEM_I_SIERPEM_VAM_API UClass* Z_Construct_UClass_AGM_Player_Intro();
	SIANEM_I_SIERPEM_VAM_API UClass* Z_Construct_UClass_AGM_Player_Intro_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sianem_i_Sierpem_VAM();
// End Cross Module References
	void AGM_Player_Intro::StaticRegisterNativesAGM_Player_Intro()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGM_Player_Intro);
	UClass* Z_Construct_UClass_AGM_Player_Intro_NoRegister()
	{
		return AGM_Player_Intro::StaticClass();
	}
	struct Z_Construct_UClass_AGM_Player_Intro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_Player_Intro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sianem_i_Sierpem_VAM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Player_Intro_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Player_Intro_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GM_Player_Intro.h" },
		{ "ModuleRelativePath", "GM_Player_Intro.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_Player_Intro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_Player_Intro>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_Player_Intro_Statics::ClassParams = {
		&AGM_Player_Intro::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Player_Intro_Statics::Class_MetaDataParams), Z_Construct_UClass_AGM_Player_Intro_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGM_Player_Intro()
	{
		if (!Z_Registration_Info_UClass_AGM_Player_Intro.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGM_Player_Intro.OuterSingleton, Z_Construct_UClass_AGM_Player_Intro_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGM_Player_Intro.OuterSingleton;
	}
	template<> SIANEM_I_SIERPEM_VAM_API UClass* StaticClass<AGM_Player_Intro>()
	{
		return AGM_Player_Intro::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_Player_Intro);
	AGM_Player_Intro::~AGM_Player_Intro() {}
	struct Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_GM_Player_Intro_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_GM_Player_Intro_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGM_Player_Intro, AGM_Player_Intro::StaticClass, TEXT("AGM_Player_Intro"), &Z_Registration_Info_UClass_AGM_Player_Intro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_Player_Intro), 1531771241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_GM_Player_Intro_h_1440396767(TEXT("/Script/Sianem_i_Sierpem_VAM"),
		Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_GM_Player_Intro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_GM_Player_Intro_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
