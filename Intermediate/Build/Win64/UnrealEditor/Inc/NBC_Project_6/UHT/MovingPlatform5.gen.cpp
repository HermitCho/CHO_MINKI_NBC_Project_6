// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_6/Private/MovingPlatform5.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform5() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AMovingPlatform5();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AMovingPlatform5_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_6();
// End Cross Module References

// Begin Class AMovingPlatform5 Function ToggleVisibility
struct Z_Construct_UFunction_AMovingPlatform5_ToggleVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovingPlatform5.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform5_ToggleVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform5, nullptr, "ToggleVisibility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform5_ToggleVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform5_ToggleVisibility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMovingPlatform5_ToggleVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform5_ToggleVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform5::execToggleVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleVisibility();
	P_NATIVE_END;
}
// End Class AMovingPlatform5 Function ToggleVisibility

// Begin Class AMovingPlatform5
void AMovingPlatform5::StaticRegisterNativesAMovingPlatform5()
{
	UClass* Class = AMovingPlatform5::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ToggleVisibility", &AMovingPlatform5::execToggleVisibility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform5);
UClass* Z_Construct_UClass_AMovingPlatform5_NoRegister()
{
	return AMovingPlatform5::StaticClass();
}
struct Z_Construct_UClass_AMovingPlatform5_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform5.h" },
		{ "ModuleRelativePath", "Private/MovingPlatform5.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Platform|Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Private/MovingPlatform5.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "ModuleRelativePath", "Private/MovingPlatform5.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveDistance_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "ModuleRelativePath", "Private/MovingPlatform5.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "ModuleRelativePath", "Private/MovingPlatform5.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "ModuleRelativePath", "Private/MovingPlatform5.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReturning_MetaData[] = {
		{ "Category", "Platform|Component" },
		{ "ModuleRelativePath", "Private/MovingPlatform5.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMoveDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
	static void NewProp_bIsReturning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReturning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingPlatform5_ToggleVisibility, "ToggleVisibility" }, // 623343721
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform5>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform5, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform5, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_MaxMoveDistance = { "MaxMoveDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform5, MaxMoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMoveDistance_MetaData), NewProp_MaxMoveDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform5, MoveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirection_MetaData), NewProp_MoveDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform5, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
void Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_bIsReturning_SetBit(void* Obj)
{
	((AMovingPlatform5*)Obj)->bIsReturning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_bIsReturning = { "bIsReturning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovingPlatform5), &Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_bIsReturning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReturning_MetaData), NewProp_bIsReturning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform5_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_MaxMoveDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_MoveDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform5_Statics::NewProp_bIsReturning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform5_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatform5_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform5_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform5_Statics::ClassParams = {
	&AMovingPlatform5::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMovingPlatform5_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform5_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform5_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform5_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatform5()
{
	if (!Z_Registration_Info_UClass_AMovingPlatform5.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform5.OuterSingleton, Z_Construct_UClass_AMovingPlatform5_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatform5.OuterSingleton;
}
template<> NBC_PROJECT_6_API UClass* StaticClass<AMovingPlatform5>()
{
	return AMovingPlatform5::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform5);
AMovingPlatform5::~AMovingPlatform5() {}
// End Class AMovingPlatform5

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform5_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform5, AMovingPlatform5::StaticClass, TEXT("AMovingPlatform5"), &Z_Registration_Info_UClass_AMovingPlatform5, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform5), 675859474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform5_h_3577911188(TEXT("/Script/NBC_Project_6"),
	Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform5_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_MovingPlatform5_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
