// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_Project_6/Private/PlatformSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_AMovingPlatform5_NoRegister();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_APlatformSpawner();
NBC_PROJECT_6_API UClass* Z_Construct_UClass_APlatformSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_Project_6();
// End Cross Module References

// Begin Class APlatformSpawner
void APlatformSpawner::StaticRegisterNativesAPlatformSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformSpawner);
UClass* Z_Construct_UClass_APlatformSpawner_NoRegister()
{
	return APlatformSpawner::StaticClass();
}
struct Z_Construct_UClass_APlatformSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformSpawner.h" },
		{ "ModuleRelativePath", "Private/PlatformSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformClass_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Private/PlatformSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Private/PlatformSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlatformClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_PlatformClass = { "PlatformClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformSpawner, PlatformClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMovingPlatform5_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformClass_MetaData), NewProp_PlatformClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformSpawner, SpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCount_MetaData), NewProp_SpawnCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_PlatformClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_SpawnCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlatformSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_Project_6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformSpawner_Statics::ClassParams = {
	&APlatformSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlatformSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlatformSpawner()
{
	if (!Z_Registration_Info_UClass_APlatformSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformSpawner.OuterSingleton, Z_Construct_UClass_APlatformSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlatformSpawner.OuterSingleton;
}
template<> NBC_PROJECT_6_API UClass* StaticClass<APlatformSpawner>()
{
	return APlatformSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformSpawner);
APlatformSpawner::~APlatformSpawner() {}
// End Class APlatformSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_PlatformSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlatformSpawner, APlatformSpawner::StaticClass, TEXT("APlatformSpawner"), &Z_Registration_Info_UClass_APlatformSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformSpawner), 886052372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_PlatformSpawner_h_2800687432(TEXT("/Script/NBC_Project_6"),
	Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_PlatformSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_Project_6_Source_NBC_Project_6_Private_PlatformSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
