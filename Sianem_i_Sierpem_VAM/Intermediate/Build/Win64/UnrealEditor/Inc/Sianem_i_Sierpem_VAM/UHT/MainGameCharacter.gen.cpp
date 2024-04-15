// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sianem_i_Sierpem_VAM/MainGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SIANEM_I_SIERPEM_VAM_API UClass* Z_Construct_UClass_AMainGameCharacter();
	SIANEM_I_SIERPEM_VAM_API UClass* Z_Construct_UClass_AMainGameCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sianem_i_Sierpem_VAM();
// End Cross Module References
	void AMainGameCharacter::StaticRegisterNativesAMainGameCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainGameCharacter);
	UClass* Z_Construct_UClass_AMainGameCharacter_NoRegister()
	{
		return AMainGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMainGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Sianem_i_Sierpem_VAM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainGameCharacter.h" },
		{ "ModuleRelativePath", "MainGameCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainGameCharacter_Statics::ClassParams = {
		&AMainGameCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainGameCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMainGameCharacter()
	{
		if (!Z_Registration_Info_UClass_AMainGameCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainGameCharacter.OuterSingleton, Z_Construct_UClass_AMainGameCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainGameCharacter.OuterSingleton;
	}
	template<> SIANEM_I_SIERPEM_VAM_API UClass* StaticClass<AMainGameCharacter>()
	{
		return AMainGameCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameCharacter);
	AMainGameCharacter::~AMainGameCharacter() {}
	struct Z_CompiledInDeferFile_FID_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_MainGameCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_MainGameCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainGameCharacter, AMainGameCharacter::StaticClass, TEXT("AMainGameCharacter"), &Z_Registration_Info_UClass_AMainGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainGameCharacter), 2137733097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_MainGameCharacter_h_2747441225(TEXT("/Script/Sianem_i_Sierpem_VAM"),
		Z_CompiledInDeferFile_FID_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_MainGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_MainGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
