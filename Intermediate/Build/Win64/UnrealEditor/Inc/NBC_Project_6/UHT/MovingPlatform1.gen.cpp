// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_6/Private/MovingPlatform1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform1() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AMovingPlatform1();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AMovingPlatform1_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_6();
// End Cross Module References

// Begin Class AMovingPlatform1 Function GetMoveSpeed
struct Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics
{
	struct MovingPlatform1_eventGetMoveSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform1_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform1, nullptr, "GetMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::MovingPlatform1_eventGetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::MovingPlatform1_eventGetMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform1::execGetMoveSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
	P_NATIVE_END;
}
// End Class AMovingPlatform1 Function GetMoveSpeed

// Begin Class AMovingPlatform1 Function GetRotationSpeed
struct Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics
{
	struct MovingPlatform1_eventGetRotationSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform1_eventGetRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform1, nullptr, "GetRotationSpeed", nullptr, nullptr, Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::MovingPlatform1_eventGetRotationSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::MovingPlatform1_eventGetRotationSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform1::execGetRotationSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRotationSpeed();
	P_NATIVE_END;
}
// End Class AMovingPlatform1 Function GetRotationSpeed

// Begin Class AMovingPlatform1 Function MoveActorPosition
struct Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics
{
	struct MovingPlatform1_eventMoveActorPosition_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Actions" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform1_eventMoveActorPosition_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform1, nullptr, "MoveActorPosition", nullptr, nullptr, Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::MovingPlatform1_eventMoveActorPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::MovingPlatform1_eventMoveActorPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform1::execMoveActorPosition)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveActorPosition(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AMovingPlatform1 Function MoveActorPosition

// Begin Class AMovingPlatform1 Function RotateActorPosition
struct Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics
{
	struct MovingPlatform1_eventRotateActorPosition_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item|Actions" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform1_eventRotateActorPosition_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform1, nullptr, "RotateActorPosition", nullptr, nullptr, Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::MovingPlatform1_eventRotateActorPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::MovingPlatform1_eventRotateActorPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform1::execRotateActorPosition)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateActorPosition(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class AMovingPlatform1 Function RotateActorPosition

// Begin Class AMovingPlatform1
void AMovingPlatform1::StaticRegisterNativesAMovingPlatform1()
{
	UClass* Class = AMovingPlatform1::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMoveSpeed", &AMovingPlatform1::execGetMoveSpeed },
		{ "GetRotationSpeed", &AMovingPlatform1::execGetRotationSpeed },
		{ "MoveActorPosition", &AMovingPlatform1::execMoveActorPosition },
		{ "RotateActorPosition", &AMovingPlatform1::execRotateActorPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform1);
UClass* Z_Construct_UClass_AMovingPlatform1_NoRegister()
{
	return AMovingPlatform1::StaticClass();
}
struct Z_Construct_UClass_AMovingPlatform1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform1.h" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Platform|Properties" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingPlatform1_GetMoveSpeed, "GetMoveSpeed" }, // 2007369085
		{ &Z_Construct_UFunction_AMovingPlatform1_GetRotationSpeed, "GetRotationSpeed" }, // 603928844
		{ &Z_Construct_UFunction_AMovingPlatform1_MoveActorPosition, "MoveActorPosition" }, // 1893154336
		{ &Z_Construct_UFunction_AMovingPlatform1_RotateActorPosition, "RotateActorPosition" }, // 3616563121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform1, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform1, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform1, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform1, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform1_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatform1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform1_Statics::ClassParams = {
	&AMovingPlatform1::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMovingPlatform1_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform1_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform1_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatform1()
{
	if (!Z_Registration_Info_UClass_AMovingPlatform1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform1.OuterSingleton, Z_Construct_UClass_AMovingPlatform1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatform1.OuterSingleton;
}
template<> NBC_PROJECT_6_API UClass* StaticClass<AMovingPlatform1>()
{
	return AMovingPlatform1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform1);
AMovingPlatform1::~AMovingPlatform1() {}
// End Class AMovingPlatform1

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform1, AMovingPlatform1::StaticClass, TEXT("AMovingPlatform1"), &Z_Registration_Info_UClass_AMovingPlatform1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform1), 2385963957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_4089604264(TEXT("/Script/NBC_Project_6"),
	Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
