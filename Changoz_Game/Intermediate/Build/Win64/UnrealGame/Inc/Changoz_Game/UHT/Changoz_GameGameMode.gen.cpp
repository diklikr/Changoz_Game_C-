// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Changoz_Game/Changoz_GameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangoz_GameGameMode() {}

// Begin Cross Module References
CHANGOZ_GAME_API UClass* Z_Construct_UClass_AChangoz_GameGameMode();
CHANGOZ_GAME_API UClass* Z_Construct_UClass_AChangoz_GameGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Changoz_Game();
// End Cross Module References

// Begin Class AChangoz_GameGameMode
void AChangoz_GameGameMode::StaticRegisterNativesAChangoz_GameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChangoz_GameGameMode);
UClass* Z_Construct_UClass_AChangoz_GameGameMode_NoRegister()
{
	return AChangoz_GameGameMode::StaticClass();
}
struct Z_Construct_UClass_AChangoz_GameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Changoz_GameGameMode.h" },
		{ "ModuleRelativePath", "Changoz_GameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChangoz_GameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AChangoz_GameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Changoz_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChangoz_GameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChangoz_GameGameMode_Statics::ClassParams = {
	&AChangoz_GameGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChangoz_GameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AChangoz_GameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChangoz_GameGameMode()
{
	if (!Z_Registration_Info_UClass_AChangoz_GameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChangoz_GameGameMode.OuterSingleton, Z_Construct_UClass_AChangoz_GameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChangoz_GameGameMode.OuterSingleton;
}
template<> CHANGOZ_GAME_API UClass* StaticClass<AChangoz_GameGameMode>()
{
	return AChangoz_GameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChangoz_GameGameMode);
AChangoz_GameGameMode::~AChangoz_GameGameMode() {}
// End Class AChangoz_GameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChangoz_GameGameMode, AChangoz_GameGameMode::StaticClass, TEXT("AChangoz_GameGameMode"), &Z_Registration_Info_UClass_AChangoz_GameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChangoz_GameGameMode), 731319386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GameGameMode_h_719024693(TEXT("/Script/Changoz_Game"),
	Z_CompiledInDeferFile_FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
