// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovingPlatform2.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_PROJECT_6_MovingPlatform2_generated_h
#error "MovingPlatform2.generated.h already included, missing '#pragma once' in MovingPlatform2.h"
#endif
#define NBC_PROJECT_6_MovingPlatform2_generated_h

#define FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRotationSpeed); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execRotateActorPosition); \
	DECLARE_FUNCTION(execMoveActorPosition);


#define FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingPlatform2(); \
	friend struct Z_Construct_UClass_AMovingPlatform2_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform2, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_Project_6"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform2)


#define FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMovingPlatform2(AMovingPlatform2&&); \
	AMovingPlatform2(const AMovingPlatform2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingPlatform2) \
	NO_API virtual ~AMovingPlatform2();


#define FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_9_PROLOG
#define FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_12_INCLASS_NO_PURE_DECLS \
	FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_6_API UClass* StaticClass<class AMovingPlatform2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
