// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovingPlatform1.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_PROJECT_6_MovingPlatform1_generated_h
#error "MovingPlatform1.generated.h already included, missing '#pragma once' in MovingPlatform1.h"
#endif
#define NBC_PROJECT_6_MovingPlatform1_generated_h

#define FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRotationSpeed); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execRotateActorPosition); \
	DECLARE_FUNCTION(execMoveActorPosition);


#define FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingPlatform1(); \
	friend struct Z_Construct_UClass_AMovingPlatform1_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform1, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_Project_6"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform1)


#define FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMovingPlatform1(AMovingPlatform1&&); \
	AMovingPlatform1(const AMovingPlatform1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingPlatform1) \
	NO_API virtual ~AMovingPlatform1();


#define FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_9_PROLOG
#define FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_12_INCLASS_NO_PURE_DECLS \
	FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_PROJECT_6_API UClass* StaticClass<class AMovingPlatform1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
