// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_6/Private/MovingPlatform2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform2() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AMovingPlatform2();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AMovingPlatform2_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_6();
// End Cross Module References

// Begin Class AMovingPlatform2 Function GetMoveSpeed
struct Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics
{
	struct MovingPlatform2_eventGetMoveSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform2_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform2, nullptr, "GetMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::MovingPlatform2_eventGetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::MovingPlatform2_eventGetMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform2::execGetMoveSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
	P_NATIVE_END;
}
// End Class AMovingPlatform2 Function GetMoveSpeed

// Begin Class AMovingPlatform2 Function GetRotationSpeed
struct Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics
{
	struct MovingPlatform2_eventGetRotationSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform2_eventGetRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform2, nullptr, "GetRotationSpeed", nullptr, nullptr, Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::MovingPlatform2_eventGetRotationSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::MovingPlatform2_eventGetRotationSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform2::execGetRotationSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRotationSpeed();
	P_NATIVE_END;
}
// End Class AMovingPlatform2 Function GetRotationSpeed

// Begin Class AMovingPlatform2 Function MoveActorPosition
struct Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics
{
	struct MovingPlatform2_eventMoveActorPosition_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Actions" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform2_eventMoveActorPosition_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform2, nullptr, "MoveActorPosition", nullptr, nullptr, Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::MovingPlatform2_eventMoveActorPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::MovingPlatform2_eventMoveActorPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform2::execMoveActorPosition)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveActorPosition(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AMovingPlatform2 Function MoveActorPosition

// Begin Class AMovingPlatform2 Function RotateActorPosition
struct Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics
{
	struct MovingPlatform2_eventRotateActorPosition_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Actions" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform2_eventRotateActorPosition_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform2, nullptr, "RotateActorPosition", nullptr, nullptr, Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::MovingPlatform2_eventRotateActorPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::MovingPlatform2_eventRotateActorPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform2::execRotateActorPosition)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateActorPosition(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AMovingPlatform2 Function RotateActorPosition

// Begin Class AMovingPlatform2
void AMovingPlatform2::StaticRegisterNativesAMovingPlatform2()
{
	UClass* Class = AMovingPlatform2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMoveSpeed", &AMovingPlatform2::execGetMoveSpeed },
		{ "GetRotationSpeed", &AMovingPlatform2::execGetRotationSpeed },
		{ "MoveActorPosition", &AMovingPlatform2::execMoveActorPosition },
		{ "RotateActorPosition", &AMovingPlatform2::execRotateActorPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform2);
UClass* Z_Construct_UClass_AMovingPlatform2_NoRegister()
{
	return AMovingPlatform2::StaticClass();
}
struct Z_Construct_UClass_AMovingPlatform2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform2.h" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveDistance_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMoveDistance_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotateAngle_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotateAngle_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTurn_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMoveDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMoveDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRotateAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRotateAngle;
	static void NewProp_IsTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTurn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingPlatform2_GetMoveSpeed, "GetMoveSpeed" }, // 2853443996
		{ &Z_Construct_UFunction_AMovingPlatform2_GetRotationSpeed, "GetRotationSpeed" }, // 1975101401
		{ &Z_Construct_UFunction_AMovingPlatform2_MoveActorPosition, "MoveActorPosition" }, // 4112427284
		{ &Z_Construct_UFunction_AMovingPlatform2_RotateActorPosition, "RotateActorPosition" }, // 4253464073
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform2, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform2, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform2, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform2, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_MaxMoveDistance = { "MaxMoveDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform2, MaxMoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMoveDistance_MetaData), NewProp_MaxMoveDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_CurrentMoveDistance = { "CurrentMoveDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform2, CurrentMoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMoveDistance_MetaData), NewProp_CurrentMoveDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_MaxRotateAngle = { "MaxRotateAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform2, MaxRotateAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRotateAngle_MetaData), NewProp_MaxRotateAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_CurrentRotateAngle = { "CurrentRotateAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform2, CurrentRotateAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRotateAngle_MetaData), NewProp_CurrentRotateAngle_MetaData) };
void Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_IsTurn_SetBit(void* Obj)
{
	((AMovingPlatform2*)Obj)->IsTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_IsTurn = { "IsTurn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovingPlatform2), &Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_IsTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTurn_MetaData), NewProp_IsTurn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_MaxMoveDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_CurrentMoveDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_MaxRotateAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_CurrentRotateAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform2_Statics::NewProp_IsTurn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatform2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform2_Statics::ClassParams = {
	&AMovingPlatform2::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMovingPlatform2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform2_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform2_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatform2()
{
	if (!Z_Registration_Info_UClass_AMovingPlatform2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform2.OuterSingleton, Z_Construct_UClass_AMovingPlatform2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatform2.OuterSingleton;
}
template<> NBC_PROJECT_6_API UClass* StaticClass<AMovingPlatform2>()
{
	return AMovingPlatform2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform2);
AMovingPlatform2::~AMovingPlatform2() {}
// End Class AMovingPlatform2

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform2, AMovingPlatform2::StaticClass, TEXT("AMovingPlatform2"), &Z_Registration_Info_UClass_AMovingPlatform2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform2), 2301351059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_1811332354(TEXT("/Script/NBC_Project_6"),
	Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
