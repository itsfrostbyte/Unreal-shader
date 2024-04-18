// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShaderSandbox/ShaderSandboxGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderSandboxGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SHADERSANDBOX_API UClass* Z_Construct_UClass_AShaderSandboxGameMode();
	SHADERSANDBOX_API UClass* Z_Construct_UClass_AShaderSandboxGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShaderSandbox();
// End Cross Module References
	void AShaderSandboxGameMode::StaticRegisterNativesAShaderSandboxGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShaderSandboxGameMode);
	UClass* Z_Construct_UClass_AShaderSandboxGameMode_NoRegister()
	{
		return AShaderSandboxGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShaderSandboxGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShaderSandboxGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShaderSandbox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShaderSandboxGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShaderSandboxGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShaderSandboxGameMode.h" },
		{ "ModuleRelativePath", "ShaderSandboxGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShaderSandboxGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShaderSandboxGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShaderSandboxGameMode_Statics::ClassParams = {
		&AShaderSandboxGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShaderSandboxGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AShaderSandboxGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AShaderSandboxGameMode()
	{
		if (!Z_Registration_Info_UClass_AShaderSandboxGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShaderSandboxGameMode.OuterSingleton, Z_Construct_UClass_AShaderSandboxGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShaderSandboxGameMode.OuterSingleton;
	}
	template<> SHADERSANDBOX_API UClass* StaticClass<AShaderSandboxGameMode>()
	{
		return AShaderSandboxGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShaderSandboxGameMode);
	AShaderSandboxGameMode::~AShaderSandboxGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_omayh_Documents_Unreal_Projects_ShaderSandbox_Source_ShaderSandbox_ShaderSandboxGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_omayh_Documents_Unreal_Projects_ShaderSandbox_Source_ShaderSandbox_ShaderSandboxGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShaderSandboxGameMode, AShaderSandboxGameMode::StaticClass, TEXT("AShaderSandboxGameMode"), &Z_Registration_Info_UClass_AShaderSandboxGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShaderSandboxGameMode), 1259628726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_omayh_Documents_Unreal_Projects_ShaderSandbox_Source_ShaderSandbox_ShaderSandboxGameMode_h_833559174(TEXT("/Script/ShaderSandbox"),
		Z_CompiledInDeferFile_FID_Users_omayh_Documents_Unreal_Projects_ShaderSandbox_Source_ShaderSandbox_ShaderSandboxGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_omayh_Documents_Unreal_Projects_ShaderSandbox_Source_ShaderSandbox_ShaderSandboxGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
