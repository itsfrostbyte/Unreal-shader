// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderSandbox_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShaderSandbox;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShaderSandbox()
	{
		if (!Z_Registration_Info_UPackage__Script_ShaderSandbox.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShaderSandbox",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x12837AF5,
				0x3699BEAE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShaderSandbox.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShaderSandbox.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShaderSandbox(Z_Construct_UPackage__Script_ShaderSandbox, TEXT("/Script/ShaderSandbox"), Z_Registration_Info_UPackage__Script_ShaderSandbox, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x12837AF5, 0x3699BEAE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
