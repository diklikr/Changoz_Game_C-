// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Changoz_Game/Public/Health.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealth() {}

// Begin Cross Module References
CHANGOZ_GAME_API UClass* Z_Construct_UClass_UHealth();
CHANGOZ_GAME_API UClass* Z_Construct_UClass_UHealth_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Changoz_Game();
// End Cross Module References

// Begin Class UHealth Function Heal
struct Z_Construct_UFunction_UHealth_Heal_Statics
{
	struct Health_eventHeal_Parms
	{
		float Heal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Health.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Heal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealth_Heal_Statics::NewProp_Heal = { "Heal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_eventHeal_Parms, Heal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealth_Heal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_Heal_Statics::NewProp_Heal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_Heal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealth_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealth, nullptr, "Heal", nullptr, nullptr, Z_Construct_UFunction_UHealth_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_Heal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealth_Heal_Statics::Health_eventHeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_Heal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealth_Heal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealth_Heal_Statics::Health_eventHeal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealth_Heal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealth_Heal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealth::execHeal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Heal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Heal(Z_Param_Heal);
	P_NATIVE_END;
}
// End Class UHealth Function Heal

// Begin Class UHealth Function TakeDamage
struct Z_Construct_UFunction_UHealth_TakeDamage_Statics
{
	struct Health_eventTakeDamage_Parms
	{
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Health.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealth_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealth_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_TakeDamage_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealth_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealth, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_UHealth_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealth_TakeDamage_Statics::Health_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealth_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealth_TakeDamage_Statics::Health_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealth_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealth_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealth::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_Damage);
	P_NATIVE_END;
}
// End Class UHealth Function TakeDamage

// Begin Class UHealth
void UHealth::StaticRegisterNativesUHealth()
{
	UClass* Class = UHealth::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Heal", &UHealth::execHeal },
		{ "TakeDamage", &UHealth::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealth);
UClass* Z_Construct_UClass_UHealth_NoRegister()
{
	return UHealth::StaticClass();
}
struct Z_Construct_UClass_UHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Health.h" },
		{ "ModuleRelativePath", "Public/Health.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Health.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Health.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealth_Heal, "Heal" }, // 4129689325
		{ &Z_Construct_UFunction_UHealth_TakeDamage, "TakeDamage" }, // 2579966493
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealth_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth, currentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentHealth_MetaData), NewProp_currentHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_Statics::NewProp_currentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Changoz_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealth_Statics::ClassParams = {
	&UHealth::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealth_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealth()
{
	if (!Z_Registration_Info_UClass_UHealth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealth.OuterSingleton, Z_Construct_UClass_UHealth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealth.OuterSingleton;
}
template<> CHANGOZ_GAME_API UClass* StaticClass<UHealth>()
{
	return UHealth::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealth);
UHealth::~UHealth() {}
// End Class UHealth

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealth, UHealth::StaticClass, TEXT("UHealth"), &Z_Registration_Info_UClass_UHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealth), 3255257292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_2757760428(TEXT("/Script/Changoz_Game"),
	Z_CompiledInDeferFile_FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
