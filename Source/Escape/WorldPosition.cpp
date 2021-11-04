// MIT License

#include "WorldPosition.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("Escape>> testing display logging from object name %s"), *this->GetName());
	UE_LOG(LogTemp, Warning, TEXT("Escape>> testing warn logging from object name %s"), *this->GetName());
	UE_LOG(LogTemp, Error, TEXT("Escape>> testing error logging from object name %s"), *this->GetName());
}

// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
