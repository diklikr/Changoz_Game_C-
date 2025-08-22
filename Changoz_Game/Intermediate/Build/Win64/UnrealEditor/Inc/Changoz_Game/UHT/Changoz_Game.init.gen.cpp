// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangoz_Game_init() {}
	CHANGOZ_GAME_API UFunction* Z_Construct_UDelegateFunction_Changoz_Game_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Changoz_Game;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Changoz_Game()
	{
		if (!Z_Registration_Info_UPackage__Script_Changoz_Game.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Changoz_Game_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Changoz_Game",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA4A74F16,
				0xBB7B45C2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Changoz_Game.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Changoz_Game.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Changoz_Game(Z_Construct_UPackage__Script_Changoz_Game, TEXT("/Script/Changoz_Game"), Z_Registration_Info_UPackage__Script_Changoz_Game, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA4A74F16, 0xBB7B45C2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
