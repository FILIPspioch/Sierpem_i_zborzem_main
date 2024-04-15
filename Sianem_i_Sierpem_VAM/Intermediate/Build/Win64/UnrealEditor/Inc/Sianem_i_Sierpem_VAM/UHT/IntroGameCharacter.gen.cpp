// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sianem_i_Sierpem_VAM/IntroGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroGameCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SIANEM_I_SIERPEM_VAM_API UClass* Z_Construct_UClass_AIntroGameCharacter();
	SIANEM_I_SIERPEM_VAM_API UClass* Z_Construct_UClass_AIntroGameCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sianem_i_Sierpem_VAM();
// End Cross Module References
	void AIntroGameCharacter::StaticRegisterNativesAIntroGameCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIntroGameCharacter);
	UClass* Z_Construct_UClass_AIntroGameCharacter_NoRegister()
	{
		return AIntroGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AIntroGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIntroGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Sianem_i_Sierpem_VAM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "IntroGameCharacter.h" },
		{ "ModuleRelativePath", "IntroGameCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntroGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntroGameCharacter_Statics::ClassParams = {
		&AIntroGameCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntroGameCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AIntroGameCharacter()
	{
		if (!Z_Registration_Info_UClass_AIntroGameCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntroGameCharacter.OuterSingleton, Z_Construct_UClass_AIntroGameCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIntroGameCharacter.OuterSingleton;
	}
	template<> SIANEM_I_SIERPEM_VAM_API UClass* StaticClass<AIntroGameCharacter>()
	{
		return AIntroGameCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroGameCharacter);
	AIntroGameCharacter::~AIntroGameCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_IntroGameCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_IntroGameCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIntroGameCharacter, AIntroGameCharacter::StaticClass, TEXT("AIntroGameCharacter"), &Z_Registration_Info_UClass_AIntroGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntroGameCharacter), 2506206938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_IntroGameCharacter_h_1288298296(TEXT("/Script/Sianem_i_Sierpem_VAM"),
		Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_IntroGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_IntroGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
