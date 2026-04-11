// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_6/Private/MovingPlatform4.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform4() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AMovingPlatform4();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AMovingPlatform4_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_6();
// End Cross Module References

// Begin Class AMovingPlatform4 Function TogglePlatform
struct Z_Construct_UFunction_AMovingPlatform4_TogglePlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Private/MovingPlatform4.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform4_TogglePlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform4, nullptr, "TogglePlatform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform4_TogglePlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform4_TogglePlatform_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovingPlatform4_TogglePlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform4_TogglePlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform4::execTogglePlatform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TogglePlatform();
	P_NATIVE_END;
}
// End Class AMovingPlatform4 Function TogglePlatform

// Begin Class AMovingPlatform4
void AMovingPlatform4::StaticRegisterNativesAMovingPlatform4()
{
	UClass* Class = AMovingPlatform4::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TogglePlatform", &AMovingPlatform4::execTogglePlatform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform4);
UClass* Z_Construct_UClass_AMovingPlatform4_NoRegister()
{
	return AMovingPlatform4::StaticClass();
}
struct Z_Construct_UClass_AMovingPlatform4_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform4.h" },
		{ "ModuleRelativePath", "Private/MovingPlatform4.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Private/MovingPlatform4.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveDistance_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Private/MovingPlatform4.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovingPlatform4.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovingPlatform4.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMoveDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingPlatform4_TogglePlatform, "TogglePlatform" }, // 3383210014
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform4>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform4_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform4, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform4_Statics::NewProp_MaxMoveDistance = { "MaxMoveDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform4, MaxMoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMoveDistance_MetaData), NewProp_MaxMoveDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform4_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform4, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform4_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform4, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform4_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform4_Statics::NewProp_MaxMoveDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform4_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform4_Statics::NewProp_StaticMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform4_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatform4_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform4_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform4_Statics::ClassParams = {
	&AMovingPlatform4::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMovingPlatform4_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform4_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform4_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform4_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatform4()
{
	if (!Z_Registration_Info_UClass_AMovingPlatform4.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform4.OuterSingleton, Z_Construct_UClass_AMovingPlatform4_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatform4.OuterSingleton;
}
template<> NBC_PROJECT_6_API UClass* StaticClass<AMovingPlatform4>()
{
	return AMovingPlatform4::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform4);
AMovingPlatform4::~AMovingPlatform4() {}
// End Class AMovingPlatform4

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform4_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform4, AMovingPlatform4::StaticClass, TEXT("AMovingPlatform4"), &Z_Registration_Info_UClass_AMovingPlatform4, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform4), 1124948465U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform4_h_4158949783(TEXT("/Script/NBC_Project_6"),
	Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform4_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform4_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
