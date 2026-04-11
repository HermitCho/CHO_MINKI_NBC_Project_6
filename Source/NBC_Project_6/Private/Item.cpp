#include "Item.h"
#include "Components/StaticMeshComponent.h"
#include "Components/AudioComponent.h" // 오디오 컴포넌트 헤더
#include "Sound/SoundCue.h"           // 사운드 큐 헤더
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInterface.h" 

DEFINE_LOG_CATEGORY(LogNBC);

AItem::AItem()
{
    PrimaryActorTick.bCanEverTick = true;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    SetRootComponent(SceneRoot);

    StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    StaticMeshComp->SetupAttachment(SceneRoot);

    // 오디오 컴포넌트 생성 및 부착
    AudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
    AudioComp->SetupAttachment(StaticMeshComp);

    // 1. 스태틱 메시 로드
    static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMeshAsset(TEXT("/Game/Resources/Props/SM_Potion_A.SM_Potion_A"));
    if (StaticMeshAsset.Succeeded())
    {
        StaticMeshComp->SetStaticMesh(StaticMeshAsset.Object);
    }

    // 2. 머티리얼 로드
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/Resources/Materials/M_Potion_Antidote.M_Potion_Antidote"));
    if (MaterialAsset.Succeeded())
    {
        StaticMeshComp->SetMaterial(0, MaterialAsset.Object);
    }

    // 3. 오디오 에셋 로드 (수정된 부분)
    static ConstructorHelpers::FObjectFinder<USoundCue> SoundCueAsset(TEXT("/Game/Resources/Audio/Smoke01_Cue.Smoke01_Cue"));
    if (SoundCueAsset.Succeeded())
    {
        AudioComp->SetSound(SoundCueAsset.Object);
    }
}

void AItem::PostInitializeComponents()
{
    Super::PostInitializeComponents();

    UE_LOG(LogTemp, Warning, TEXT("%s PostInitializeComponents"), *GetName());
}


void AItem::BeginPlay()
{
    Super::BeginPlay();
    ResetActorPosition();
    UE_LOG(LogTemp, Warning, TEXT("%s BeginPlay"), *GetName());
}

void AItem::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (!FMath::IsNearlyZero(RotationSpeed))
    {
        AddActorLocalRotation(FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f));
    }
}

void AItem::Destroyed()
{
    UE_LOG(LogTemp, Warning, TEXT("%s Destroyed"), *GetName());

    Super::Destroyed();
}

void AItem::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    UE_LOG(LogTemp, Warning, TEXT("%s EndPlay"), *GetName());

    Super::EndPlay(EndPlayReason);
}

void AItem::ResetActorPosition()
{
    SetActorLocation(FVector::ZeroVector);
}

float AItem::GetRotationSpeed() const
{
    return RotationSpeed;
}