// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Changoz_Game/Public/MyChangoz_GameWeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyChangoz_GameWeaponComponent() {}

// Begin Cross Module References
CHANGOZ_GAME_API UClass* Z_Construct_UClass_UChangoz_GameWeaponComponent();
CHANGOZ_GAME_API UClass* Z_Construct_UClass_UMyChangoz_GameWeaponComponent();
CHANGOZ_GAME_API UClass* Z_Construct_UClass_UMyChangoz_GameWeaponComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Changoz_Game();
// End Cross Module References

// Begin Class UMyChangoz_GameWeaponComponent
void UMyChangoz_GameWeaponComponent::StaticRegisterNativesUMyChangoz_GameWeaponComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyChangoz_GameWeaponComponent);
UClass* Z_Construct_UClass_UMyChangoz_GameWeaponComponent_NoRegister()
{
	return UMyChangoz_GameWeaponComponent::StaticClass();
}
struct Z_Construct_UClass_UMyChangoz_GameWeaponComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "MyChangoz_GameWeaponComponent.h" },
		{ "ModuleRelativePath", "Public/MyChangoz_GameWeaponComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyChangoz_GameWeaponComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyChangoz_GameWeaponComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChangoz_GameWeaponComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Changoz_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyChangoz_GameWeaponComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyChangoz_GameWeaponComponent_Statics::ClassParams = {
	&UMyChangoz_GameWeaponComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyChangoz_GameWeaponComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyChangoz_GameWeaponComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyChangoz_GameWeaponComponent()
{
	if (!Z_Registration_Info_UClass_UMyChangoz_GameWeaponComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyChangoz_GameWeaponComponent.OuterSingleton, Z_Construct_UClass_UMyChangoz_GameWeaponComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyChangoz_GameWeaponComponent.OuterSingleton;
}
template<> CHANGOZ_GAME_API UClass* StaticClass<UMyChangoz_GameWeaponComponent>()
{
	return UMyChangoz_GameWeaponComponent::StaticClass();
}
UMyChangoz_GameWeaponComponent::UMyChangoz_GameWeaponComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyChangoz_GameWeaponComponent);
UMyChangoz_GameWeaponComponent::~UMyChangoz_GameWeaponComponent() {}
// End Class UMyChangoz_GameWeaponComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_MyChangoz_GameWeaponComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyChangoz_GameWeaponComponent, UMyChangoz_GameWeaponComponent::StaticClass, TEXT("UMyChangoz_GameWeaponComponent"), &Z_Registration_Info_UClass_UMyChangoz_GameWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyChangoz_GameWeaponComponent), 2272706579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_MyChangoz_GameWeaponComponent_h_4075346331(TEXT("/Script/Changoz_Game"),
	Z_CompiledInDeferFile_FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_MyChangoz_GameWeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_MyChangoz_GameWeaponComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
