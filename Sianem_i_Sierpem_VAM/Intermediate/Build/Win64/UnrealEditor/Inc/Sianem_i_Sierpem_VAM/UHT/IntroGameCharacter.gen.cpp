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
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "IntroGameCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IntroGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroGameCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_MappingContext_MetaData[] = {
		{ "Category", "IntroGameCharacter" },
		{ "ModuleRelativePath", "IntroGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroGameCharacter, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_MappingContext_MetaData), Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_MappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "IntroGameCharacter" },
		{ "ModuleRelativePath", "IntroGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroGameCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "IntroGameCharacter" },
		{ "ModuleRelativePath", "IntroGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroGameCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_LookAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIntroGameCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroGameCharacter_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntroGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntroGameCharacter_Statics::ClassParams = {
		&AIntroGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIntroGameCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntroGameCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameCharacter_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_AIntroGameCharacter, AIntroGameCharacter::StaticClass, TEXT("AIntroGameCharacter"), &Z_Registration_Info_UClass_AIntroGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntroGameCharacter), 3077110727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_IntroGameCharacter_h_2862129322(TEXT("/Script/Sianem_i_Sierpem_VAM"),
		Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_IntroGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Brajan_Desktop_Sierpem_i_zborzem_main_Sianem_i_Sierpem_VAM_Source_Sianem_i_Sierpem_VAM_IntroGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
