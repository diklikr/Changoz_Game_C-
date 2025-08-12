// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Health.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHANGOZ_GAME_Health_generated_h
#error "Health.generated.h already included, missing '#pragma once' in Health.h"
#endif
#define CHANGOZ_GAME_Health_generated_h

#define FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealth(); \
	friend struct Z_Construct_UClass_UHealth_Statics; \
public: \
	DECLARE_CLASS(UHealth, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Changoz_Game"), NO_API) \
	DECLARE_SERIALIZER(UHealth)


#define FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealth(UHealth&&); \
	UHealth(const UHealth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealth) \
	NO_API virtual ~UHealth();


#define FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_9_PROLOG
#define FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHANGOZ_GAME_API UClass* StaticClass<class UHealth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Estudiante_Desktop_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Public_Health_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
