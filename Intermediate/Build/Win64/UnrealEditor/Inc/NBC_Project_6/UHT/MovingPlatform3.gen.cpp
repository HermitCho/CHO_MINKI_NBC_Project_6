// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_6/Private/MovingPlatform3.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform3() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AMovingPlatform3();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AMovingPlatform3_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_6();
// End Cross Module References

// Begin Class AMovingPlatform3 Function GetMoveSpeed
struct Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics
{
	struct MovingPlatform3_eventGetMoveSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform3.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform3_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform3, nullptr, "GetMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::MovingPlatform3_eventGetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::MovingPlatform3_eventGetMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform3::execGetMoveSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
	P_NATIVE_END;
}
// End Class AMovingPlatform3 Function GetMoveSpeed

// Begin Class AMovingPlatform3 Function MoveActorPosition
struct Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics
{
	struct MovingPlatform3_eventMoveActorPosition_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Actions" },
		{ "ModuleRelativePath", "Private/MovingPlatform3.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform3_eventMoveActorPosition_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform3, nullptr, "MoveActorPosition", nullptr, nullptr, Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::MovingPlatform3_eventMoveActorPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::MovingPlatform3_eventMoveActorPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform3::execMoveActorPosition)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveActorPosition(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AMovingPlatform3 Function MoveActorPosition

// Begin Class AMovingPlatform3
void AMovingPlatform3::StaticRegisterNativesAMovingPlatform3()
{
	UClass* Class = AMovingPlatform3::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMoveSpeed", &AMovingPlatform3::execGetMoveSpeed },
		{ "MoveActorPosition", &AMovingPlatform3::execMoveActorPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform3);
UClass* Z_Construct_UClass_AMovingPlatform3_NoRegister()
{
	return AMovingPlatform3::StaticClass();
}
struct Z_Construct_UClass_AMovingPlatform3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform3.h" },
		{ "ModuleRelativePath", "Private/MovingPlatform3.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovingPlatform3.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovingPlatform3.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform3.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReturning_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform3.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveDistance_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform3.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform3.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static void NewProp_bIsReturning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReturning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMoveDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingPlatform3_GetMoveSpeed, "GetMoveSpeed" }, // 1920591192
		{ &Z_Construct_UFunction_AMovingPlatform3_MoveActorPosition, "MoveActorPosition" }, // 4096382439
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform3>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform3, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform3, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform3, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
void Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_bIsReturning_SetBit(void* Obj)
{
	((AMovingPlatform3*)Obj)->bIsReturning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_bIsReturning = { "bIsReturning", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovingPlatform3), &Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_bIsReturning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReturning_MetaData), NewProp_bIsReturning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_MaxMoveDistance = { "MaxMoveDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform3, MaxMoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMoveDistance_MetaData), NewProp_MaxMoveDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform3, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_bIsReturning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_MaxMoveDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform3_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform3_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatform3_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform3_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform3_Statics::ClassParams = {
	&AMovingPlatform3::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMovingPlatform3_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform3_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform3_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform3_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatform3()
{
	if (!Z_Registration_Info_UClass_AMovingPlatform3.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform3.OuterSingleton, Z_Construct_UClass_AMovingPlatform3_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatform3.OuterSingleton;
}
template<> NBC_PROJECT_6_API UClass* StaticClass<AMovingPlatform3>()
{
	return AMovingPlatform3::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform3);
AMovingPlatform3::~AMovingPlatform3() {}
// End Class AMovingPlatform3

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform3_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform3, AMovingPlatform3::StaticClass, TEXT("AMovingPlatform3"), &Z_Registration_Info_UClass_AMovingPlatform3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform3), 919857569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform3_h_2579374510(TEXT("/Script/NBC_Project_6"),
	Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform3_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform3_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
