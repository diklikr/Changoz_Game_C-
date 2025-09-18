// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Changoz_GamePickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AChangoz_GameCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CHANGOZ_GAME_Changoz_GamePickUpComponent_generated_h
#error "Changoz_GamePickUpComponent.generated.h already included, missing '#pragma once' in Changoz_GamePickUpComponent.h"
#endif
#define CHANGOZ_GAME_Changoz_GamePickUpComponent_generated_h

#define FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GamePickUpComponent_h_12_DELEGATE \
CHANGOZ_GAME_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AChangoz_GameCharacter* PickUpCharacter);


#define FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GamePickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GamePickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChangoz_GamePickUpComponent(); \
	friend struct Z_Construct_UClass_UChangoz_GamePickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UChangoz_GamePickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Changoz_Game"), NO_API) \
	DECLARE_SERIALIZER(UChangoz_GamePickUpComponent)


#define FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GamePickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChangoz_GamePickUpComponent(UChangoz_GamePickUpComponent&&); \
	UChangoz_GamePickUpComponent(const UChangoz_GamePickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChangoz_GamePickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChangoz_GamePickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChangoz_GamePickUpComponent) \
	NO_API virtual ~UChangoz_GamePickUpComponent();


#define FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GamePickUpComponent_h_14_PROLOG
#define FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GamePickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GamePickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GamePickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GamePickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHANGOZ_GAME_API UClass* StaticClass<class UChangoz_GamePickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_inaki_OneDrive_Desktop_School_TRI_3_Changoz_Game_C__Changoz_Game_Source_Changoz_Game_Changoz_GamePickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
